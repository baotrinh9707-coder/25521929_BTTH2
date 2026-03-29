#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>

class cSoPhuc {
private:
  double iThuc;
  double iAo;

public:
  cSoPhuc(double t = 0, double a = 0);

  void setThuc(double t);
  void setAo(double a);
  double getThuc() const;
  double getAo() const;

  void Nhap();
  void Xuat() const;

  cSoPhuc Tong(const cSoPhuc &sp2) const;
  cSoPhuc Hieu(const cSoPhuc &sp2) const;
  cSoPhuc Tich(const cSoPhuc &sp2) const;
  cSoPhuc Thuong(const cSoPhuc &sp2) const;
};

#endif
