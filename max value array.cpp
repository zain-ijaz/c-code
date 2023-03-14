#include<iostream>
using namespace std;
int main()
{



int zantek[10];
cout<<"enter values in array"<<endl;
for(int x=0;x<10;x++)
{cin>>zantek[x];
}
int min = zantek[0];
for(int y=0;y<10;y++)
{
if(min>zantek[y])
{min = zantek[y];}
}
cout<<"minimum value = " <<min<<endl;

} 

