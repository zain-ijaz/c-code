#include<iostream>
using namespace std;
int main()
{  int zantek[12]={31,28,31,30,31,30,31,30,31,30,31,30};
    int day,month;
    int total=0;
    cout<<"enter current day"<<endl;
    cin>>day;
    cout<<"enter the month"<<endl;
    cin>>month;
    for(int x=0;x<month-1;x++)
    {total = total + zantek[x];
	}
int sum =	total+day;
	cout<<"days in year till today = "<<sum<<endl;
    
}
