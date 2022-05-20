#include <iostream>
#include <cstring>

using namespace std;

class Payment 
{
 private :
 		char registerdUserId[20];
 		char paymentId[10];
 		char packageId[10];
 		
 		
 		Booking * booking;
 
 public :
 		Payment();
 		Payment(char rregisterdUserId[], char ppaymentId[], char ppackageId[],Booking * bbooking);
 		void confirmPayment(Booking * bbookig);
 		~Payment();
 		
};

class Booking
{
	private :
			char date[5];
			char status[10];
			
			
			Payment * pay[SIZE];
			


	public :
			Booking();
			Booking(char ddate[], char sstatus[]);
			//void clacSubTotal();
			void calcTotal (Payment * ppay);
			~Booking();
}
Payment::Payment() {
	
		strcpy(registerdUserId,"");
		strcpy(paymentId,"");
		strcpy(packageId,"");

}

Payment::Payment(char rregisterdUserId[], char ppaymentId[], char ppackageId[],Booking * bbooking) {
	
		strcpy(registerdUserId,rregisterdUserId);
		strcpy(paymentId,ppaymentId);
		strcpy(packageId,ppackageId);
		
		Booking = bbooking;
 
 		
}

void Payment::confirmPayment(Booking * bbooking) {
	
}

Payment::~Payment() {
	
}

Booking::Booking() {
	
		strcpy(date,"");
		strcpy(status,"");
		

}

Booking::Booking(char ddate[], char sstatus,Payment * ppay) {
	
		strcpy(date,ddate);
		strcpy(status,sstatus);
		
		Payment = ppay
		
}
void Booking:calcSubTotal()
{
	
}
void Booking::calcTotal()
{
	
}

int main ()
{
	Paymnent p1;
	
	Booking b1;
}


