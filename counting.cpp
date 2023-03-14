#include<iostream>
#include<conio.h>

using namespace std;
struct node
{
    int info;
    struct node *next;
};



int main()
{
	int count=0;
	  
	  
    head = new(struct node); 
    second = new(struct node); 
    third = new(struct node); 
    forth = new(struct node); 
    fifth = new(struct node); 
    
    head->info = 10;
    head->next = second;   
    
    second->info = 20;
    second->next = third; 
     
    
    third->info = 30;
    third->next = forth; 
    
      
    forth->info = 40;
    forth->next = fifth; 
     
    
    fifth->info = 50;
    fifth->next = NULL; 
     

    
    cout<<"Elements of list are: "<<endl;
    while (head != NULL)
    {
        cout<<head->info<<"->";
        head = head->next;
         count++;
    }
    cout<<"NULL"<<endl;
    
    cout<<" total nodes are: "<<count<<endl;
    
   /* int value;
	struct node *new_node;
	new_node = new(struct node);
	cout<<"Enter value for new node: "<<endl;
	cin>>value;
	  	new_node->info=value;
    	new_node->next = head;   */
    
    
    return 0;
    
    
	
}
