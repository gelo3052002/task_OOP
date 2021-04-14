#pragma once
#include <iostream>
#include <string>
using namespace std;
class cuocthi
{
private:
	char ten[50];
	char nhatochuc[50];
	char thoigian[50];
	char hinhthuc[50];
public:
	cuocthi();
	~cuocthi();
	void nhap();
	void xuat();
	void cuocthithamgianhieunhat();
};
class doithi
{
private:
	char tendoi[60];
	int soluong;
public:
	doithi();
	~doithi();
	void nhap();
	void check();
};
class CTF
{
private:
	int n;
	cuocthi* quanly = new cuocthi[n];
public:
	CTF();
	~CTF();
	void nhap();
};
cuocthi::cuocthi() {}
cuocthi::~cuocthi() {}
doithi::doithi() {}
doithi::~doithi() {}
CTF::CTF() {}
CTF::~CTF()
{
	delete quanly;
}
void CTF::nhap()
{
	cout << "nhap so luong cuoc thi: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		quanly[i].nhap();
	}
}
void cuocthi::nhap()
{
	cout << "ten cuoc thi: ";
	cin >> ten;
	cout << " nha to chuc: ";
	cin.ignore();
	cin >> nhatochuc;
	cout << "thoi gian: ";
	cin.ignore();
	cin >> thoigian;
	cout << "hinh thuc thi : ";
	cin.ignore();
	cout << hinhthuc;
	cout << "doi tham gia: ";
}
void cuocthi::xuat()
{
	cout << ten << "\t" << nhatochuc << "\t" << hinhthuc << "\t" << thoigian;
}
void cuocthi::cuocthithamgianhieunhat() {}
void doithi::nhap()
{
	cout << "nhap ten doi: ";
	cin >> tendoi;
	cout << "nhap so luong thanh vien: ";
	cin.ignore();
	cin >> soluong;
}
void doithi::check() {}
int main()
{
	CTF a;
	cuocthi b;
	a.nhap();
	b.nhap();
	int n;
	cout << "nhap so doi thi: ";
	cin >> n;
	doithi* team = new doithi[n];
	for (int i = 0; i < n; i++)
	{
		team[i].nhap();
	}
}
