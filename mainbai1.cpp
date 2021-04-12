#include <iostream>
#include "fraction.h"
using namespace std;
 
int main()
{
    PhanSo a, b, c;
    a.NhapPhanSo();b.NhapPhanSo();
    cout << "Cong : ";
    c = a;c.Cong(b);c.XuatPhanSo();
    cout << "Tru : ";
    c = a;c.Tru(b);c.XuatPhanSo();
    cout << "Nhan : ";
    c = a;c.Nhan(b);c.XuatPhanSo();
    cout << "Chia : ";
    c = a;c.Chia(b);c.XuatPhanSo();
    return 0;
}