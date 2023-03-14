#include<iostream>
using namespace std;
int main()
{
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int mid,start,end,key,loc;
	start=0;
	end=9;
	cout<<"enter value to search in list"<<endl;
	cin>>key;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(key==mid)
		{
			loc=mid;
			break;
			
		}
		else if (key<mid)
		{
			end=mid-1;
		}
		else if (key>mid)
		{
			start = mid+1;
		}
		
		
	}
	
	cout<<"value found at index "<<loc<<endl;
	
	
	
}
