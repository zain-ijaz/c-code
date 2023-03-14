#include<iostream>
using namespace std;
int option;
int ball=0;
int overs=0;
int wickets;
int score;

int main()
{
	while(true)
{
		cout<<"enter option"<<endl;
    cin>>option;
    if(option == 0){
    	
		
		system("cls");
			
		cout<<"score :"<<score<<"/"<<wickets<<endl;
	
		cout<<"overs : "<<overs<<"."<<ball<<endl;
		ball++;
		if(ball==5)
		{ball = ball*0;
	//	ball--;
		overs++;}
	}
	
		
		
		
	}
}
