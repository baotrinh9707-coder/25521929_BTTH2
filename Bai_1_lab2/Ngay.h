#ifndef NGAY_H
#define NGAY_H

class Ngay {
private:
  int d, m, y;
  bool laNamNhuan(int year);
  int soNgayTrongThang(int month, int year);
  bool kiemTraHopLe();

public:
  Ngay();
  void nhap();
  void xuat();
  Ngay timNgayKeTiep();
};

#endif
