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
void print_reverse()
{
			node *a=head;
	while(a->next!=NULL)
	{

		a=a->next;
		
	}
	node *b = a;
	cout<<endl;	
		while(b!=head)
	{

		cout<<b->data<<" ";
		b=b->pre;
		
	}
	// cout << a->data << endl;
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
cout<<"reverse list"<<endl;
print_reverse();

}



