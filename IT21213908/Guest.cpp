#include<iostream>
#include<cstring>
using namespace std;

class GuestUser{
	protected ://private
		  char NIC[10];
		  
	public ://public
	      GuestUser ();
		  GuestUser (char nic[10]);
		  void displayGuestUser();
		  ~GuestUser();
		  	  
};
//default constructor
GuestUser :: GuestUser(){
	
	strcpy(NIC,"");
}
//constructor with parameter
GuestUser :: GuestUser(char pnic[10]){
	
	strcpy(NIC, pnic);
}
void GuestUser :: displayGuestUser(){
	
}
//destructor
GuestUser :: ~GuestUser(){
	
}

int main()
{
	GuestUser  g;
}