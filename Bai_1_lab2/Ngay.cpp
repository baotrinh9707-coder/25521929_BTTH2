#include "Ngay.h"
#include <iostream>

using namespace std;

Ngay::Ngay() {
  d = 1;
  m = 1;
  y = 2000;
}

bool Ngay::laNamNhuan(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Ngay::soNgayTrongThang(int month, int year) {
  switch (month) {
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
  case 2:
    return laNamNhuan(year) ? 29 : 28;
  default:
    return 31;
  }
}

bool Ngay::kiemTraHopLe() {
  if (y < 1 || m < 1 || m > 12 || d < 1)
    return false;
  if (d > soNgayTrongThang(m, y))
    return false;
  return true;
}

void Ngay::nhap() {
  do {
    cout << "  Nhap ngay, thang, nam (cach nhau khoang trang): ";
    cin >> d >> m >> y;
    if (!kiemTraHopLe())
      cout << "  Ngay khong hop le!\n";
  } while (!kiemTraHopLe());
}

void Ngay::xuat() { cout << d << "/" << m << "/" << y; }

Ngay Ngay::timNgayKeTiep() {
  Ngay next = *this;
  next.d++;
  if (next.d > soNgayTrongThang(next.m, next.y)) {
    next.d = 1;
    next.m++;
    if (next.m > 12) {
      next.m = 1;
      next.y++;
    }
  }
  return next;
}
