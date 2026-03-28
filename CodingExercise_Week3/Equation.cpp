#include "Equation.h"
#include <cmath>

int EqFirstDeg(double a, double b, double& x) {
    //
    return 0;
}

int EqSecDeg(double a, double b, double c, double& x1, double& x2) {
    //
    x1 = 1;
    x2 = 2;
    return 2;
}

int EqThirdDeg(double a, double b, double c, double d, double& x1, double& x2, double& x3) {
    //
    return 0;
}

int EqFourthDeg(double a, double b, double c, double& x1, double& x2, double& x3,  double& x4)
{
	double x1_temp, x2_temp;
	int nSolution = 0;
	if (a == 0)
	{
		nSolution = EqSecDeg(b, 0, c, x1, x2);
		return nSolution;
	}

	int nSolutionT = EqSecDeg(a, b, c, x1_temp, x2_temp);

	if (nSolutionT <= 0)
	{
		return nSolutionT;
	}
	if (x1_temp > 0)
	{
		x1 = sqrt(x1_temp);
		x2 = -sqrt(x1_temp);
		nSolution = 2;
	}
	else if (x1_temp == 0)
	{
		x1 = 0;
		nSolution = 1;
	}
	if (nSolutionT == 2)
	{
		if (x2_temp > 0)
		{
			if (nSolution == 0)
			{
				x1 = sqrt(x2_temp);
				x2 = -sqrt(x2_temp);
				nSolution = 2;
			}else if (nSolution == 1)
			{
				x2 = sqrt(x2_temp);
				x3 = -sqrt(x2_temp);
				nSolution = 3;
			}else if (nSolution == 2)
			{
				x3 = sqrt(x2_temp);
				x4 = -sqrt(x2_temp);
				nSolution = 4;
			}
		}
		else if (x2_temp == 0)
		{
			if (nSolution == 0)
			{
				x1 = 0;
				nSolution = 1;
			}
            else if (nSolution == 1)
			{
				x2 = 0;
				nSolution = 2;
			}
            else if (nSolution == 2)
			{
				x3 = 0;
				nSolution = 3;
			}
		}
	}
	return nSolution;
}