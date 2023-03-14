#include<iostream>
using namespace std;

//functions
void scorecard();
void selection()
{
}

//variables
int score=0;
int option;
int ball=0;
int wickets = 0;

int main(){
    scorecard(); 
    while(true){
	 
	
	cout<<"enter option"<<endl;
    cin>>option;
    if(option == 0){
		
		system("cls");
		cout<<"score :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;
	}
	
	if(option ==1){
		score++;
		system("cls");
		cout<<"score :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;
	}
	
	if(option ==2){
		score=score+2;
		system("cls");
		cout<<"score :"<<score<<"/"<<wickets<<endl;
	ball++;
		cout<<"balls: "<<ball<<endl;
                      
	}
	
	if(option ==3){
		score=score+3;
		system("cls");
		cout<<"score :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	
	if(option ==4){
		score=score+4;
		system("cls");
			cout<<"score :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	
	if(option ==5){
		score=score+5;
		system("cls");
		cout<<"score :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	
	if(option ==6){
		score=score+6;
		system("cls");
		cout<<"score :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;

	}
	if(option == 7){
	
	    wickets = wickets+1;	
		system("cls");
		cout<<"score :"<<score<<"/"<<wickets<<endl;
		ball++;
		cout<<"balls: "<<ball<<endl;
		if(wickets==10)
		{ cout<<"***************innings ended***************"<<endl;
		}

	}
	

	
	if(option == 8){
	
	    	
		system("cls");
		score++;
		cout<<"score :"<<score<<"/"<<wickets<<endl;
		cout<<"balls: "<<ball<<endl;

	}


	
}
	
}

void scorecard(){
	cout<<"0 score"<<endl;
	cout<<"1 score"<<endl;
	cout<<"2 score"<<endl;
	cout<<"3 score"<<endl;
	cout<<"4 score"<<endl;
	cout<<"5 score"<<endl;
	cout<<"6 score"<<endl;
	cout<<"7 wicket"<<endl;
	cout<<"8 wide ball"<<endl;


	
	cout<<"wide ball"<<endl;
}
