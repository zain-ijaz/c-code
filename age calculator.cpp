#include<iostream>
using namespace std;
int main()
{
 int z,number;
 int zantek[5]={10,20,30,40,50};
 cout<<"enter the number you want to find"<<endl;
 cin>>number;
 for(int x=0;x<5;x++)
 {
    if(number == zantek[x])
    {z = x;
	}
	
 }
 cout<<"your number is at "<<z<< "index" <<endl;
}
