#include<iostream>
using namespace std;
int main()
{
	int n,l=0;
	int zantek[n],Array[n];
cout<<"Enter The Size Of Array: "<<endl;
cin>>n;
cout<<"Enter The Values In Array: "<<endl;

for(int x=0;x<n;x++)
{
cin>>zantek[x];
}
cout<<"original array: "<<endl;
for(int p=0;p<n;p++)
	{
		cout<<zantek[p]<<endl;
	}
			
// code to find smallest value in array
int min = zantek[0];
for(int y=0;y<n;y++)
{
if(min>zantek[y])
{min = zantek[y];}
}
cout<<"min value: "<<min<<endl;
// code to find largest value in array
int max = zantek[0];
for(int z=0;z<n;z++)
{
if(max<zantek[z])
{max = zantek[z];}
}
cout<<"max value: "<<max<<endl;
// code to sort an Array
for(int i=min;i<=max;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==zantek[j])
			{
				Array[l]=zantek[j];
				l++;
			}
		}
		
	}
	cout<<"original array: "<<endl;
for(int p=0;p<n;p++)
	{
		cout<<zantek[p]<<endl;
	}
	
	cout<<"Sorted Array: "<<endl;
	for(int k =0;k<n;k++)
	{
		cout<<Array[k]<<endl;
	}

} 





