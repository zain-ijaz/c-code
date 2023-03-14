#include<iostream>
using namespace std;

//functions
void scorecard();
void selection();
void selection1();
void playername1();
void playername2();
void teamname();
void toss();

//variables
int score=0;
int s;
int score1 = 0;
int s1;
int option;
int ball=0;
int ball1 = 0;
int wickets = 0;
int wickets1 = 0;
string a;
string b;
string name[5];
string name2[5];


int main()
{
	cout<<"***************************** welcome to the zantek cricket software ******************************"<<endl;
	
	teamname();
	playername1();
	playername2();
	system("cls");
	toss();
		
		
    
}
    
    

void scorecard()
{
	cout<<"0 score"<<endl;
	cout<<"1 score"<<endl;
	cout<<"2 score"<<endl;
	cout<<"3 score"<<endl;
	cout<<"4 score"<<endl;
	cout<<"5 score"<<endl;
	cout<<"6 score"<<endl;
	cout<<"7 wicket"<<endl;
	cout<<"8 wide ball"<<endl;	
}

void selection()
{ 
system("cls");
	scorecard(); 
		cout<<"****************************** MATCH START ******************************"<<endl;
	 
while(true){
	 
	
	cout<<"enter option"<<endl;
    cin>>option;
    if(option == 0){
		
	
		cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;
	}
	
	if(option ==1){
		score++;
		system("cls");
		cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;
	}
	
	if(option ==2){
		score=score+2;
		system("cls");
		cout<<a<<" :"<<score<<"/"<<wickets<<endl;
	ball++;
		cout<<"balls: "<<ball<<endl;

	}
	
	if(option ==3){
		score=score+3;
		system("cls");
		cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	
	if(option ==4){
		score=score+4;
		system("cls");
			cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	
	if(option ==5){
		score=score+5;
		system("cls");
			cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	
	if(option ==6){
		score=score+6;
		system("cls");
			cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	if(option == 7){
	
	    wickets = wickets+1;	
		system("cls");
			cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;
		if(wickets==10)
		{ s = score;
	cout<<"***************innings ended***************"<<endl;
	
	cout<<"******************** TARGET :"<<score+1<<"********************"<<endl;
		  system("pause");
		  
	
		  break;
		
		  	}
		  	


	}
	

	
	if(option == 8){
	
	    	
		system("cls");
		score++;
			cout<<a<<" :"<<score<<"/"<<wickets<<endl;
		cout<<"balls: "<<ball<<endl;

	}
	
}
	
}
 void selection1()


{system("cls");
	scorecard(); 
		cout<<"****************************** MATCH START ******************************"<<endl;
	 
while(true){
	 
	
	cout<<"enter option"<<endl;
    cin>>option;
    if(option == 0){
		
		system("cls");
		cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		ball1++;
		cout<<"balls: "<<ball1<<endl;
	}
	
	if(option ==1){
		score1++;
		system("cls");
		cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		ball1++;
		cout<<"balls: "<<ball1<<endl;
	}
	
	if(option ==2){
		score1=score1+2;
		system("cls");
		cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
	ball1++;
		cout<<"balls: "<<ball1<<endl;

	}
	
	if(option ==3){
		score1=score1+3;
		system("cls");
		cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		ball1++;
		cout<<"balls: "<<ball1<<endl;

	}
	
	if(option ==4){
		score1=score1+4;
		system("cls");
			cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		ball1++;
		cout<<"balls: "<<ball1<<endl;

	}
	
	if(option ==5){
		score1=score1+5;
		system("cls");
			cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		ball1++;
		cout<<"balls: "<<ball1<<endl;

	}
	
	if(option ==6){
		score1=score1+6;
		system("cls");
			cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		ball1++;
		cout<<"balls: "<<ball1<<endl;

	}
	if(option == 7){
	
	    wickets1 = wickets1+1;	
		system("cls");
			cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		ball1++;
		cout<<"balls: "<<ball1<<endl;
		if(wickets1==10)
		{ s1 = score1;
		
		cout<<"***************innings ended***************"<<endl;
		cout<<"*************** score "<<score1<<endl;
		break;
		
		}

	}
	

	
	if(option == 8){
	
	    	
		system("cls");
		score1++;
			cout<<b<<" :"<<score1<<"/"<<wickets1<<endl;
		cout<<"balls: "<<ball1<<endl;

	}
	if(score1>=score+1)
	{ s1 = score1;
		
		cout<<"***************innings ended***************"<<endl;
	
		break;
		
	}
	
}
	
}
void playername1()
{
cout<<"enter players name of "<<a<<":"<<endl;

for( int i=0; i<5;i++)
{
cin>>name[i];
}system("cls");
}
void teamname()
{
cout<<"Enter 1st team  name :"<<endl;
cin>>a;
cout<<"Enter 2nd team name :"<<endl;
cin>>b;

}
void playername2()
{
cout<<"enter players name of "<<b<<":"<<endl;
for( int i=0; i<5;i++)
{
cin>>name2[i];
}system("cls");
}
void toss()
{int x;

	cout<<"press 1 if "<<a<<" is batting"<<endl;

	cout<<"press 2 if "<<b<<" is batting"<<endl;
	cin>>x;
	if(x==1)
	{selection();	
	selection1();
		if(s>s1)
	{cout<<"*****************"<< a<<" has won the match by "<<score-score1<<" runs"<<"**************"<<endl;
	}
	else
	{
		cout<<"*****************"<< b <<" has won the match by "<<10-wickets1<<" wickets ************"<<endl;
	}
	
	}
	if(x==2)
	{selection1();
	}
}


