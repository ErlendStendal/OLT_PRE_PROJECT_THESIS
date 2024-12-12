
float calibrate(float sensorValue) {
    if (sensorValue >= 0 && sensorValue < 2.64) {
        return sensorValue;
    }
    if (sensorValue >= 2.64 && sensorValue < 4.39) {
        return 0.000373 * pow((sensorValue - 2.64), 3) +
               0.000000 * pow((sensorValue - 2.64), 2) +
               1.284572 * (sensorValue - 2.64) +
               2.250000;
    }

    if (sensorValue >= 4.39 && sensorValue < 6.15) {
        return -0.004208 * pow((sensorValue - 4.39), 3) +
               0.001958 * pow((sensorValue - 4.39), 2) +
               1.287999 * (sensorValue - 4.39) +
               4.500000;
    }

    if (sensorValue >= 6.15 && sensorValue < 8.00) {
        return -0.000608 * pow((sensorValue - 6.15), 3) +
               -0.020263 * pow((sensorValue - 6.15), 2) +
               1.255783 * (sensorValue - 6.15) +
               6.750000;
    }

    if (sensorValue >= 8.00 && sensorValue < 9.84) {
        return 0.027100 * pow((sensorValue - 8.00), 3) +
               -0.023637 * pow((sensorValue - 8.00), 2) +
               1.174568 * (sensorValue - 8.00) +
               9.000000;
    }

    if (sensorValue >= 9.84 && sensorValue < 11.43) {
        return -0.058546 * pow((sensorValue - 9.84), 3) +
               0.125956 * pow((sensorValue - 9.84), 2) +
               1.362834 * (sensorValue - 9.84) +
               11.250000;
    }

    if (sensorValue >= 11.43 && sensorValue < 13.36) {
        return 0.038213 * pow((sensorValue - 11.43), 3) +
               -0.153307 * pow((sensorValue - 11.43), 2) +
               1.319345 * (sensorValue - 11.43) +
               13.500000;
    }

    if (sensorValue >= 13.36 && sensorValue < 15.21) {
        return -0.018725 * pow((sensorValue - 13.36), 3) +
               0.067947 * pow((sensorValue - 13.36), 2) +
               1.154601 * (sensorValue - 13.36) +
               15.750000;
    }

    if (sensorValue >= 15.21 && sensorValue < 17.05) {
        return 0.022236 * pow((sensorValue - 15.21), 3) +
               -0.035979 * pow((sensorValue - 15.21), 2) +
               1.213743 * (sensorValue - 15.21) +
               18.000000;
    }

    if (sensorValue >= 17.05 && sensorValue < 18.72) {
        return -0.037573 * pow((sensorValue - 17.05), 3) +
               0.086767 * pow((sensorValue - 17.05), 2) +
               1.307193 * (sensorValue - 17.05) +
               20.250000;
    }

    if (sensorValue >= 18.72 && sensorValue < 20.57) {
        return 0.035446 * pow((sensorValue - 18.72), 3) +
               -0.101475 * pow((sensorValue - 18.72), 2) +
               1.282630 * (sensorValue - 18.72) +
               22.500000;
    }

    if (sensorValue >= 20.57 && sensorValue < 22.24) {
        return -0.029717 * pow((sensorValue - 20.57), 3) +
               0.095250 * pow((sensorValue - 20.57), 2) +
               1.271116 * (sensorValue - 20.57) +
               24.750000;
    }

    if (sensorValue >= 22.24 && sensorValue < 23.99) {
        return 0.012720 * pow((sensorValue - 22.24), 3) +
               -0.053633 * pow((sensorValue - 22.24), 2) +
               1.340617 * (sensorValue - 22.24) +
               27.000000;
    }

    if (sensorValue >= 23.99 && sensorValue < 25.75) {
        return -0.004679 * pow((sensorValue - 23.99), 3) +
               0.013146 * pow((sensorValue - 23.99), 2) +
               1.269765 * (sensorValue - 23.99) +
               29.250000;
    }

    if (sensorValue >= 25.75 && sensorValue < 27.51) {
        return 0.008456 * pow((sensorValue - 25.75), 3) +
               -0.011558 * pow((sensorValue - 25.75), 2) +
               1.272560 * (sensorValue - 25.75) +
               31.500000;
    }

    if (sensorValue >= 27.51 && sensorValue < 29.18) {
        return -0.006598 * pow((sensorValue - 27.51), 3) +
               0.033088 * pow((sensorValue - 27.51), 2) +
               1.310451 * (sensorValue - 27.51) +
               33.750000;
    }

    if (sensorValue >= 29.18 && sensorValue < 30.85) {
        return -0.006635 * pow((sensorValue - 29.18), 3) +
               0.000031 * pow((sensorValue - 29.18), 2) +
               1.365758 * (sensorValue - 29.18) +
               36.000000;
    }

    if (sensorValue >= 30.85 && sensorValue < 32.61) {
        return 0.008558 * pow((sensorValue - 30.85), 3) +
               -0.033210 * pow((sensorValue - 30.85), 2) +
               1.310349 * (sensorValue - 30.85) +
               38.250000;
    }

    if (sensorValue >= 32.61 && sensorValue < 34.37) {
        return -0.005052 * pow((sensorValue - 32.61), 3) +
               0.011977 * pow((sensorValue - 32.61), 2) +
               1.272979 * (sensorValue - 32.61) +
               40.500000;
    }

    if (sensorValue >= 34.37 && sensorValue < 36.12) {
        return 0.014120 * pow((sensorValue - 34.37), 3) +
               -0.014697 * pow((sensorValue - 34.37), 2) +
               1.268191 * (sensorValue - 34.37) +
               42.750000;
    }

    if (sensorValue >= 36.12 && sensorValue < 37.71) {
        return -0.010239 * pow((sensorValue - 36.12), 3) +
               0.059433 * pow((sensorValue - 36.12), 2) +
               1.346480 * (sensorValue - 36.12) +
               45.000000;
    }

    if (sensorValue >= 37.71 && sensorValue < 39.29) {
        return -0.020235 * pow((sensorValue - 37.71), 3) +
               0.010595 * pow((sensorValue - 37.71), 2) +
               1.457825 * (sensorValue - 37.71) +
               47.250000;
    }

    if (sensorValue >= 39.29 && sensorValue < 41.13) {
        return 0.011829 * pow((sensorValue - 39.29), 3) +
               -0.085318 * pow((sensorValue - 39.29), 2) +
               1.339762 * (sensorValue - 39.29) +
               49.500000;
    }

    if (sensorValue >= 41.13 && sensorValue < 42.89) {
        return 0.054141 * pow((sensorValue - 41.13), 3) +
               -0.020021 * pow((sensorValue - 41.13), 2) +
               1.145938 * (sensorValue - 41.13) +
               51.750000;
    }

    if (sensorValue >= 42.89 && sensorValue < 44.21) {
        return -0.129108 * pow((sensorValue - 42.89), 3) +
               0.265845 * pow((sensorValue - 42.89), 2) +
               1.578588 * (sensorValue - 42.89) +
               54.000000;
    }

    if (sensorValue >= 44.21 && sensorValue < 45.88) {
        return 0.054365 * pow((sensorValue - 44.21), 3) +
               -0.245424 * pow((sensorValue - 44.21), 2) +
               1.605545 * (sensorValue - 44.21) +
               56.250000;
    }

    if (sensorValue >= 45.88 && sensorValue < 47.64) {
        return -0.003131 * pow((sensorValue - 45.88), 3) +
               0.026945 * pow((sensorValue - 45.88), 2) +
               1.240684 * (sensorValue - 45.88) +
               58.500000;
    }

    if (sensorValue >= 47.64 && sensorValue < 49.31) {
        return 0.008418 * pow((sensorValue - 47.64), 3) +
               0.010414 * pow((sensorValue - 47.64), 2) +
               1.306436 * (sensorValue - 47.64) +
               60.750000;
    }

    if (sensorValue >= 49.31 && sensorValue < 50.89) {
        return -0.028318 * pow((sensorValue - 49.31), 3) +
               0.052590 * pow((sensorValue - 49.31), 2) +
               1.411652 * (sensorValue - 49.31) +
               63.000000;
    }

    if (sensorValue >= 50.89 && sensorValue < 52.65) {
        return 0.018187 * pow((sensorValue - 50.89), 3) +
               -0.081638 * pow((sensorValue - 50.89), 2) +
               1.365756 * (sensorValue - 50.89) +
               65.250000;
    }

    if (sensorValue >= 52.65 && sensorValue < 54.40) {
        return 0.004289 * pow((sensorValue - 52.65), 3) +
               0.014390 * pow((sensorValue - 52.65), 2) +
               1.247399 * (sensorValue - 52.65) +
               67.500000;
    }

    if (sensorValue >= 54.40 && sensorValue < 56.07) {
        return -0.018462 * pow((sensorValue - 54.40), 3) +
               0.036905 * pow((sensorValue - 54.40), 2) +
               1.337164 * (sensorValue - 54.40) +
               69.750000;
    }

    if (sensorValue >= 56.07 && sensorValue < 57.83) {
        return 0.022692 * pow((sensorValue - 56.07), 3) +
               -0.055591 * pow((sensorValue - 56.07), 2) +
               1.305958 * (sensorValue - 56.07) +
               72.000000;
    }

    if (sensorValue >= 57.83 && sensorValue < 59.50) {
        return -0.029080 * pow((sensorValue - 57.83), 3) +
               0.064224 * pow((sensorValue - 57.83), 2) +
               1.321152 * (sensorValue - 57.83) +
               74.250000;
    }

    if (sensorValue >= 59.50 && sensorValue < 61.35) {
        return 0.021787 * pow((sensorValue - 59.50), 3) +
               -0.081465 * pow((sensorValue - 59.50), 2) +
               1.292359 * (sensorValue - 59.50) +
               76.500000;
    }

    if (sensorValue >= 61.35 && sensorValue < 63.11) {
        return -0.001831 * pow((sensorValue - 61.35), 3) +
               0.039455 * pow((sensorValue - 61.35), 2) +
               1.214640 * (sensorValue - 61.35) +
               78.750000;
    }

    if (sensorValue >= 63.11 && sensorValue < 64.78) {
        return -0.013964 * pow((sensorValue - 63.11), 3) +
               0.029787 * pow((sensorValue - 63.11), 2) +
               1.336506 * (sensorValue - 63.11) +
               81.000000;
    }

    if (sensorValue >= 64.78 && sensorValue < 66.53) {
        return 0.012035 * pow((sensorValue - 64.78), 3) +
               -0.040174 * pow((sensorValue - 64.78), 2) +
               1.319160 * (sensorValue - 64.78) +
               83.250000;
    }

    if (sensorValue >= 66.53 && sensorValue < 68.29) {
        return -0.016535 * pow((sensorValue - 66.53), 3) +
               0.023012 * pow((sensorValue - 66.53), 2) +
               1.289127 * (sensorValue - 66.53) +
               85.500000;
    }

    if (sensorValue >= 68.29 && sensorValue < 70.22) {
        return 0.019710 * pow((sensorValue - 68.29), 3) +
               -0.064294 * pow((sensorValue - 68.29), 2) +
               1.216471 * (sensorValue - 68.29) +
               87.750000;
    }

    if (sensorValue >= 70.22 && sensorValue < 72.07) {
        return -0.018852 * pow((sensorValue - 70.22), 3) +
               0.049829 * pow((sensorValue - 70.22), 2) +
               1.188554 * (sensorValue - 70.22) +
               90.000000;
    }

    if (sensorValue >= 72.07 && sensorValue < 74.00) {
        return 0.024755 * pow((sensorValue - 72.07), 3) +
               -0.054800 * pow((sensorValue - 72.07), 2) +
               1.179357 * (sensorValue - 72.07) +
               92.250000;
    }

    if (sensorValue >= 74.00 && sensorValue < 75.76) {
        return -0.039343 * pow((sensorValue - 74.00), 3) +
               0.088533 * pow((sensorValue - 74.00), 2) +
               1.244461 * (sensorValue - 74.00) +
               94.500000;
    }

    if (sensorValue >= 75.76 && sensorValue < 77.78) {
        return 0.040230 * pow((sensorValue - 75.76), 3) +
               -0.119199 * pow((sensorValue - 75.76), 2) +
               1.190488 * (sensorValue - 75.76) +
               96.750000;
    }

    if (sensorValue >= 77.78 && sensorValue < 79.54) {
        return -0.045929 * pow((sensorValue - 77.78), 3) +
               0.124596 * pow((sensorValue - 77.78), 2) +
               1.201390 * (sensorValue - 77.78) +
               99.000000;
    }

    if (sensorValue >= 79.54 && sensorValue < 81.56) {
        return 0.034037 * pow((sensorValue - 79.54), 3) +
               -0.117911 * pow((sensorValue - 79.54), 2) +
               1.213157 * (sensorValue - 79.54) +
               101.250000;
    }

    if (sensorValue >= 81.56 && sensorValue < 83.41) {
        return -0.029419 * pow((sensorValue - 81.56), 3) +
               0.088353 * pow((sensorValue - 81.56), 2) +
               1.153450 * (sensorValue - 81.56) +
               103.500000;
    }

    if (sensorValue >= 83.41 && sensorValue < 85.43) {
        return 0.021298 * pow((sensorValue - 83.41), 3) +
               -0.074921 * pow((sensorValue - 83.41), 2) +
               1.178297 * (sensorValue - 83.41) +
               105.750000;
    }

    if (sensorValue >= 85.43 && sensorValue < 87.36) {
        return -0.020143 * pow((sensorValue - 85.43), 3) +
               0.054146 * pow((sensorValue - 85.43), 2) +
               1.136331 * (sensorValue - 85.43) +
               108.000000;
    }

    if (sensorValue >= 87.36 && sensorValue < 89.38) {
        return 0.029366 * pow((sensorValue - 87.36), 3) +
               -0.062481 * pow((sensorValue - 87.36), 2) +
               1.120245 * (sensorValue - 87.36) +
               110.250000;
    }

    if (sensorValue >= 89.38 && sensorValue < 91.14) {
        return -0.049116 * pow((sensorValue - 89.38), 3) +
               0.115480 * pow((sensorValue - 89.38), 2) +
               1.227304 * (sensorValue - 89.38) +
               112.500000;
    }

    if (sensorValue >= 91.14 && sensorValue < 93.25) {
        return 0.043238 * pow((sensorValue - 91.14), 3) +
               -0.143850 * pow((sensorValue - 91.14), 2) +
               1.177373 * (sensorValue - 91.14) +
               114.750000;
    }

    if (sensorValue >= 93.25 && sensorValue < 95.01) {
        return -0.031623 * pow((sensorValue - 93.25), 3) +
               0.129849 * pow((sensorValue - 93.25), 2) +
               1.147830 * (sensorValue - 93.25) +
               117.000000;
    }

    if (sensorValue >= 95.01 && sensorValue < 96.86) {
        return -0.007639 * pow((sensorValue - 95.01), 3) +
               -0.037120 * pow((sensorValue - 95.01), 2) +
               1.311033 * (sensorValue - 95.01) +
               119.250000;
    }

    if (sensorValue >= 96.86 && sensorValue < 99.05) {
        return 0.022162 * pow((sensorValue - 96.86), 3) +
               -0.079518 * pow((sensorValue - 96.86), 2) +
               1.095253 * (sensorValue - 96.86) +
               121.500000;
    }

    if (sensorValue >= 99.05 && sensorValue < 100.99) {
        return -0.009097 * pow((sensorValue - 99.05), 3) +
               0.066083 * pow((sensorValue - 99.05), 2) +
               1.065831 * (sensorValue - 99.05) +
               123.750000;
    }

    if (sensorValue >= 100.99 && sensorValue < 102.83) {
        return -0.006163 * pow((sensorValue - 100.99), 3) +
               0.013137 * pow((sensorValue - 100.99), 2) +
               1.219518 * (sensorValue - 100.99) +
               126.000000;
    }

    if (sensorValue >= 102.83 && sensorValue < 104.77) {
        return -0.001319 * pow((sensorValue - 102.83), 3) +
               -0.020881 * pow((sensorValue - 102.83), 2) +
               1.205269 * (sensorValue - 102.83) +
               128.250000;
    }

    if (sensorValue >= 104.77 && sensorValue < 106.79) {
        return 0.015244 * pow((sensorValue - 104.77), 3) +
               -0.028560 * pow((sensorValue - 104.77), 2) +
               1.109353 * (sensorValue - 104.77) +
               130.500000;
    }

    if (sensorValue >= 106.79 && sensorValue < 108.63) {
        return -0.022202 * pow((sensorValue - 106.79), 3) +
               0.063817 * pow((sensorValue - 106.79), 2) +
               1.180571 * (sensorValue - 106.79) +
               132.750000;
    }

    if (sensorValue >= 108.63 && sensorValue < 110.65) {
        return 0.010441 * pow((sensorValue - 108.63), 3) +
               -0.058740 * pow((sensorValue - 108.63), 2) +
               1.189913 * (sensorValue - 108.63) +
               135.000000;
    }

    if (sensorValue >= 110.65 && sensorValue < 112.68) {
        return 0.004554 * pow((sensorValue - 110.65), 3) +
               0.004531 * pow((sensorValue - 110.65), 2) +
               1.080412 * (sensorValue - 110.65) +
               137.250000;
    }

    if (sensorValue >= 112.68 && sensorValue < 114.61) {
        return -0.013844 * pow((sensorValue - 112.68), 3) +
               0.032263 * pow((sensorValue - 112.68), 2) +
               1.155103 * (sensorValue - 112.68) +
               139.500000;
    }

    if (sensorValue >= 114.61 && sensorValue < 116.63) {
        return 0.020995 * pow((sensorValue - 114.61), 3) +
               -0.047892 * pow((sensorValue - 114.61), 2) +
               1.124937 * (sensorValue - 114.61) +
               141.750000;
    }

    if (sensorValue >= 116.63 && sensorValue < 118.48) {
        return -0.034772 * pow((sensorValue - 116.63), 3) +
               0.079336 * pow((sensorValue - 116.63), 2) +
               1.188453 * (sensorValue - 116.63) +
               144.000000;
    }

    if (sensorValue >= 118.48 && sensorValue < 120.67) {
        return 0.031550 * pow((sensorValue - 118.48), 3) +
               -0.113650 * pow((sensorValue - 118.48), 2) +
               1.124972 * (sensorValue - 118.48) +
               146.250000;
    }

    if (sensorValue >= 120.67 && sensorValue < 122.61) {
        return -0.027367 * pow((sensorValue - 120.67), 3) +
               0.093635 * pow((sensorValue - 120.67), 2) +
               1.081141 * (sensorValue - 120.67) +
               148.500000;
    }

    if (sensorValue >= 122.61 && sensorValue < 124.72) {
        return 0.015590 * pow((sensorValue - 122.61), 3) +
               -0.065642 * pow((sensorValue - 122.61), 2) +
               1.135448 * (sensorValue - 122.61) +
               150.750000;
    }

    if (sensorValue >= 124.72 && sensorValue < 126.74) {
        return -0.004789 * pow((sensorValue - 124.72), 3) +
               0.033041 * pow((sensorValue - 124.72), 2) +
               1.066661 * (sensorValue - 124.72) +
               153.000000;
    }

    if (sensorValue >= 126.74 && sensorValue < 128.76) {
        return -0.008767 * pow((sensorValue - 126.74), 3) +
               0.004017 * pow((sensorValue - 126.74), 2) +
               1.141519 * (sensorValue - 126.74) +
               155.250000;
    }

    if (sensorValue >= 128.76 && sensorValue < 131.04) {
        return 0.009307 * pow((sensorValue - 128.76), 3) +
               -0.049110 * pow((sensorValue - 128.76), 2) +
               1.050431 * (sensorValue - 128.76) +
               157.500000;
    }

    if (sensorValue >= 131.04 && sensorValue < 133.24) {
        return 0.003942 * pow((sensorValue - 131.04), 3) +
               0.014552 * pow((sensorValue - 131.04), 2) +
               0.971636 * (sensorValue - 131.04) +
               159.750000;
    }

    if (sensorValue >= 133.24 && sensorValue < 135.26) {
        return -0.014944 * pow((sensorValue - 133.24), 3) +
               0.040566 * pow((sensorValue - 133.24), 2) +
               1.092896 * (sensorValue - 133.24) +
               162.000000;
    }

    if (sensorValue >= 135.26 && sensorValue < 137.55) {
        return 0.004419 * pow((sensorValue - 135.26), 3) +
               -0.049995 * pow((sensorValue - 135.26), 2) +
               1.073849 * (sensorValue - 135.26) +
               164.250000;
    }

    if (sensorValue >= 137.55 && sensorValue < 140.01) {
        return 0.008024 * pow((sensorValue - 137.55), 3) +
               -0.019639 * pow((sensorValue - 137.55), 2) +
               0.914388 * (sensorValue - 137.55) +
               166.500000;
    }

    if (sensorValue >= 140.01 && sensorValue < 142.29) {
        return -0.012856 * pow((sensorValue - 140.01), 3) +
               0.039578 * pow((sensorValue - 140.01), 2) +
               0.963438 * (sensorValue - 140.01) +
               168.750000;
    }

    if (sensorValue >= 142.29 && sensorValue < 144.84) {
        return 0.009574 * pow((sensorValue - 142.29), 3) +
               -0.048360 * pow((sensorValue - 142.29), 2) +
               0.943414 * (sensorValue - 142.29) +
               171.000000;
    }

    if (sensorValue >= 144.84 && sensorValue < 147.30) {
        return -0.004979 * pow((sensorValue - 144.84), 3) +
               0.024884 * pow((sensorValue - 144.84), 2) +
               0.883549 * (sensorValue - 144.84) +
               173.250000;
    }

    if (sensorValue >= 147.30 && sensorValue < 149.85) {
        return -0.000461 * pow((sensorValue - 147.30), 3) +
               -0.011859 * pow((sensorValue - 147.30), 2) +
               0.915591 * (sensorValue - 147.30) +
               175.500000;
    }

    if (sensorValue >= 149.85 && sensorValue < 152.58) {
        return 0.002692 * pow((sensorValue - 149.85), 3) +
               -0.015386 * pow((sensorValue - 149.85), 2) +
               0.846117 * (sensorValue - 149.85) +
               177.750000;
    }

    if (sensorValue >= 152.58 && sensorValue < 155.30) {
        return -0.001785 * pow((sensorValue - 152.58), 3) +
               0.006660 * pow((sensorValue - 152.58), 2) +
               0.822296 * (sensorValue - 152.58) +
               180.000000;
    }

    if (sensorValue >= 155.30 && sensorValue < 158.12) {
        return 0.000157 * pow((sensorValue - 155.30), 3) +
               -0.007904 * pow((sensorValue - 155.30), 2) +
               0.818912 * (sensorValue - 155.30) +
               182.250000;
    }

    if (sensorValue >= 158.12 && sensorValue < 161.02) {
        return 0.002003 * pow((sensorValue - 158.12), 3) +
               -0.006574 * pow((sensorValue - 158.12), 2) +
               0.778083 * (sensorValue - 158.12) +
               184.500000;
    }

    if (sensorValue >= 161.02 && sensorValue < 163.83) {
        return -0.002567 * pow((sensorValue - 161.02), 3) +
               0.010851 * pow((sensorValue - 161.02), 2) +
               0.790486 * (sensorValue - 161.02) +
               186.750000;
    }

    if (sensorValue >= 163.83 && sensorValue < 166.82) {
        return -0.000661 * pow((sensorValue - 163.83), 3) +
               -0.010786 * pow((sensorValue - 163.83), 2) +
               0.790670 * (sensorValue - 163.83) +
               189.000000;
    }

    if (sensorValue >= 166.82 && sensorValue < 169.98) {
        return 0.005650 * pow((sensorValue - 166.82), 3) +
               -0.016717 * pow((sensorValue - 166.82), 2) +
               0.708435 * (sensorValue - 166.82) +
               191.250000;
    }

    if (sensorValue >= 169.98 && sensorValue < 172.79) {
        return -0.009479 * pow((sensorValue - 169.98), 3) +
               0.036843 * pow((sensorValue - 169.98), 2) +
               0.772032 * (sensorValue - 169.98) +
               193.500000;
    }

    if (sensorValue >= 172.79 && sensorValue < 175.96) {
        return 0.009132 * pow((sensorValue - 172.79), 3) +
               -0.043068 * pow((sensorValue - 172.79), 2) +
               0.754542 * (sensorValue - 172.79) +
               195.750000;
    }

    if (sensorValue >= 175.96 && sensorValue < 178.77) {
        return -0.010014 * pow((sensorValue - 175.96), 3) +
               0.043773 * pow((sensorValue - 175.96), 2) +
               0.756779 * (sensorValue - 175.96) +
               198.000000;
    }

    if (sensorValue >= 178.77 && sensorValue < 182.02) {
        return 0.005569 * pow((sensorValue - 178.77), 3) +
               -0.040643 * pow((sensorValue - 178.77), 2) +
               0.765575 * (sensorValue - 178.77) +
               200.250000;
    }

    if (sensorValue >= 182.02 && sensorValue < 185.19) {
        return -0.001131 * pow((sensorValue - 182.02), 3) +
               0.013653 * pow((sensorValue - 182.02), 2) +
               0.677861 * (sensorValue - 182.02) +
               202.500000;
    }

    if (sensorValue >= 185.19 && sensorValue < 188.26) {
        return -0.000672 * pow((sensorValue - 185.19), 3) +
               0.002900 * pow((sensorValue - 185.19), 2) +
               0.730335 * (sensorValue - 185.19) +
               204.750000;
    }

    if (sensorValue >= 188.26 && sensorValue < 191.34) {
        return 0.001216 * pow((sensorValue - 188.26), 3) +
               -0.003294 * pow((sensorValue - 188.26), 2) +
               0.729125 * (sensorValue - 188.26) +
               207.000000;
    }

    if (sensorValue >= 191.34 && sensorValue < 194.41) {
        return -0.003708 * pow((sensorValue - 191.34), 3) +
               0.007945 * pow((sensorValue - 191.34), 2) +
               0.743452 * (sensorValue - 191.34) +
               209.250000;
    }

    if (sensorValue >= 194.41 && sensorValue < 197.75) {
        return 0.006613 * pow((sensorValue - 194.41), 3) +
               -0.026203 * pow((sensorValue - 194.41), 2) +
               0.687401 * (sensorValue - 194.41) +
               211.500000;
    }

    if (sensorValue >= 197.75 && sensorValue < 200.57) {
        return -0.006132 * pow((sensorValue - 197.75), 3) +
               0.040057 * pow((sensorValue - 197.75), 2) +
               0.733674 * (sensorValue - 197.75) +
               213.750000;
    }

    if (sensorValue >= 200.57 && sensorValue < 203.47) {
        return -0.000378 * pow((sensorValue - 200.57), 3) +
               -0.011818 * pow((sensorValue - 200.57), 2) +
               0.813309 * (sensorValue - 200.57) +
               216.000000;
    }

    if (sensorValue >= 203.47 && sensorValue < 206.63) {
        return 0.002454 * pow((sensorValue - 203.47), 3) +
               -0.015102 * pow((sensorValue - 203.47), 2) +
               0.735240 * (sensorValue - 203.47) +
               218.250000;
    }

    if (sensorValue >= 206.63 && sensorValue < 209.71) {
        return -0.000838 * pow((sensorValue - 206.63), 3) +
               0.008165 * pow((sensorValue - 206.63), 2) +
               0.713319 * (sensorValue - 206.63) +
               220.500000;
    }

    if (sensorValue >= 209.71 && sensorValue < 212.78) {
        return -0.000867 * pow((sensorValue - 209.71), 3) +
               0.000423 * pow((sensorValue - 209.71), 2) +
               0.739770 * (sensorValue - 209.71) +
               222.750000;
    }

    if (sensorValue >= 212.78 && sensorValue < 215.86) {
        return 0.003789 * pow((sensorValue - 212.78), 3) +
               -0.007560 * pow((sensorValue - 212.78), 2) +
               0.717859 * (sensorValue - 212.78) +
               225.000000;
    }

    if (sensorValue >= 215.86 && sensorValue < 218.67) {
        return -0.007036 * pow((sensorValue - 215.86), 3) +
               0.027452 * pow((sensorValue - 215.86), 2) +
               0.779126 * (sensorValue - 215.86) +
               227.250000;
    }

    if (sensorValue >= 218.67 && sensorValue < 221.84) {
        return 0.004382 * pow((sensorValue - 218.67), 3) +
               -0.031859 * pow((sensorValue - 218.67), 2) +
               0.766743 * (sensorValue - 218.67) +
               229.500000;
    }

    if (sensorValue >= 221.84 && sensorValue < 225.00) {
        return -0.001584 * pow((sensorValue - 221.84), 3) +
               0.009810 * pow((sensorValue - 221.84), 2) +
               0.696846 * (sensorValue - 221.84) +
               231.750000;
    }

    if (sensorValue >= 225.00 && sensorValue < 228.16) {
        return 0.001712 * pow((sensorValue - 225.00), 3) +
               -0.005208 * pow((sensorValue - 225.00), 2) +
               0.711386 * (sensorValue - 225.00) +
               234.000000;
    }

    if (sensorValue >= 228.16 && sensorValue < 231.24) {
        return -0.003499 * pow((sensorValue - 228.16), 3) +
               0.011023 * pow((sensorValue - 228.16), 2) +
               0.729761 * (sensorValue - 228.16) +
               236.250000;
    }

    if (sensorValue >= 231.24 && sensorValue < 234.67) {
        return 0.002632 * pow((sensorValue - 231.24), 3) +
               -0.021306 * pow((sensorValue - 231.24), 2) +
               0.698088 * (sensorValue - 231.24) +
               238.500000;
    }

    if (sensorValue >= 234.67 && sensorValue < 238.01) {
        return 0.000853 * pow((sensorValue - 234.67), 3) +
               0.005780 * pow((sensorValue - 234.67), 2) +
               0.644834 * (sensorValue - 234.67) +
               240.750000;
    }

    if (sensorValue >= 238.01 && sensorValue < 241.08) {
        return -0.002447 * pow((sensorValue - 238.01), 3) +
               0.014325 * pow((sensorValue - 238.01), 2) +
               0.711984 * (sensorValue - 238.01) +
               243.000000;
    }

    if (sensorValue >= 241.08 && sensorValue < 244.34) {
        return -0.001298 * pow((sensorValue - 241.08), 3) +
               -0.008211 * pow((sensorValue - 241.08), 2) +
               0.730752 * (sensorValue - 241.08) +
               245.250000;
    }

    if (sensorValue >= 244.34 && sensorValue < 248.03) {
        return 0.003753 * pow((sensorValue - 244.34), 3) +
               -0.020910 * pow((sensorValue - 244.34), 2) +
               0.635816 * (sensorValue - 244.34) +
               247.500000;
    }

    if (sensorValue >= 248.03 && sensorValue < 251.37) {
        return -0.002694 * pow((sensorValue - 248.03), 3) +
               0.020634 * pow((sensorValue - 248.03), 2) +
               0.634795 * (sensorValue - 248.03) +
               249.750000;
    }

    if (sensorValue >= 251.37 && sensorValue < 254.79) {
        return -0.000238 * pow((sensorValue - 251.37), 3) +
               -0.006365 * pow((sensorValue - 251.37), 2) +
               0.682452 * (sensorValue - 251.37) +
               252.000000;
    }

    if (sensorValue >= 254.79 && sensorValue < 258.40) {
        return 0.001882 * pow((sensorValue - 254.79), 3) +
               -0.008811 * pow((sensorValue - 254.79), 2) +
               0.630550 * (sensorValue - 254.79) +
               254.250000;
    }

    if (sensorValue >= 258.40 && sensorValue < 261.83) {
        return -0.002059 * pow((sensorValue - 258.40), 3) +
               0.011571 * pow((sensorValue - 258.40), 2) +
               0.640513 * (sensorValue - 258.40) +
               256.500000;
    }

    if (sensorValue >= 261.83 && sensorValue < 265.43) {
        return 0.000957 * pow((sensorValue - 261.83), 3) +
               -0.009617 * pow((sensorValue - 261.83), 2) +
               0.647216 * (sensorValue - 261.83) +
               258.750000;
    }

    if (sensorValue >= 265.43 && sensorValue < 268.95) {
        return 0.001734 * pow((sensorValue - 265.43), 3) +
               0.000720 * pow((sensorValue - 265.43), 2) +
               0.615188 * (sensorValue - 265.43) +
               261.000000;
    }

    if (sensorValue >= 268.95 && sensorValue < 272.11) {
        return -0.003285 * pow((sensorValue - 268.95), 3) +
               0.019028 * pow((sensorValue - 268.95), 2) +
               0.684702 * (sensorValue - 268.95) +
               263.250000;
    }

    if (sensorValue >= 272.11 && sensorValue < 275.45) {
        return 0.000679 * pow((sensorValue - 272.11), 3) +
               -0.012116 * pow((sensorValue - 272.11), 2) +
               0.706544 * (sensorValue - 272.11) +
               265.500000;
    }

    if (sensorValue >= 275.45 && sensorValue < 278.88) {
        return 0.002198 * pow((sensorValue - 275.45), 3) +
               -0.005311 * pow((sensorValue - 275.45), 2) +
               0.648337 * (sensorValue - 275.45) +
               267.750000;
    }

    if (sensorValue >= 278.88 && sensorValue < 282.04) {
        return -0.003218 * pow((sensorValue - 278.88), 3) +
               0.017305 * pow((sensorValue - 278.88), 2) +
               0.689474 * (sensorValue - 278.88) +
               270.000000;
    }

    if (sensorValue >= 282.04 && sensorValue < 285.29) {
        return 0.003102 * pow((sensorValue - 282.04), 3) +
               -0.013200 * pow((sensorValue - 282.04), 2) +
               0.702445 * (sensorValue - 282.04) +
               272.250000;
    }

    if (sensorValue >= 285.29 && sensorValue < 288.37) {
        return -0.003890 * pow((sensorValue - 285.29), 3) +
               0.017042 * pow((sensorValue - 285.29), 2) +
               0.714931 * (sensorValue - 285.29) +
               274.500000;
    }

    if (sensorValue >= 288.37 && sensorValue < 291.45) {
        return 0.008383 * pow((sensorValue - 288.37), 3) +
               -0.018900 * pow((sensorValue - 288.37), 2) +
               0.709208 * (sensorValue - 288.37) +
               276.750000;
    }

    if (sensorValue >= 291.45 && sensorValue < 293.99) {
        return -0.014611 * pow((sensorValue - 291.45), 3) +
               0.058557 * pow((sensorValue - 291.45), 2) +
               0.831353 * (sensorValue - 291.45) +
               279.000000;
    }

    if (sensorValue >= 293.99 && sensorValue < 296.81) {
        return 0.012658 * pow((sensorValue - 293.99), 3) +
               -0.052776 * pow((sensorValue - 293.99), 2) +
               0.846039 * (sensorValue - 293.99) +
               281.250000;
    }

    if (sensorValue >= 296.81 && sensorValue < 299.27) {
        return -0.011458 * pow((sensorValue - 296.81), 3) +
               0.054311 * pow((sensorValue - 296.81), 2) +
               0.850367 * (sensorValue - 296.81) +
               283.500000;
    }

    if (sensorValue >= 299.27 && sensorValue < 301.82) {
        return 0.007677 * pow((sensorValue - 299.27), 3) +
               -0.030247 * pow((sensorValue - 299.27), 2) +
               0.909564 * (sensorValue - 299.27) +
               285.750000;
    }

    if (sensorValue >= 301.82 && sensorValue < 304.19) {
        return -0.004128 * pow((sensorValue - 301.82), 3) +
               0.028480 * pow((sensorValue - 301.82), 2) +
               0.905059 * (sensorValue - 301.82) +
               288.000000;
    }

    if (sensorValue >= 304.19 && sensorValue < 306.56) {
        return -0.003392 * pow((sensorValue - 304.19), 3) +
               -0.000873 * pow((sensorValue - 304.19), 2) +
               0.970486 * (sensorValue - 304.19) +
               290.250000;
    }

    if (sensorValue >= 306.56 && sensorValue < 308.94) {
        return 0.016886 * pow((sensorValue - 306.56), 3) +
               -0.024987 * pow((sensorValue - 306.56), 2) +
               0.909198 * (sensorValue - 306.56) +
               292.500000;
    }

    if (sensorValue >= 308.94 && sensorValue < 310.87) {
        return -0.025738 * pow((sensorValue - 308.94), 3) +
               0.095579 * pow((sensorValue - 308.94), 2) +
               1.077207 * (sensorValue - 308.94) +
               294.750000;
    }

    if (sensorValue >= 310.87 && sensorValue < 312.89) {
        return 0.015511 * pow((sensorValue - 310.87), 3) +
               -0.053444 * pow((sensorValue - 310.87), 2) +
               1.158528 * (sensorValue - 310.87) +
               297.000000;
    }

    if (sensorValue >= 312.89 && sensorValue < 314.82) {
        return -0.012066 * pow((sensorValue - 312.89), 3) +
               0.040550 * pow((sensorValue - 312.89), 2) +
               1.132484 * (sensorValue - 312.89) +
               299.250000;
    }

    if (sensorValue >= 314.82 && sensorValue < 316.85) {
        return 0.003323 * pow((sensorValue - 314.82), 3) +
               -0.029309 * pow((sensorValue - 314.82), 2) +
               1.154179 * (sensorValue - 314.82) +
               301.500000;
    }

    if (sensorValue >= 316.85 && sensorValue < 318.87) {
        return 0.013706 * pow((sensorValue - 316.85), 3) +
               -0.009074 * pow((sensorValue - 316.85), 2) +
               1.076262 * (sensorValue - 316.85) +
               303.750000;
    }

    if (sensorValue >= 318.87 && sensorValue < 320.62) {
        return -0.016703 * pow((sensorValue - 318.87), 3) +
               0.073988 * pow((sensorValue - 318.87), 2) +
               1.207388 * (sensorValue - 318.87) +
               306.000000;
    }

    if (sensorValue >= 320.62 && sensorValue < 322.38) {
        return -0.003345 * pow((sensorValue - 320.62), 3) +
               -0.013702 * pow((sensorValue - 320.62), 2) +
               1.312888 * (sensorValue - 320.62) +
               308.250000;
    }

    if (sensorValue >= 322.38 && sensorValue < 324.23) {
        return 0.011885 * pow((sensorValue - 322.38), 3) +
               -0.031366 * pow((sensorValue - 322.38), 2) +
               1.233567 * (sensorValue - 322.38) +
               310.500000;
    }

    if (sensorValue >= 324.23 && sensorValue < 325.99) {
        return -0.007109 * pow((sensorValue - 324.23), 3) +
               0.034596 * pow((sensorValue - 324.23), 2) +
               1.239542 * (sensorValue - 324.23) +
               312.750000;
    }

    if (sensorValue >= 325.99 && sensorValue < 327.74) {
        return -0.001436 * pow((sensorValue - 325.99), 3) +
               -0.002940 * pow((sensorValue - 325.99), 2) +
               1.295256 * (sensorValue - 325.99) +
               315.000000;
    }

    if (sensorValue >= 327.74 && sensorValue < 329.50) {
        return 0.008094 * pow((sensorValue - 327.74), 3) +
               -0.010477 * pow((sensorValue - 327.74), 2) +
               1.271776 * (sensorValue - 327.74) +
               317.250000;
    }

    if (sensorValue >= 329.50 && sensorValue < 331.17) {
        return -0.005982 * pow((sensorValue - 329.50), 3) +
               0.032260 * pow((sensorValue - 329.50), 2) +
               1.310115 * (sensorValue - 329.50) +
               319.500000;
    }

    if (sensorValue >= 331.17 && sensorValue < 332.84) {
        return -0.008724 * pow((sensorValue - 331.17), 3) +
               0.002289 * pow((sensorValue - 331.17), 2) +
               1.367812 * (sensorValue - 331.17) +
               321.750000;
    }

    if (sensorValue >= 332.84 && sensorValue < 334.60) {
        return 0.015766 * pow((sensorValue - 332.84), 3) +
               -0.041417 * pow((sensorValue - 332.84), 2) +
               1.302468 * (sensorValue - 332.84) +
               324.000000;
    }

    if (sensorValue >= 334.60 && sensorValue < 336.27) {
        return -0.009225 * pow((sensorValue - 334.60), 3) +
               0.041825 * pow((sensorValue - 334.60), 2) +
               1.303185 * (sensorValue - 334.60) +
               326.250000;
    }

    if (sensorValue >= 336.27 && sensorValue < 337.94) {
        return -0.003965 * pow((sensorValue - 336.27), 3) +
               -0.004392 * pow((sensorValue - 336.27), 2) +
               1.365698 * (sensorValue - 336.27) +
               328.500000;
    }

    if (sensorValue >= 337.94 && sensorValue < 339.70) {
        return 0.001049 * pow((sensorValue - 337.94), 3) +
               -0.024258 * pow((sensorValue - 337.94), 2) +
               1.317853 * (sensorValue - 337.94) +
               330.750000;
    }

    if (sensorValue >= 339.70 && sensorValue < 341.46) {
        return 0.022320 * pow((sensorValue - 339.70), 3) +
               -0.018718 * pow((sensorValue - 339.70), 2) +
               1.242215 * (sensorValue - 339.70) +
               333.000000;
    }

    if (sensorValue >= 341.46 && sensorValue < 343.04) {
        return -0.046594 * pow((sensorValue - 341.46), 3) +
               0.099131 * pow((sensorValue - 341.46), 2) +
               1.383741 * (sensorValue - 341.46) +
               335.250000;
    }

    if (sensorValue >= 343.04 && sensorValue < 344.88) {
        return 0.029170 * pow((sensorValue - 343.04), 3) +
               -0.121725 * pow((sensorValue - 343.04), 2) +
               1.348042 * (sensorValue - 343.04) +
               337.500000;
    }

    if (sensorValue >= 344.88 && sensorValue < 346.64) {
        return 0.004159 * pow((sensorValue - 344.88), 3) +
               0.039294 * pow((sensorValue - 344.88), 2) +
               1.196369 * (sensorValue - 344.88) +
               339.750000;
    }

    if (sensorValue >= 346.64 && sensorValue < 348.22) {
        return -0.018451 * pow((sensorValue - 346.64), 3) +
               0.061253 * pow((sensorValue - 346.64), 2) +
               1.373332 * (sensorValue - 346.64) +
               342.000000;
    }

    if (sensorValue >= 348.22 && sensorValue < 349.89) {
        return -0.013495 * pow((sensorValue - 348.22), 3) +
               -0.026206 * pow((sensorValue - 348.22), 2) +
               1.428707 * (sensorValue - 348.22) +
               344.250000;
    }

    if (sensorValue >= 349.89 && sensorValue < 351.83) {
        return 0.030166 * pow((sensorValue - 349.89), 3) +
               -0.093818 * pow((sensorValue - 349.89), 2) +
               1.228267 * (sensorValue - 349.89) +
               346.500000;
    }

    if (sensorValue >= 351.83 && sensorValue < 353.58) {
        return -0.020311 * pow((sensorValue - 351.83), 3) +
               0.081750 * pow((sensorValue - 351.83), 2) +
               1.204855 * (sensorValue - 351.83) +
               348.750000;
    }

    if (sensorValue >= 353.58 && sensorValue < 355.34) {
        return 0.005758 * pow((sensorValue - 353.58), 3) +
               -0.024885 * pow((sensorValue - 353.58), 2) +
               1.304370 * (sensorValue - 353.58) +
               351.000000;
    }

    if (sensorValue >= 355.34 && sensorValue < 357.19) {
        return -0.018780 * pow((sensorValue - 355.34), 3) +
               0.005518 * pow((sensorValue - 355.34), 2) +
               1.270284 * (sensorValue - 355.34) +
               353.250000;
    }

    if (sensorValue >= 357.19 && sensorValue < 358.95) {
        return 0.114370 * pow((sensorValue - 357.19), 3) +
               -0.098713 * pow((sensorValue - 357.19), 2) +
               1.097872 * (sensorValue - 357.19) +
               355.500000;
    }

    if (sensorValue >= 358.95 && sensorValue < 359.99) {
        return -0.161910 * pow((sensorValue - 358.95), 3) +
               0.505159 * pow((sensorValue - 358.95), 2) +
               1.813218 * (sensorValue - 358.95) +
               357.750000;
    }

    return 0.0; // Default return value if no condition matches
}
