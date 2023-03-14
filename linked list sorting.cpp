#include<iostream>
#include<conio.h>
using namespace std;

class Node{
	private:
		int data;
		Node *Next;
	public:
		
		void insert(int X, int N);
	   void sorting();
		void print();
		void print2();
	};
	Node *Head;
	Node *first;
	
	void Node::insert(int X, int N)
{
	Node *temp = new Node();
	temp->data = X;
	temp->Next = NULL;
	if(N==1)
	{
		temp->Next = Head;
		Head = temp;
	}
	else
	{
		Node *temp2 = new Node();
		temp2 = Head;
		for(int i = 1; i<N-1; i++)
		{
			temp2 = temp2->Next;
		}
		temp->Next = temp2->Next;
		temp2->Next = temp;
	}
}

void Node::sorting()
{
	
	for(int i=5000 ;i>=0;i--)
	{
		
		
	Node *temp = Head;
	while(temp != NULL)
	{
		
		if(i==temp->data)
		{
			Node *snode = new Node();
			snode->data=i;
			snode->Next=first;
			first=snode;
				}
		temp=temp->Next;
		}
	}
	
}





void Node::print()
{
	Node *temp = Head;
	cout<<" THE List Is: ";
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->Next;
	}
	cout<<"\n";
}



void Node::print2()
{
	Node *temps = first;
	cout<<"The Sorted List Is: ";
	while(temps != NULL)
	{
		cout<<temps->data<<" ";
		temps = temps->Next;
	}
	cout<<"\n";
}


int main()
{
	
	Head = NULL;
	Node list;
	int num,size;
	
	cout<<"enter size of linked list"<<endl;
	cin>>size;
	
	for(int i = 1; i<=size; i++)
	{
		int value;
		cout<<"enter value of Node: "<<i<<endl;
		cin>>value;
		list.insert(value,i);
		
	}
	list.print();
	list.sorting();
	list.print2();

	
}
