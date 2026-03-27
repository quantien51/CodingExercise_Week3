#include "Equation.h"
#include <cmath>
#define PI 3.14159265358979323846

int EqFirstDeg(double a, double b, double& x) {
    //
    return 0;
}

int EqSecDeg(double a, double b, double c, double& x1, double& x2) {
    //
    return 0;
}

int EqThirdDeg(double a, double b, double c, double d, double& x1, double& x2, double& x3) {
        if (a == 0) return -1; 

        // Chuyen ve dang t^3 + pt + q = 0
        double p = (3 * a * c - b * b) / (3 * a * a);
        double q = (2 * b * b * b - 9 * a * b * c + 27 * a * a * d) / (27 * a * a * a);
        double Delta = (q * q) / 4 + (p * p * p) / 27;

        if (Delta > 0) {
            // Truong hop 1 nghiem thuc duy nhat
            double u = cbrt(-q / 2 + sqrt(Delta));
            double v = cbrt(-q / 2 - sqrt(Delta));
            x1 = u + v - b / (3 * a);
            return 1;
        }
        else if (Delta == 0) {
            // Truong hop co nghiem boi
            double u = cbrt(-q / 2);
            x1 = 2 * u - b / (3 * a);
            x2 = -u - b / (3 * a);
            return 2;
        }
        else {
            // Truong hop 3 nghiem thuc phan biet (Delta < 0)
            double r = sqrt(-(p * p * p) / 27);
            double phi = acos(-q / (2 * r));
            x1 = 2 * pow(r, 1.0 / 3.0) * cos(phi / 3) - b / (3 * a);
            x2 = 2 * pow(r, 1.0 / 3.0) * cos((phi + 2 * PI) / 3) - b / (3 * a);
            x3 = 2 * pow(r, 1.0 / 3.0) * cos((phi + 4 * PI) / 3) - b / (3 * a);
            return 3;
        }
    }

    int EqFourthDeg(double a, double b, double c, double& x1, double& x2, double& x3, double& x4) {
    // 
    return 0;
}