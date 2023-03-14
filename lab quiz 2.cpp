#include<iostream>
using namespace std;
struct node{
	
	int data;
	node *next;
	
};
node * head;
	int size;
void create_list()
{
	int x;
	node *newnode = new node();
	cout<<"enter value of node"<<endl;
	cin>>x;
	newnode->data=x;
	newnode->next=head;
	head= newnode;
	
}

void search()
{
	int val;
	cout<<"enter value to search :"<<endl;
	cin>>val;
		node * temp =head;
		while(temp!=NULL)
	{
		if(val==temp->data)
		{
			cout<<"value found in list!"<<endl;
		}
		temp = temp->next;
		
	}
	
	
}



void insert_at_end()
{
	int y;
		node *newnodel = new node();
	cout<<"enter value of node to insert at end"<<endl;
	cin>>y;
	newnodel->data=y;
	newnodel->next=NULL;
	node * temp =head;
	for(int i =1; i<size-1; i++)
	{
		temp = temp->next;
		
	}
//	temp->next=newnodel;
	
	node *last= temp->next;
	last->next=newnodel;
	
	
}

delnode()
{
		node * temp =head;
		head=temp->next;
		delete temp;
		cout<<"first node deleted!"<<endl;
	
		
	
}
void print()
{
		node * temp =head;
		while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
		
		
	}
	cout<<endl;
	
}



int main()
{
	int choise;
	
while(true)
{

	cout<<"press 1 to create a list "<<endl;
	cout<<"press 2 to insert value at end of list "<<endl;
	cout<<"press 3 to search value in a list "<<endl;
	cout<<"press 4 to delete value in a list "<<endl;
	cout<<"press 5 to exit "<<endl;
	
	
	cin>>choise;
	if(choise==1)
	{
		cout<<" first enter size of list: "<<endl;
	cin>>size;
	for(int i=1; i<=size; i++)
	{
		create_list();
	}
	print();	
	}
	
	if(choise==2)
	{
			insert_at_end();
	cout<<"list after inserting node at end: "<<endl;
		print();
		
	}
		if(choise==3)
		{
			search();
			
		}
		
			if(choise==4)
			{
				delnode();
             	print();
	
			}
			
			if(choise==5)
			{
				break;
			}
			
		}
		
	
	
	
	
	
/*	cout<<" first enter size of list: "<<endl;
	cin>>size;
	for(int i=1; i<=size; i++)
	{
		create_list();
	}
	print();*/
		/*insert_at_end();
	cout<<"list after inserting node at end: "<<endl;
		print();*/
//search();
//delnode();
//	print();
	
}
