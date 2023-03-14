#include<iostream>
using namespace std;
int main()
{
	
  string x,f,b;
  cout<<"Enter any word: "<<endl;
  cin>>x;
 
 
  for(int a=x.size()-1;a>=0;a--)
  {
  	 b = b+x[a];

  }
 
if(x==b)
{
	cout<<"Given word is palandrom"<<endl;
	
}
else 
{cout<<"Maa chudhao "<<endl;
}


}

