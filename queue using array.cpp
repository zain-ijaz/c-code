#include <iostream>
using namespace std;
 
 

 
	int front=0; 
	int rear=0;
	 
 	int size=5;
 	
 	 int queue[5];
 
 


 
 void enqueue(int x)
  {
 	
 	if(rear==5)
 	{
 		cout<<"over flow!"<<endl;
 	}
else
{

 	queue[rear]=x;
 	rear++;
 	cout<<"the queue is: "<<endl;
	for(int i=front;i<rear;i++)
	{
		cout<<queue[i]<<" ";
		
	}
	cout<<endl;
}
 
}
void dequeue()
{
  if(front==rear)
  {
  	cout<<" under flow!"<<endl;

  }
  else
  {
  	int d = queue[front];
  	cout<<"the value "<< d<< " dequeued!"<<endl;
  	for(int i=front;i<=rear;i++)
  	{
  		queue[i] = queue[i+1];
  	
		  	  }
		  	  	rear--;
  }
	
}

/*void print()

{
	
	for(int i=front;i<=rear;i++)
	{
		cout<<queue[i]<<" ";
		
	}
}*/
 

 
int main()
{
	
	cout<<"hello zantek"<<endl;



	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	
	dequeue();
	dequeue();
	dequeue();
		
	for(int i=front;i<rear;i++)
	{
		cout<<queue[i]<<" ";
		
	}
	
	cout<<"hello world"<<endl;
	
}


