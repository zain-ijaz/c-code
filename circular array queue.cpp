#include <iostream>
using namespace std;
 
 

 
	int f=-1; 
	int r=-1;
	 
 	int size=6;
 	
 	 int queue[6];
 
 


 
 void enqueue(int x)
  {
 	
 	if(f==0 && r==size-1)
 	{
 		cout<<"over flow!"<<endl;
 	}
else if(r==size-1&&f!=0)
{
 r=0;
 	queue[r]=x;

 	cout<<"the queue is: "<<endl;
	for(int i=r;i<f;i++)
	{
		cout<<queue[i]<<" ";
		
	}
	cout<<endl;
}

else if(f,r==-1)
{
	f++;
	r++;
	queue[r]=x;
	cout<<"the queue is: "<<endl;
	for(int i=f;i<=r;i++)
	{
		cout<<queue[i]<<" ";
		
	}
	cout<<endl;
}
else
{
	r++;
	queue[r]=x;
	cout<<"the queue is: "<<endl;
	for(int i=f;i<=r;i++)
	{
		cout<<queue[i]<<" ";
		
	}
	cout<<endl;
}
 
}
void dequeue()
{
  if(f,r==-1)
  {
  	cout<<" under flow!"<<endl;

  }
  else if (f==r)
  {
  	int d = queue[f];
  	f,r=-1;
  	cout<<"the value "<< d<< " dequeued!"<<endl;
  
  }
  else if(f==size-1)
  {
  	int d = queue[f];
  	cout<<"the value "<< d<< " dequeued!"<<endl;
  	f=0;
  }
  else
  {
  	int d = queue[f];
  	cout<<"the value "<< d<< " dequeued!"<<endl;
  	f++;
  }
	
}
 
 
int main()
{
	
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	enqueue(70);
	
	dequeue();
	dequeue();
	dequeue();
    dequeue();
	dequeue();
	dequeue();
	dequeue();

	

	
}


