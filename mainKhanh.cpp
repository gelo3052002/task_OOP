#include <iostream>
#include <string>
#define MAX 100
using namespace std;
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
        Team Danhsachteam[MAX];
    public:
        contest(){};
        ~contest(){};
        void input() {
            cout << "Ten cuoc thi: ";
            cin >> Tencuocthi;
            cout << "Nha to chuc: ";
            cin >> Nhatochuc;
            cout <<"Thoi gian: ";
            cin >> Thoigian;
            cout << "Hinh thuc thi(Jeopardy, Attack & Defence , Ket hop):" << endl;
            cin >> Hinhthucthi;
        }
         void output() {
            cout << "Ten cuoc thi: " << Tencuocthi << endl;
            cout << "Nha to chuc: " << Nhatochuc << endl;
            cout <<"Thoi gian: " << Thoigian << endl;
            cout << "Hinh thuc thi: " << Hinhthucthi << endl;
    }
//         void Dangki() {
//             cout << "Nhap ten team: ";
//             cin >> name;
//             cout << "So luong thanh vien: ";
//             cin >> soluongthanhvien;
//         };
//         void CheckTeamExsit() {
//         };
//         void List3TeamBestScore();
// }
};
class CTF 
{   
    private:
        int quantity;
        contest* Cuocthi = new contest[quantity];
       
    public:
        CTF(){};
        ~CTF(){
            delete [] Cuocthi;
        };
    void input() {
        cout << "So cuoc thi CTF muon to chuc: ";
        cin >> quantity;
        for(int i = 0;i < quantity;i++) {
            cout << "-----CUOC THI " << i+1 << "-----" << endl;
            Cuocthi[i].input();
        }
    }
    void output() {
        for(int i = 0;i < quantity;i++) {
            cout << "-----CUOC THI " << i+1 << "-----" << endl;
            Cuocthi[i].output();
        }
    }
};
int main() {
    CTF uit;
    uit.input();
    uit.output();
}
