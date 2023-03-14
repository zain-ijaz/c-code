#include<iostream>
using namespace std;

struct node
{
	int info;
	struct node *next;
}*start;


 	
 int main()
 {
 	int data;
 	struct node *new_node,*p;
 	cout<<"Enter value in node: "<<endl;
 	cin>>data;
    new_node->info=data;
 	new_node->next=NULL;
 	
	if(start==NULL)
 		{
 			start=new_node;
 			start->next=NULL;
		 }
		 else
		 {
		 	p = start;
		 	start=new_node;
		 	start->next=p;
		 }
		 
		 cout<<"value inserted at beginning"<<endl;
 		
 	return 0;
 }
