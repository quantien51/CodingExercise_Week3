#include "Equation.h"
#include <cmath>

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
    //
    return 0;
}

int EqFourthDeg(double a, double b, double c, double& x1, double& x2, double& x3, double& x4) {
    // 
    return 0;
}