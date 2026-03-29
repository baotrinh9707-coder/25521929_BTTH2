#include "SoPhuc.h"
#include <stdexcept>
using namespace std;

cSoPhuc::cSoPhuc(double t, double a) {
  iThuc = t;
  iAo = a;
}

void cSoPhuc::setThuc(double t) { iThuc = t; }
void cSoPhuc::setAo(double a) { iAo = a; }
double cSoPhuc::getThuc() const { return iThuc; }
double cSoPhuc::getAo() const { return iAo; }

void cSoPhuc::Nhap() {
  cout << "Nhap phan thuc: ";
  cin >> iThuc;
  cout << "Nhap phan ao: ";
  cin >> iAo;
}

void cSoPhuc::Xuat() const {
  if (iThuc == 0 && iAo == 0) {
    cout << 0;
    return;
  }

  if (iThuc == 0) {
    if (iAo == 1)
      cout << "i";
    else if (iAo == -1)
      cout << "-i";
    else
      cout << iAo << "i";
    return;
  }

  cout << iThuc;

  if (iAo == 0) {
    return;
  } else if (iAo == 1) {
    cout << " + i";
  } else if (iAo == -1) {
    cout << " - i";
  } else if (iAo > 0) {
    cout << " + " << iAo << "i";
  } else if (iAo < 0) {
    cout << " - " << -iAo << "i";
  }
}

cSoPhuc cSoPhuc::Tong(const cSoPhuc &sp2) const {
  cSoPhuc kq;
  kq.iThuc = iThuc + sp2.iThuc;
  kq.iAo = iAo + sp2.iAo;
  return kq;
}

cSoPhuc cSoPhuc::Hieu(const cSoPhuc &sp2) const {
  cSoPhuc kq;
  kq.iThuc = iThuc - sp2.iThuc;
  kq.iAo = iAo - sp2.iAo;
  return kq;
}

cSoPhuc cSoPhuc::Tich(const cSoPhuc &sp2) const {
  cSoPhuc kq;
  kq.iThuc = iThuc * sp2.iThuc - iAo * sp2.iAo;
  kq.iAo = iThuc * sp2.iAo + iAo * sp2.iThuc;
  return kq;
}

cSoPhuc cSoPhuc::Thuong(const cSoPhuc &sp2) const {
  double mauSo = sp2.iThuc * sp2.iThuc + sp2.iAo * sp2.iAo;

  if (mauSo == 0) {
    throw std::invalid_argument("Khong the chia cho 0!");
  }

  cSoPhuc kq;
  kq.iThuc = (iThuc * sp2.iThuc + iAo * sp2.iAo) / mauSo;
  kq.iAo = (iAo * sp2.iThuc - iThuc * sp2.iAo) / mauSo;
  return kq;
}
