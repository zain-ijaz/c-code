#include<iostream>
using namespace std;

 struct node
 {
 	string data;
 	struct node* left;
 	struct node* right;
 	
 	node(string name)
 	{
 		data=name;
 		left=NULL;
	    right=NULL; 		
	 }
 	
 };
 
 void Inorder(struct node * temp)
 {
 	 if (temp== NULL)
        return;
        
    
 
    Inorder(temp->left);
 
    cout << temp->data << " ";
 
    Inorder(temp->right);
 	
 }
 
 
  void Preorder(struct node * temp)
 {
 	 if (temp== NULL)
        return;
        
    
    cout << temp->data << " ";
    Preorder(temp->left);
    Preorder(temp->right);
 	
 }
 
  void Postorder(struct node * temp)
 {
 	 if (temp== NULL)
        return;
        
    
   
    Preorder(temp->left);
    Preorder(temp->right);
    cout << temp->data << " ";
 	
 }
 
 
 
 int main()
 {
 	
 	struct node *root = new node("director");
 	root->left = new node("hod");
 	root->right = new node ("departments");
 	root->left->left= new node ("faculty");
 	
 	root->right->right = new node("teachers");
 	root->right->right->right = new node("students");
 	root->left->left->left= new node ("hr");
 		
 	
 	
 	
    	Inorder(root);
    	cout<<endl;
    	Preorder(root);
    	cout<<endl;
    	Postorder(root);
    	
 	
 	
 }
 
