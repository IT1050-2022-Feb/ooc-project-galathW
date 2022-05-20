#include <iostream>
#include <cstring>
using namespace std;

//part 
class Booking{
	private:
		char date[10];
		char status[10];
		
	public:
		Booking(const char pDate[],const char pStatus[]){
			strcpy(date,pDate);
			strcpy(status,pStatus);
		};
		void calcSubTotal(){
			
		};
		void calcTotal(){
			
		};
		~Booking(){
			cout<<" Booking Destructor called!!"<<endl;
		};
	
};

//whole
class Offers{
	private:
		char offerID[20];
		char offerName[20];
		Booking *book[2];		
		
	public:
		Offers(){
			book[0] = new Booking("2022.05.18","pending");
			book[1] = new Booking("2022.05.19","pending");
		};
		Offers(const char pOfferID[],const char pOfferName[]){
			strcpy(offerID,pOfferID);
			strcpy(offerName,pOfferName);
		};
		float calcOffer(){
			
		};
		~Offers(){
			cout<<" Offer Destructor called!!"<<endl;
		};
};

int main(void)
{
	Offers *cust1 = new Offers();
	
	delete cust1;
	
	Booking *book1 = new Booking("2022.05.18","pending");
	Booking *book2 = new Booking("2022.05.19","pending");
	
	delete book1;
	delete book2;
	
	return 0;
}
