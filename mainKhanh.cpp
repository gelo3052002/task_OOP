#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100
struct Team {
    string name;
    string soluongthanhvien;
};
class contest
{
private:
    string Tencuocthi;
    string Nhatochuc;
    string Thoigian;
    string Hinhthucthi;
    //Jeopardy
    //Attack & Defence;
    //Kết hợp
    Team Danhsachteam;
public:
    contest();
    ~contest();
    void input() {
        cout << "Ten cuoc thi: ";
        cin >> Tencuocthi;
        cout << "Nha to chuc: ";
        cin >> Nhatochuc;
        cout << "Thoi gian: ";
        cin >> Thoigian;
        cout << "Hinh thuc thi(Jeopardy, Attack & Defence , Ket hop):" << endl;
        cin >> Hinhthucthi;
    }
    void Dangki() {
        cout << "Nhap ten team: ";
        cin >> Danhsachteam.name;
        cout << "So luong thanh vien: ";
        cin >> Danhsachteam.soluongthanhvien;
    };
    void CheckTeamExsit(string a) {
        if ((Danhsachteam.name).compare(a) == 0)
        {
            cout << "ton tai: ";
        }
        else
        {
            cout << "khong ton tai: ";
        }
    }
    void List3TeamBestScore()
    {

    }
};
class CTF
{
private:
    contest Cuocthi[MAX];
    int quantity;
public:
    CTF();
    ~CTF();
    void input() {
        cout << "So cuoc thi CTF muon to chuc: ";
        cin >> quantity;
        int n = quantity;
        for (int i = 0; i < n; i++) {
            Cuocthi[i].input();
        }
    }

};
CTF::CTF() {}
CTF::~CTF() {}
contest::contest() {}
contest::~contest() {}
