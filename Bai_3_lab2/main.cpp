#include "SoPhuc.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
  cSoPhuc sp1, sp2, kq;

  cout << "--- Nhap so phuc thu 1 --- \n";
  sp1.Nhap();

  cout << "\n--- Nhap so phuc thu 2 --- \n";
  sp2.Nhap();

  cout << "\nSo phuc 1 la: ";
  sp1.Xuat();
  cout << "\nSo phuc 2 la: ";
  sp2.Xuat();
  cout << "\n--------------------------\n";

  kq = sp1.Tong(sp2);
  cout << "Tong: ";
  kq.Xuat();
  cout << "\n";

  kq = sp1.Hieu(sp2);
  cout << "Hieu: ";
  kq.Xuat();
  cout << "\n";

  kq = sp1.Tich(sp2);
  cout << "Tich: ";
  kq.Xuat();
  cout << "\n";

  try {
    kq = sp1.Thuong(sp2);
    cout << "Thuong: ";
    kq.Xuat();
    cout << "\n";
  } catch (const std::invalid_argument &e) {
    cout << "Thuong: [Loi] " << e.what() << "\n";
  }

  return 0;
}
