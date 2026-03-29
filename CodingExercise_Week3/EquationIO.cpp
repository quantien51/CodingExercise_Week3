#include "Equation.h"
#include "EquationIO.h"
#include <iostream>
#include <iomanip> // Thu vien de quan ly dinh dang dau ra (lam tron so thap phan)

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
	cout << "Moi thay nhap cac so a b ";
	cin >> a >> b; 
	cout << "Phuong trinh bac nhat: (" << a << ")x + (" << b << ") = 0\n";
 }

void inputSecDeg(double& a, double& b, double& c)
{
	cout << "Moi thay nhap cac so a b c :";
	cin >> a >> b >> c;
	cout << "Phuong trinh bac hai: " << a << "x^2 + " << b << "x + " << c << " = 0\n";
}

void inputThirdDeg(double& a, double& b, double& c, double& d)
{
	cout << "\n--- GIAI PHUONG TRINH BAC BA ---" << endl;
	cout << "Dang: ax^3 + bx^2 + cx + d = 0" << endl;

	do {
		cout << "Moi thay nhap bien so a (a != 0): "; cin >> a;
		if (a == 0) cout << "Loi: a phai khac 0!" << endl;
	} while (a == 0);

	cout << "Moi thay nhap bien so b: "; cin >> b;
	cout << "Moi thay nhap bien so c: "; cin >> c;
	cout << "Moi thay nhap bien so d: "; cin >> d;

	cout << "\nPhuong trinh: (" << a << ")x^3 + (" << b << ")x^2 + (" << c << ")x + (" << d << ") = 0" << endl;
}

void inputFourthDeg(double& a, double& b, double& c)
{
	//
}

void outputFirstDeg(int nSolution, double x1) {
	if (nSolution == -1) {
		cout << "Phuong trinh co vo so nghiem." << endl;
	}
	else if (nSolution == 0) {
		cout << "Phuong trinh vo nghiem." << endl;
	}
	else if (nSolution == 1) {
		cout << "Phuong trinh co mot nghiem duy nhat: x = " << x1 << endl;
	}
}

void outputSecDeg(int nSolution, double x1, double x2) {
	if (nSolution == 0) {
		cout << "Phuong trinh vo nghiem" << endl;
	}
	else if (nSolution == 1) {
		cout << "Phuong trinh co nghiem kep: x = " << x1 << endl;
	}
	else if (nSolution == 2) {
		cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else {
		cout << "Phuong trinh vo so nghiem" << endl;
	}
}

void outputThirdDeg(int nSolution, double x1, double x2, double x3) 
{
		cout << "Ket qua giai phuong trinh: " << endl;
		if (nSolution == 1) {
			cout << "Phuong trinh co 1 nghiem thuc duy nhat: x = " << setprecision(4) << x1 << endl;
		}
		else if (nSolution == 2) {
			cout << "Phuong trinh co nghiem boi: " << endl;
			cout << "x1 = " << setprecision(4) << x1 << endl;
			cout << "x2 = x3 = " << setprecision(4) << x2 << endl;
		}
		else if (nSolution == 3) {
			cout << "Phuong trinh co 3 nghiem thuc phan biet: " << endl;
			cout << "x1 = " << setprecision(4) << x1 << endl;
			cout << "x2 = " << setprecision(4) << x2 << endl;
			cout << "x3 = " << setprecision(4) << x3 << endl;
		}
		else {
			cout << "Co loi xay ra hoac he so không hop le." << endl;
		}
		cout << "------------------------------------------\n";
}

	void outputFourthDeg(int nSolution, double x1, double x2, double x3, double x4) {
	// 
}