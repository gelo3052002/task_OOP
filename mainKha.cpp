#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class competition {
	
		private:
			char Name[30];
			char Organizer[30];
			char Time[30];
			char Form[30];
		
		public:
		competition();
		~competition();
		
		void Input();
		void Output();
		
		void MostRegistration();

};

class Team {
	
	    private: 
	    string TeamName;
	    int amount;
	
	    public:
	    Team();
	    ~Team();
	
	    void Input();
	    void Check();
		
};

class CTF {
	
        private:
	    int n;
	    competition* manage = new competition[n];
	
        public:
	    CTF();
	    ~CTF();
	    void Input();
	    void Check();
};

competition::competition()  
{
	
}

competition::~competition() 
{
	
}

Team::Team()  
{
	
}

Team::~Team() 
{
	
}

CTF::CTF() 
{
	
}

CTF::~CTF(){
	   delete manage;
}

void CTF::Input()
{
	cout << "Insert the amount of competition: "; // Nhap so luong cuoc thi
	cin >> n;
	for (int i = 0; i < n; i++) // duyet so luong cuoc thi
	{
		manage[i].Input();
	}
}

void competition::Input()
{
	cout << "Name of the Competition: "; fflush(stdin); gets(Name);
	cout << " Organizer: ";  fflush(stdin); gets(Organizer);
	cout << "Time: ";        fflush(stdin); gets(Time);
	cout << "Form Of Competition : ";    fflush(stdin); gets(Form);
	cout << "Participating team: ";
}

void competition::Output()
{
	cout << Name << "\t" ;
	cout << Organizer << "\t" ;
	cout << Form << "\t" ;
	cout << Time;
}

void competition::MostRegistration() 
{
	
}

void Team::Input()
{
	cout << "Team name: ";      fflush(stdin);    gets(Name);
	cout << "Enter the number of team members: "; cin >> amount;
}

void Team::Check() 
{
	
}

int main()
{
	CTF x1;
	competition x2;
	
	x1.Input();
	x2.Input();
	
	int n;
	cout << "\nEnter the team number: ";
	cin >> n;
	
	Team* temp = new Team[n];
	
	for (int i = 0; i < n; i++)
	{
		temp[i].Input();
	}
	
}
