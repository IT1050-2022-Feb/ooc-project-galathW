#include<iostream>
#include<cstring>
#define size 20
using namespace std;

class Solution
{
	protected://private
		  char SolutionID[20];
		  Feedback * Feedback1;
		  
	public://public
	      Solution();
		  void setSolution(char Sid[20]);
		  void displaySolution();
		  ~Solution();
		  	  
};

class Feedback{
	protected://private
		  char RegisteredUserID[20];
		  char FeedbackID[20];
		  Solution * Sol[size];
	public://public
	      Feedback();
		  void assigndetails(char rid[20],char fid[20]);
		  void displayFeedback();
		  ~Feedback();
		  	  
};
//default constructor
Feedback :: Feedback(){
	strcpy(RegisteredUserID, " " );
	strcpy(FeedbackID, " ");
}
/*constructor with parameter
void Feedback :: assignDetails(char pRid,char  pFid){

	
}

void Feedback :: displayFeedback(){
	
}
//destructor
Feedback :: ~Feedback(){
	
	
}*/
/class Solution
{
	protected://private
		  char SolutionID[20];
		  Feedback * Feedback[20];
		  
	public://public
	      Solution();
		  void setSolution(char Sid[20]);
		  void displaySolution();
		  ~Solution();
		  	  
};
//default constructor
Solution :: Solution(){
	
	strcpy(SolutionID," ");
	
}
/*constructor with parameter
void Solution :: setSolution(){
}
	
}

void Solution :: displaySolution(){
	
	
}
//destructor
Solution :: ~Solution(){
	
	
}*/

int main()
{
	Solution *sol1;
	sol1 = new Solution();
	
	Feedback *feed1;
	feed1 = new Feedback();
	
	delete sol1;
	delete  feed1;	
	
	return 0;
	
	
}