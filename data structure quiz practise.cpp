#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	
	int data;
	struct node *next;
};
node *head= NULL;

void insert(int X, int N)
{
	node *temp = new node();
	temp->data = X;
	temp->next = NULL;
	if(N==1)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		node *temp2 = new node();
		temp2 = head;
		for(int i = 1; i<N-1; i++)
		{
			temp2 = temp2->next;
		}
		temp->next = temp2->next;
		temp2->next = temp;
	}
}




void createlist()
{
	int val;
 node *newnode = new node();
cout<<"enter value of node"<<endl;
cin>>val;
	newnode->data=val;
	newnode->next=head;
	head=newnode;
}


void print()
{
	 node *temp = head;
	 while(temp!=NULL)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 	
	 	
	 }
	 
	
}

void ins_end()
{
		int val1;
 node *newnode1 = new node();
  node *last = new node();
cout<<"enter value of node"<<endl;
cin>>val1;
	newnode1->data=val1;
	newnode1->next=NULL;
 node *temp = head;
	 while(temp!=NULL)
	 {
	 
	 	temp=temp->next;
	  }
	
	 // last=temp->next;
	 // last->next=newnode1;
	  
	 temp->next=newnode1;
	 

	
}

int main()
{int size;
	cout<<"enter size of linked list"<<endl;
	cin>>size;
	
	for(int i = 1; i<=size; i++)
	{
		int value;
		cout<<"enter value of Node: "<<i<<endl;
		cin>>value;
		insert(value,i);
		
	}
	
	print();
	ins_end();
	print();
	
	return 0;
	
}
