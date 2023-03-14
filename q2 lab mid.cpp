#include<iostream>
using namespace std;

int k=2;
int n=6;
int kstacks[6];

int top1=-1;
int top2=n/2-1 ;

push(int x, int sn)
{
	if(sn==1)
	{
		if(top1>=n/2-1)
		{
			cout<<"stack overflow!"<<endl;
		}
	else
	{
			top1++;
		kstacks[top1]=x;
		cout<<"value inserted!"<<endl;
	}
		
	}
	
	else if (sn==2)
	{
			if(top2==n-1)
		{
			cout<<"stack overflow!"<<endl;
		}
	else
		top2++;
		kstacks[top2]=x;
		cout<<"value inserted!"<<endl;
		
	}
	
	
}
pop(int sn)
{
	if(sn==1)
	{
		if(top1==-1)
		{
			cout<<"underflow!"<<endl;
		}
		else
		{
		int	x= kstacks[top1];
			cout<<"element "<<x<<" poped!"<<endl;
			top1--;
		}
	}
else if(sn==2)
	{
		
		if(top2<=n/2)
		{
			cout<<"underflow!"<<endl;
			
		}
		else
		{
			
		int	y=kstacks[top2];
			cout<<"element "<<y<<" poped!"<<endl;
			top1--;
		}
	}
	
	
}

int main()
{
	int choise;
	int x,sn;
	
while(true)
{
	cout<<"enter 1 to push 2 to pop"<<endl;
	cin>>choise;
	if(choise==1)
	{
		cout<<"enter value to push"<<endl;
		cin>>x;
		cout<<"enter stack number to push"<<endl;
		cin>>sn;
		push(x, sn);
		
		
	}
	if(choise==2)
	{
		cout<<"enter stack number to pop"<<endl;
		cin>>sn;
		pop(sn);
		
	}
	
	
}
	
}



