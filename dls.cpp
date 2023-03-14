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

void create_reverselist(int a)
{
	
	node *temp1 = new node();
temp1->data=a;
temp1->next=first;
temp1->pre=NULL;
first=temp1;
	
}
void reverse()
{
	node *temp = head;
	while(temp!=NULL)
	{
		create_reverselist(temp->data);
		temp=temp->next;
		
		}	
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
void print2()
{
	node *temps = first;
	cout<<"reverse list: ";
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
reverse();
print2();

}
