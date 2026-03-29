#include "PhanSo.h"
#include <iostream>

using namespace std;

int main() {
  PhanSo a, b;

  cout << "--- NHAP PHAN SO A ---\n";
  a.Nhap();

  cout << "\n--- NHAP PHAN SO B ---\n";
  b.Nhap();

  cout << "\n========================\n";

  a.RutGon();
  cout << "Phan so A sau khi rut gon: ";
  a.Xuat();
  cout << "\n";

  b.RutGon();
  cout << "Phan so B sau khi rut gon: ";
  b.Xuat();
  cout << "\n";

  PhanSo tong = a.Tong(b);
  PhanSo hieu = a.Hieu(b);
  PhanSo tich = a.Tich(b);
  PhanSo thuong = a.Thuong(b);

  cout << "\n--- KET QUA TINH TOAN ---\n";
  cout << "Tong   = ";
  tong.Xuat();
  cout << "\n";
  cout << "Hieu   = ";
  hieu.Xuat();
  cout << "\n";
  cout << "Tich   = ";
  tich.Xuat();
  cout << "\n";
  cout << "Thuong = ";
  thuong.Xuat();
  cout << "\n";

  cout << "\n--- KET QUA SO SANH ---\n";
  int cmp = a.SoSanh(b);
  if (cmp == 1) {
    cout << "Ket luan: A > B\n";
  } else if (cmp == 0) {
    cout << "Ket luan: A = B\n";
  } else {
    cout << "Ket luan: A < B\n";
  }

  cout << "========================\n";

  return 0;
}
