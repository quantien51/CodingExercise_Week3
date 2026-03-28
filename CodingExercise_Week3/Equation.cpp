#include "Equation.h"
#include <cmath>
#define PI 3.14159265358979323846 // Dinh nghia so PI chinh xac de tinh toan luong giac cho phuong trinh bac 3

int EqFirstDeg(double a, double b, double& x) {
    //
    return 0;
}

int EqSecDeg(double a, double b, double c, double& x1, double& x2) {
	int nSolution;
	x1 = x2 = 0;
	if (a == 0)
	{
		nSolution = EqFirstDeg(b, c, x1);
		return nSolution;
	}
	else if (a == 0 && b == 0)
	{
		if (c == 0)
		{
			nSolution = Undetermined;
		}
		else
		{
			nSolution = NoSolution;
		}
	}
	else
	{
		double delta = b * b - 4 * a * c, two_a = 2 * a;
		if (delta < 0)
		{
			nSolution = NoSolution;
		}
		else if (delta == 0)
		{
			x1 = x2 = -b / (2 * a);
			nSolution = 1;
		}
		else
		{
			double sqrtDelta = sqrt(delta);
			x1 = (-b - sqrtDelta) / two_a;
			x2 = (-b + sqrtDelta) / two_a;
			nSolution = 2;
		}
	}
	return nSolution;
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