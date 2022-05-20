#include <iostream>
#include <cstring>
using namespace std;

class Booking{
	private:
		int bookingID();
		char date[];
		string status;
		
	public:
		Booking();
		void calcSubTotal();
		void calcTotal();
		~Booking();
		
};

Booking::Booking()
{
	strcpy(date,"");
	strcpy(status,"");
}

void Booking::calcSubTotal()
{
	
};

void Booking::calcTotal()
{
	
}

Booking::~Booking
{
	cout<<"Delete Booking"<<date<<status<<endl;
}

class Packages{
	private:
		char packageID[10];
		char packageName[20];
		Booking *Book[2];
		
	public:
		Packages();
		Packages(char name[] , char id[]);
		void displayPackages();
		void setPackages(char id[] , char name[]);
		char getPackages();
		~Packages();
};
Packages::Packages()
{
	Book[0] = new Booking(00);
	Book[1] = new Booking(11);
}

Packages::Packages(int no1, int no2)
{
	Book[0] = new Booking[no1];
	Book[1] = new Booking[no2];
}
void displayBooking(){
	
}

void Packages::setPackages(char id[], char name[])
{
	
}

char Packages::getPackages()
{
	
}

Packages::~Packages()
{
	//Destructor
}

int main()
{
	Packages *myPackages;
	myPackages = new Packages(20,30);
	
	return 0;
}

class Reports{
	private:
		char reportID[];
		Packages *pack[2];
		
	public:
		Reports();
		Reports(char rID[]);
		void displayDetails();
		Reports *rep[2];
		~Reports();
		
};
Reports::Reports()
{
	strcpy(reportID,"");
}

Reports::Reports(char rID)
{
	strcpy(reportID,rID);
}

void Reports::displayDetails()
{
	
}

~Reports::Reports()
{
	
}

int main()
{
	Reports rep;
}

class RegisteredUser{
	private:
		int ruserID;
		string rusername;
		int rusernum;
		string rusermail;
		Packages *pkgs[2];
		
	public:
		RegisteredUser();
		void edita();
		void checkpackages();
		~RegisteredUser();
		
	RegisteredUser::RegisteredUser()
	{
		ruserID = 0;
		rusername = "AAAA";
		rusernum =  0;
		rusermail = "0";
	}

	void RegisteredUSer :: edita()
	{
		
		}	
		
	void RegisteredUser ::checkpackages()
	{
		
	}
	
	RegisteredUser::~RegisteredUser()
	{
		//Destructor
	}
	
	int main()
	{
		RegisteredUser reg;
	}
		
};
