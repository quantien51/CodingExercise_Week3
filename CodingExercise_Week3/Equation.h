#pragma once

#define _USE_MATH_DEFINES
#define Undetermined -1
#define NoSolution 0

//Giai phuong trinh ax + b = 0;
int EqFirstDeg(double a, double b, double& x);

//Giai phuong trinh ax^2 + bx + c = 0;
int EqSecDeg(double a, double b, double c, double& x1, double& x2);

//Giai phuong trinh ax^3 + bx^2 + cx + d = 0
int EqThirdDeg(double a, double b, double c, double d, double& x1, double& x2, double& x3);

//Giai phuong trinh
int EqFourthDeg(double a, double b, double c, double& x1, double& x2, double& x3, double& x4);
