#include "ThoiGian.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
  ThoiGian t;

  cout << "--- NHAP THOI GIAN ---\n";
  t.Nhap();

  cout << "\nThoi gian ban dau: ";
  t.Xuat();
  cout << "\n";

  t.TinhCongThemMotGiay();

  cout << "Sau khi cong 1 giay: ";
  t.Xuat();
  cout << "\n\n----------------------\n";

  return 0;
}
