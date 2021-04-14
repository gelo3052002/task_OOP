#include <iostream>
#include <string>
using namespace std;
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
        string Nhatochuc;
        string Danhsachteam;
    public:
        contest();
        ~contest();
        void Dangki();
        void CheckTeamExsit();
        void List3TeamBestScore();
}
class CTF 
{   
    private:
        contest Cuocthi[100];
        int quantity;
    public:
        CTF();
        ~CTF();


};
CTF::CTF(){
}
CTF::~CTF(){
}
