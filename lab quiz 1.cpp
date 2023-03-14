#include <iostream>
using namespace std;

int main(){

string x;
cout<<"Enter sentence with puncuation"<<endl;
getline(cin,x);

cout<<"sentence with puncuation "<<endl;
cout<<x<<endl;

    for(int i=0,len=x.size();i<len;i++)
   {
	if(ispunct(x[i]))
	{
		x.erase(i--,1);
		len=x.size();
	}
	
   }
cout<<"sentence after removing  puncuation"<<endl;

cout<<x<<endl;

}
