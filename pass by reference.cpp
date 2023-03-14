#include<iostream>
using namespace std;
void line(int lenght,char symbol)
{for(int i=0;i<lenght;i++)
cout<<symbol;
}
int main()
{
int lenght;
char symbol;
	cout<<"enter lenght"<<endl;
cin>>lenght;
cout<<"enter symbol"<<endl;
cin>>symbol;

  line(lenght,symbol);
 }

