#include<iostream>
using namespace std;
int r;
int ar;
int Area(int rad);
int main(){
	cout<<"enter the radius"<<endl;
	cin>>r;
	ar=Area(r);
	cout<<"area is"<<endl;
	cout<<ar<<endl;

}

int Area(int rad){
	int a;
	a=3.14*r*r;
	return a;
}
