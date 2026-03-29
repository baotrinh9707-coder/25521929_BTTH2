#include "Ngay.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
  Ngay date;
  date.nhap();
  Ngay nextDate = date.timNgayKeTiep();
  cout << "=> Ngay ke tiep la: ";
  nextDate.xuat();
  cout << "\n";

  return 0;
}
