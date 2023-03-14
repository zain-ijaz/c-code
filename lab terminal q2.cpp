#include <iostream>
using namespace std;



class Node{
	private:
		int data;
		Node *Next;
	public:
		
		void insert(int X, int N);
	    void insert_nth(int pos);
	    void insert_at_end();
	    void insert_at_beg();
		void print();
		
};
Node *Head;

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







void Node::insert_nth(int pos)
{
		int v;
	cout<<"enter value of Node: "<<endl;
	cin>>v;
	
	Node *temp = new Node();
	temp->data = v;
	temp->Next = NULL;
	

		Node *temp2 = new Node();
		temp2 = Head;
		for(int i = 1; i<pos-1; i++)
		{
			temp2 = temp2->Next;
		}
		temp->Next = temp2->Next;
		temp2->Next = temp;
		
	
}
 void Node:: insert_at_end()
  {
  		int u;
	cout<<"enter value of Node to inser at end: "<<endl;
	cin>>u;
	
	Node *newnode = new Node();
		
	Node *last = new Node();
	newnode->data = u;
	newnode->Next = NULL;
	
	Node *temp = Head;
	
		for(int i = 1; i<4; i++)
		
		{
			temp = temp->Next;
		}
		last = temp->Next;
	last->Next=newnode;


	
	
  	
  }
void Node:: insert_at_beg()
	{
		int bval;
		cout<<"enter value of node to insert at beginning"<<endl;
		cin>>bval;
	Node *beg = new Node();
	beg->data = bval;
	beg->Next = Head;
	Head=beg;
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
	int pos;
	cout<<"at which position you want to insert node "<<endl;
	cin>>pos;
     list.insert_nth( pos);
	list.print();

	list.insert_at_end();	
	list.print();
	list.insert_at_beg();
	list.print();


}

