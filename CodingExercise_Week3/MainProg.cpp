#include <iostream>

#include "Equation.h"
#include "EquationIO.h"

using namespace std;

int main() {
    int selection;
    double a, b, c, d;
    double x1, x2, x3, x4;
    int nSolution;

    hienThiManHinhChon();

    while (true) {
        selection = layYeuCauNguoiDung();

        switch (selection) {
        case 1:
            inputFirstDeg(a, b);
            nSolution = EqFirstDeg(a, b, x1);
            printResultFirstDeg(nSolution, x1);
            break;

        case 2:
            inputSecDeg(a, b, c);
            nSolution = EqSecDeg(a, b, c, x1, x2);
            printResultSecDeg(nSolution, x1, x2);
            break;

        case 3:
            inputThirdDeg(a, b, c, d);
            nSolution = EqThirdDeg(a, b, c, d, x1, x2, x3);
            printResultThirdDeg(nSolution, x1, x2, x3);
            break;

        case 4:
            inputFourthDeg(a, b, c);
            nSolution = EqFourthDeg(a, b, c, x1, x2, x3, x4);
            printResultFourthDeg(nSolution, x1, x2, x3, x4);
            break;

        case 5:
            cout << "Thoat chuong trinh thanh cong!\n";
            return 0;
        }
    }
}