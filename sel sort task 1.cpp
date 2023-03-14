#include<iostream>
using namespace std;


int main()
{
int	min,temp,i,j;
int array[]={63,85,90,22,43,75};
	
cout<<"original array"<<endl;
for(int i =0;i<6;i++)
{
	cout<<array[i]<<endl;
}


for(i=0;i<6;i++)
{
min=i; 
for(j=i+1;j<6;j++)
{
if(array[j]<array[min]) 
min=j;
}

temp=array[i];
 array[i]=array[min];
 array[min]=temp;
}

cout<<"Array after sorting: "<<endl;
for (int o =0;o<6;o++)
{
	cout<<array[o]<<endl;
}

}
