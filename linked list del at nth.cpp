/*
		I'm Usman Mughal
		Subscribe my channel Please:
				YouTube.com/ProgrammingWorldUMse
*/
#include<iostream>
#include<conio.h>
using namespace std;

class Node{
	private:
		int data;
		Node *Next;
	public:
		void insert(int x);
		void insert(int X, int N);
		void Delete(int n);
		void print();
};
Node *Head;
void Node::insert(int x)
{
	Node *temp = new Node();
	temp->data = x;
	temp->Next = Head;
	Head = temp;
}

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
		
		temp->Next = temp2->Next;
		{
			temp2 = temp2->Next;
		temp2->Next = temp;
	}
}

void Node::Delete(int n)
{
	Node *temp = new Node();
	temp = Head;
	if(n == 1)
	{
		Head = temp->Next;
		delete temp; 
	}
	else
	{
		for(int i = 1; i<n-1; i++)
		{
			temp = temp->Next;
		}
		Node *temp2 = temp->Next;
		temp->Next = temp2->Next;	//means (n+1)th node
		delete temp2;
	}
}

void Node::print()
{
	Node *temp = Head;
	cout<<"List Is: ";
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->Next;
	}
	cout<<"\n";
}


main()
{
	Head = NULL;
	Node list;
	int num;
	list.insert(16,1);
	list.insert(16,1);
	list.insert(16,1);
	list.insert(17,2);
	list.insert(96,3);		//now list is 16 17 96 16 16
	list.insert(18);		//now list is 18 16 17 96 16 16
	list.print();
	cout<<"\nWhich positioned number you want to delete: ";
	cin>>num;
	list.Delete(num);
	list.print();

    getch();
}

