# Complete Python code to extract cubic spline equations from the CSV file

import pandas as pd
from scipy.interpolate import CubicSpline
import numpy as np

# Load the CSV file
file_path = 'data_plot_cut2_Kopi.csv'  # Replace with your file path if different
data = pd.read_csv(file_path, delimiter=';')
data.columns = ['True Value', 'Sensor Value']

# Sort the data to ensure monotonicity
data = data.sort_values(by='Sensor Value')

# Extract true and sensor values
true_values = data['True Value'].values
sensor_values = data['Sensor Value'].values

# Create the cubic spline
spline = CubicSpline(sensor_values, true_values, bc_type='natural')

# Extract spline coefficients and knots
spline_coeffs = spline.c  # Coefficients for each segment
spline_knots = spline.x   # Knots (x values defining the intervals)

# Prepare the Arduino-compatible output
arduino_code = """
float calibrate(float sensorValue) {
"""
for i in range(len(spline_knots) - 1):
    start_x = spline_knots[i]
    end_x = spline_knots[i + 1]
    coeffs = spline_coeffs[:, i]
    a, b, c, d = coeffs
    arduino_code += f"""
    if (sensorValue >= {start_x:.2f} && sensorValue < {end_x:.2f}) {{
        return {a:.6f} * pow((sensorValue - {start_x:.2f}), 3) +
               {b:.6f} * pow((sensorValue - {start_x:.2f}), 2) +
               {c:.6f} * (sensorValue - {start_x:.2f}) +
               {d:.6f};
    }}
"""
arduino_code += """
    return 0.0; // Default return value if no condition matches
}
"""

# Save Arduino-compatible function to a file
arduino_output_path = 'calibrate_function.ino'
with open(arduino_output_path, 'w') as file:
    file.write(arduino_code)


