#include <iostream>
#include <cstring>
using namespace std;

class Reports;
class Offers;
//offers calss
class Offers{
	private:
		char offerID[10];
		char offerName[20];
		Reports *report[3];
		
	public:
		Offers(){
			//not used. because i sent values from the objects.
		};
		Offers(const char pOfferID[],const char pOfferName[]){
			strcpy(offerID,pOfferID);
			strcpy(offerName,pOfferName);
		};
		
		float calcOffer(){
			
		};
		
		~Offers(){
			cout<<" Offers Destructor called!!"<<endl;
		};
};

class Reports{
	private:
		char reportID[10];
		Offers *offer;
		
	public:
		Reports(){
			//not used. because i sent values from the objects.
		};
		
		Reports(char rID[], Offers *pOffer){
			strcpy(reportID,rID);
			offer = pOffer;
				
		};
		
		void displayDetails(){
			
		};
		
		~Reports(){
			cout<<" Reports Destructor called!!"<<endl;
		};
		
};

//main function
int main (void)
{
	Offers *offer1 = new Offers("001","package 1");
	Offers *offer2 = new Offers("002","package 2");
	
	Reports *report1 = new Reports("010",offer1);
	Reports *report2 = new Reports("011",offer2);
	
	delete offer1;
	delete offer2;
	
	delete report1;
	delete report2;
	
	return 0;

	
}
