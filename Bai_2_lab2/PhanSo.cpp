#include "PhanSo.h"
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int UCLN(int a, int b) {
  if (b == 0)
    return a;
  return UCLN(b, a % b);
}

PhanSo::PhanSo(int tu, int mau) {
  iTu = tu;
  iMau = (mau != 0) ? mau : 1;
}

void PhanSo::Nhap() {
  cout << "  Nhap tu so: ";
  cin >> iTu;
  do {
    cout << "  Nhap mau so (khac 0): ";
    cin >> iMau;
    if (iMau == 0) {
      cout << "  [Loi] Mau so phai khac 0. Vui long nhap lai!\n";
    }
  } while (iMau == 0);
}

void PhanSo::Xuat() {
  if (iMau == 0) {
    cout << "Khong xac dinh (Mau so = 0)";
  } else if (iTu == 0) {
    cout << 0;
  } else if (iMau == 1) {
    cout << iTu;
  } else {
    cout << iTu << "/" << iMau;
  }
}

void PhanSo::RutGon() {
  if (iTu == 0) {
    iMau = 1;
    return;
  }

  int ucln = UCLN(abs(iTu), abs(iMau));
  iTu /= ucln;
  iMau /= ucln;

  if (iMau < 0) {
    iTu = -iTu;
    iMau = -iMau;
  }
}

PhanSo PhanSo::Tong(PhanSo ps) {
  PhanSo kq;
  kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
  kq.iMau = iMau * ps.iMau;
  kq.RutGon();
  return kq;
}

PhanSo PhanSo::Hieu(PhanSo ps) {
  PhanSo kq;
  kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
  kq.iMau = iMau * ps.iMau;
  kq.RutGon();
  return kq;
}

PhanSo PhanSo::Tich(PhanSo ps) {
  PhanSo kq;
  kq.iTu = iTu * ps.iTu;
  kq.iMau = iMau * ps.iMau;
  kq.RutGon();
  return kq;
}

PhanSo PhanSo::Thuong(PhanSo ps) {
  PhanSo kq;
  kq.iTu = iTu * ps.iMau;
  kq.iMau = iMau * ps.iTu;
  if (kq.iMau != 0) {
    kq.RutGon();
  }
  return kq;
}

int PhanSo::SoSanh(PhanSo ps) {
  int left = iTu * ps.iMau;
  int right = ps.iTu * iMau;

  if (left > right)
    return 1;
  if (left == right)
    return 0;
  return -1;
}
