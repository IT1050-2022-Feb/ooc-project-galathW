#include<iostream>
#include<cstring>
using namespace std;
 
Class RegisteredUser{
	private:
   	  	int reguserid;
		string regusername;
		int regusernum;
		string regusermail;
		Feedback*fback[size];
		Package * packs[size];
		Account*acc[size];

	public: 
		RegisteredUser();
		RegisteredUser(string rid, string rname, int rnum, string rmail);
		Void editaccount();
		Void checkpackages();
		~RegisteredUser();
};
RegisteredUser::RegisteredUser (string id, string name, int num, string mail)
{
 	reguserid = id;
 	regusername = name;
 	regusermail = email;
 	regusernum = num;
}
void Customer::Customer(){
 	cout<<"RegisteresUser id=" <<reguserid <<endl;
 	cout<<"RegisteredUser name=" <<regusername <<endl;
 	cout<<"RegisteredUser email=" <<regusermail <<endl;
 	cout<<"RegisteredUser telephone number=" <<regusernum <<endl;
}
void RegisteredUser::editaccount() {}
void RegisteredUser::checkpackages() {}
int main()
{
	RegisteredUser regu1;
	Return 0;
}




class Feedback {
	private:
 		int feedbackid;
 		string rusername;
 		Registereduser *ruser;
		Solution* sltion[size];
	public:
 		Feedback();
 		Feedback(int rid , string rname);
 		void ViewFeedback();
};
Feedback::Feedback() {}
Feedback::Feedback(int rid, string rname)
{
feedbackid = pid;
strcpy(rusername, rname);
}
void Feedback::viewfeedback() {}

int main()
{
	Feedback fdk1;
	Return 0;
}




class Package {
	private:
 		char packageID;
 		char packageName;
 		Booking *bkng[size];
 		Registereduser *ruser;
 		Reports* rprt[size];

	public:
 		Packages();
 		Packages(char name[] , char id[]);
 		void displayPackages();
 		void setPackages(char id[] , char name[]);
 		char getPackages();
 		~Packages();
};


Packages::Packages(){}
Packages::Packages(char name[] , char id[])
{
	packageid = id;
	packagename = name;
}

void Package::displayPackages(){}
void Package::viewPackages(){}

int main{
Package pkg1;
}


Class Account{
	private:
 		char accType;
 		char accName;
 		Registereduser *ruser; 
	public:
 		Account()
 		Account(char atype[], char aname[]);
 		Void displayDetails();
 		~Account;
};
Account::Account()
{
	strcpy(accType,"");
	strcpy(accName,"");
}
Account::Account (char atype)
{
	strcpy(accType,atype);
}
Account::Account (char aname)
{
	strcpy(accName,aname);
}


void Account::displayDetails(){}
~Account::Account(){}

int main()
{
	Account acc1;
}


