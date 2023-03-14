#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	
	int data;
	struct node *next;
};
node *top= NULL;
int size;






void push()
{
	int val;
 node *newnode = new node();
cout<<"enter value to push: "<<endl;
cin>>val;
	newnode->data=val;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	 node *temp = top;
	 top=temp->next;
	 delete temp;
	
}


void print()
{
	 node *temp = top;
	 while(temp!=NULL)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 	
	 	
	 }
	 cout<<endl;
	 
	
}


	

int main()
{
	cout<<"enter size of stack"<<endl;
	cin>>size;
	
	for(int i = 1; i<=size; i++)
	{
	
		
		push();
		
	}
		print();
	while(true)
	{
		int x;
		cout<<"press 1 to delete element in stack!"<<endl;
		cin>>x;
		if(x==1)
		{
			pop();
		}
		cout<<"now the stack is: "<<endl;
			print();
			 node *temp = top;
			if(temp==NULL)
			{
				cout<<"empty!"<<endl;
				cout<<"underflow"<<endl;
				
				break;
			}
			
		
	}
	


	
	return 0;
	
}
