#include <bits/stdc++.h>
using namespace std;
 
struct node {
    int data;
    node* next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
}; 
  node *front,*rear;
  void enqueue(int x)
    {
        node* temp = new node(x);
        if(front==NULL)
 {
 	front=rear=temp;
 }
    else
	   {
		 rear->next = temp;
        rear= temp;
		}
       
        }
    void dequeue()
    {
    	if(front==rear)
    	{
    		
    		cout<<"underflow"<<endl;
    		
		}
		else
		{
		
		node *f = front;
		
		front = f->next;
		delete f;
	}
    	
	}
        
        void print()
        {
          node*p = front;
        	while(p!=NULL)
        	{
        		cout<<p->data<<" ";
        		p=p->next;
			}
		}
 int main(){
 enqueue(10);
 enqueue(20);
 enqueue(30);
 enqueue(40);
 enqueue(50);
 enqueue(60);
 enqueue(70);
 enqueue(80);
 
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 
	 enqueue(10);
 enqueue(20);
 enqueue(30);
 enqueue(40);
	 print();
	 
	 
	 
	 
 }
