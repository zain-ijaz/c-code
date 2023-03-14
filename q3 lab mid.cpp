#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
 node *head;
node * first;

	

	void create_list()
{
	int val;
	 cout<<"enter value of node"<<endl;
		  cin>>val;
	
	node *a = new node();
	a->data=val;
	a->next=head;
	head=a;	

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
void print1()
{
	
	node * temp1 =first;
		while(temp1!=NULL)
	{
		cout<<temp1->data<<" ";
		temp1 = temp1->next;
		
		
	}
	cout<<endl;
	
}
void reverse_list(int val)
{
	
	
	node *b = new node();
	b->data=val;
	b->next=first;
	first=b;
	

	}

void reverse()
{

		node * temp =head;
		while(temp!=NULL)
	
	{
		  reverse_list(temp->data);
		
		temp = temp->next;
		
		
	}	
}
	void compare()
	{
		
		node *a = head;
		node *b = first;
	if(a->data==b->data)
		{
		
		cout<<"palandrome!"<<endl;
			
		}
		else
		{
			cout<<"not palendrome!"<<endl;
		}
		 
	}
	int main()
	{
		int size,val;
		cout<<"enter size of list"<<endl;
		cin>>size;
		for(int i =1 ;i<=size ;i++)
		{
	     
		  create_list();
		  	
	    }	
	    print();
	    reverse();
	    
	    cout<<"reverse list is :"<<endl;
	    print1();
	    compare();
	    
	
	}
	
