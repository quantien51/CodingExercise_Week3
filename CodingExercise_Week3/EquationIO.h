#pragma once

//Hien thi Man hinh chon
void hienThiManHinhChon();
//Lay yeu cau nguoi dung va tra ra ket qua
int layYeuCauNguoiDung();
//Yeu cau nguoi dung nhap he so dua vao loai phuong trinh

void inputFirstDeg(double& a, double& b);
void inputSecDeg(double& a, double& b, double& c);
void inputThirdDeg(double& a, double& b, double& c, double& d);
void inputFourthDeg(double& a, double& b, double& c);

//In ra phuong trinh nguoi dung nhap va ket qua

void printResultFirstDeg(int nSolution, double x1);
void printResultSecDeg(int nSolution, double x1, double x2);
void printResultThirdDeg(int nSolution, double x1, double x2, double x3);
void printResultFourthDeg(int nSolution, double x1, double x2, double x3, double x4);
