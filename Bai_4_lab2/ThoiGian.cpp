#include "ThoiGian.h"
#include <bits/stdc++.h>

using namespace std;

ThoiGian::ThoiGian(int gio, int phut, int giay) {
  iGio = gio;
  iPhut = phut;
  iGiay = giay;
}

void ThoiGian::Nhap() {
  do {
    cout << "Nhap gio (0-23): ";
    cin >> iGio;
  } while (iGio < 0 || iGio > 23);

  do {
    cout << "Nhap phut (0-59): ";
    cin >> iPhut;
  } while (iPhut < 0 || iPhut > 59);

  do {
    cout << "Nhap giay (0-59): ";
    cin >> iGiay;
  } while (iGiay < 0 || iGiay > 59);
}

void ThoiGian::Xuat() const {
  cout << setfill('0') << setw(2) << iGio << ":" << setfill('0') << setw(2)
       << iPhut << ":" << setfill('0') << setw(2) << iGiay;
}

void ThoiGian::TinhCongThemMotGiay() {
  iGiay++;

  if (iGiay >= 60) {
    iGiay = 0;
    iPhut++;

    if (iPhut >= 60) {
      iPhut = 0;
      iGio++;

      if (iGio >= 24) {
        iGio = 0;
      }
    }
  }
}
