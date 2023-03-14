#include <iostream>
using namespace std;

struct node 
{
	int data;
	struct node *next;
	struct node *pre;
  
};
	int size;

node *head;

void create_Dlist()
{
	int x;
cout<<"enter value of node"<<endl;
cin>>x;
node *temp = new node();
temp->data=x;
temp->next=head;
temp->pre=NULL;
head=temp;
}
void ins_at_end()
{
	
		int y;
cout<<"enter value of node at end"<<endl;
cin>>y;
node *newnode = new node();
newnode->data=y;
newnode->next=NULL;
newnode->pre=NULL;
	node * temp1 = head;
	for(int i = 1; i<size; i++)
	{
		temp1=temp1->next;
	}
	
	temp1->next=newnode;
	newnode->pre=temp1;
	
}
void ins_at_pos()
{
		
		int y;
		int pos;
cout<<"enter value of node to insert at specific position "<<endl;
cin>>y;
cout<<"enter the location of node you want to insert"<<endl;
cin>>pos;
node *newnode = new node();
newnode->data=y;
newnode->next=NULL;
newnode->pre=NULL;
	node * temp1 = head;
	for(int i = 1; i<pos-1; i++)
	{
		temp1=temp1->next;
	}
	
node*temp=temp1->next;
	newnode->next=temp;
	temp->pre=newnode;
	temp1->next=newnode;
	newnode->pre=temp1;
	
	
}
void delete_node()
{
		int pos;
	cout<<"enter the location of node to delete"<<endl;
	
cin>>pos;
if(pos==1)

{
		node *temp = head;
	head= temp->next;
	head->pre=NULL;
}
else 
{
	node *temp1=head;
		for(int i=1; i<pos-1; i++)
	{
		temp1=temp1->next;
	}
	
	node * temp2 = temp1->next;
	temp1->next=temp2->next;
	temp2->next->pre=temp1;
	delete temp2;
	
}
}




void print()
{
	node *a=head;
	while(a!=NULL)
	{
		cout<<a->data<<" ";
		a=a->next;
		
	}
	cout<<endl;	
}


int main()
{
cout<<"enter size of list"<<endl;
cin>>size;
for(int j =1 ;j<=size;j++)
{
	create_Dlist();
}
print();
	
		ins_at_end();
		print();
	ins_at_pos();
print();
delete_node();
print();
	
}
	
	

