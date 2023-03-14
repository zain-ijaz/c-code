#include<iostream>
using namespace std;
int array[10];
int copy1[10];
int small=10000;
int smallidx;
int main(){
	for(int x=0;x<10;x++){
		cout<<"enter the number"<<endl;
		cin>>array[x];
	}
	for(int x=0;x<10;x++){
		copy1[x]=array[x];
	}
	for(int x=0;x<10;x++){
		if(small > copy1[x]){
		
			small =copy1[x];
		
		}
		
	}
	cout<<"smallest number is"<<endl;
	cout<<small<<endl;
}
