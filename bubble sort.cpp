#include<iostream>
using namespace std;
int main()
{
	int temp;
	int arr[10]={53,83,31,43,50,17,99,63,90,12};
	for(int i =0 ;i<9;i++)	
	{
	
	for(int j=0;j<9;j++)
	{
		if(arr[j]>arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
			
		}
		
		
		}
	}
		
		for(int s =0 ; s<9; s++)
		{
			cout<<arr[s]<<endl;
		}
	
	
	
}
