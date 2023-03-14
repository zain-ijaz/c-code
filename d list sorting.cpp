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
node *first;

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
	void sorting()
{
	
	
	for(int i=5000 ;i>=0;i--)
	{		
	
	
	node *temp = head;
	while(temp != NULL)
	{
		
		if(i==temp->data)
		{
			node *snode = new node();
			snode->data=i;
			snode->next=first;
			snode->pre=NULL;
			first=snode;
				}
		temp=temp->next;
		}
	}
	
}
void print2()
{
	node *temps = first;
	cout<<"The Sorted List Is: ";
	while(temps != NULL)
	{
		cout<<temps->data<<" ";
		temps = temps->next;
		
		
	}
	cout<<"\n";
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

sorting();
   cout<<"sorted list: "<<endl;
   
   print2();
   
   
}
