#include <iostream>
using namespace std;

int main(){

string a;
cout<<"Enter sentence with puncuation"<<endl;
getline(cin,a);

cout<<"sentence with puncuation"<<endl;
cout<<a<<endl;

for(int i=0 , len=a.size();i<len;i++)
{
	if(ispunct(a[i]))
	{
		a.erase(i--,1);
		len=a.size();
	}
	
}
cout<<"sentence after removing  puncuation"<<endl;

cout<<a<<endl;

}
