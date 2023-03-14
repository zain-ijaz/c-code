#include<iostream>
using namespace std;
int array[10];
int sum=0;
int a;
int avg;
int main(){
	for(int x=0;x<10;x++){
		cout<<"enter the number"<<endl;
		cin>>array[x];
	}
	
	for(int x=0;x<10;x++){
		a=array[x];
		sum=sum+a;
	}
	avg=sum/10;
	cout<<"average is"<<endl;
	cout<<avg<<endl;
	
	
}
