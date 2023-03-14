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
    node *head1;

       void create_list(int x)
       {
        
          node *temp = new node();
          temp->data=x;
          temp->next=head;
          temp->pre=NULL;
        head=temp;
        }
void print()
{
	cout<<"THE ORIGINAL LIST: "<<endl;
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
	
	
	for(int i=600 ;i>=0;i--)
	{		
	
	
	node *temp = head;
	while(temp != NULL)
	{
		
		if(i==temp->data)
		{
			node *snode = new node();
			snode->data=i;
			snode->next=head1;
			snode->pre=NULL;
			head1=snode;
				}
		temp=temp->next;
		}
	}
	
}
void sprint()
{
	node *temps = head1;
	cout<<"The Sorted List Is: ";
	while(temps != NULL)
	{
		cout<<temps->data<<" ";
		temps = temps->next;
		
		
	}
	cout<<endl;
}


    int main(){
cout<<"ENTER SIZE OF LIST:"<<endl;
cin>>size;
       for(int i =1 ;i<=size;i++)
{
		int x;
          cout<<"enter value of node "<< i <<endl;
          cin>>x;
	
	create_list(x);
}
      print();

      sorting();
       
   sprint();
   
   
}
