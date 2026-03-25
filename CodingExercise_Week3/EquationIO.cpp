#include "Equation.h"
#include "EquationIO.h"
#include <iostream>

using namespace std;

void hienThiManHinhChon() {
	cout << "1. Phuong trinh bac nhat: ax + b = 0" << endl;
	cout << "2. Phuong trinh bac hai: ax^2 + bx + c = 0" << endl;
	cout << "3. Phuong trinh bac ba: ax^3 + bx^2 + cx + d = 0" << endl;
	cout << "4. Phuong trinh bac bon trung phuong: ax^4 + bx^2 + c = 0" << endl;
	cout << "5. Thoat chuong trinh" << endl;
	cout << "\n";
}

int layYeuCauNguoiDung() {
	int selection;
	cout << "Moi thay nhap lua chon (1-5): ";
	cin >> selection;
	return selection;
}

void inputFirstDeg(double& a, double& b)
{
	//
}

void inputSecDeg(double& a, double& b, double& c)
{
	//
}

void inputThirdDeg(double& a, double& b, double& c, double& d)
{
	//
}

void inputFourthDeg(double& a, double& b, double& c)
{
	//
}

void printResultFirstDeg(int nSolution, double x1) {
	// 
}

void printResultSecDeg(int nSolution, double x1, double x2) {
	// 
}

void printResultThirdDeg(int nSolution, double x1, double x2, double x3) {
	// 
}

void printResultFourthDeg(int nSolution, double x1, double x2, double x3, double x4) {
	// 
}