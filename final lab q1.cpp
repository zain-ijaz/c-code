#include<iostream>
using namespace std;
int counter1=0;
int val;
const int count=9;
int array[count] = {1,2,3,4,1,2,4,4,4};
int main()
{

cout<<"enter the number"<<endl;
cin>>val;
{
	for(int x=0;x<10;x++){
		if(array[x] == val){
			counter1++;
		}
	}
	cout<<"the number of values is"<<endl;
	cout<<counter1<<endl;
}
}
