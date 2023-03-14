#include<iostream>
using namespace std;
int main()
{    
     int l =0;

	 int Oarray[6]={10,5,5,28,120,5};
     int	Array[6];
	 
	 for(int i=-1;i<=120;i++)
	  {
		for(int j =0;j<6;j++)
		{
			if(i==Oarray[j])
			{
				Array[l]=Oarray[j];
				l++;
			}
		}
		
	}
	for(int k =0;k<5;k++)
	{
		cout<<Array[k]<<endl;
	}
	
	
	
	
	
}
