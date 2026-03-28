#include "Equation.h"
#include <cmath>

int EqFirstDeg(double a, double b, double& x) {
	int nSolution;
	if (a != 0)
	{
		x = -b / a;
		nSolution = 1;
	}
	else
	{
		x = 0;
		if (b == 0)
		{
			nSolution = Undetermined;
		}
		else
		{
			nSolution = NoSolution;
		}
	}
	return nSolution;
    
}

int EqSecDeg(double a, double b, double c, double& x1, double& x2) {
    //
    return 0;
}

int EqThirdDeg(double a, double b, double c, double d, double& x1, double& x2, double& x3) {
    //
    return 0;
}

int EqFourthDeg(double a, double b, double c, double& x1, double& x2, double& x3, double& x4) {
    // 
    return 0;
}