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
	cout << "Nhap lan luot a, b, c:" << endl;
	cin >> a >> b >> c;
	cout << endl;

}

void outputFirstDeg(int nSolution, double x1) {
	// 
}

void outputSecDeg(int nSolution, double x1, double x2) {
	// 
}

void outputThirdDeg(int nSolution, double x1, double x2, double x3) {
	// 
}

void outputFourthDeg(int nSolution, double x1, double x2, double x3, double x4) {
	// 
	cout << "Phuong trinh co " << nSolution << " nghiem:" << endl;
	if (nSolution == 0 || nSolution > 4) {
		cout << "Phuong trinh vo nghiem." << endl;
	}
		
	if (nSolution == 1) {
		cout << "x1 = " << x1 << endl;
	}
	
	if (nSolution == 2) {
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	if (nSolution == 3) {
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
		cout << "x3 = " << x3 << endl;
	}

	if (nSolution == 4) {
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
		cout << "x3 = " << x3 << endl;
		cout << "x4 = " << x4 << endl;
	}
}