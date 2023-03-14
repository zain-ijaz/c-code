#include<iostream>
using namespace std;
int main()
{
	int array[10];
	int x,a=2,l=0;;
	cout<<"Enter decimal value: "<<endl;
	cin>>x;

	while(x<=0)
	{
	
     array[l] = x%a;
    array[l]++;
    x = x/2;
}
for(int i=0;i<10;i++)
{
	cout<<array[i];
}

	
}


	

