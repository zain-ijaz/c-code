#include <iostream>
using namespace std;
int main()
{
	int x;
	 int arr[5] = { 1,2,35,48,56 };
	cout<<"enter index to search: "<<endl;
	cin>>arr[x];
	
    for (int i = 0;i<5;i++)
    {
    	if(i==arr[x])
    	{
    	int k;
		k=arr[i];
		cout<<"Your value at index "<<arr[x]<<"is"<<k;
		}
    }
    
    return 0;
}

