#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
	
};

		node *head = new node();
		node *second = new node();
		node *third  = new node();	
		node *four= new node();
		node *five = new node();
	
void list()
{
		
		 
		head->data= 10;
		head->next=second ;
		
		 second->data= 20;
		 second->next= third ;
			 
		third->data= 30;
      	third->next= four ;
		
			 
	    four->data= 40;
    	four->next= five;
		
			 
	    five->data= 50;
    	five->next=NULL ;
    	
    	
}
void print()
{
		node *ptr = new node();
		ptr=head;
		
		cout<<"the list is: "<<endl;
	while(head!=NULL)
	{
	cout<<ptr->data<<" ";
	ptr=ptr->next;
		
	}
}
void insert()
{
	
	cout<<"hello";
	int value;

	cout<<"enter the value of node to insert: "<<endl;
	cin>>value;
	node *newnode = new node();
	newnode->data=value;
	newnode->next=NULL;
	
	five->next=newnode;
	cout<<"list after inserting new node: "<<endl;
	
	
}



int main()
{
	insert();
	list();
	print();
     insert();
     print();
		
}
