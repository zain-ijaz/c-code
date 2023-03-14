
#include <iostream>
using namespace std;
 
// BST node 
struct Node {
    int data;
    Node *left;     			 
	Node *right;     			
}; 
 


Node* createnewNode(int data)   
{
    Node* temp = new Node;      
 
    temp->data = data;      
 
    temp->left = NULL;      
    
    temp->right = NULL;    	     
    return temp;                 
}
/*int isBST(struct  Node* root){
	
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){

             return 0;
        }
        if(prev!=NULL && root->data <= prev->data){  
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else 
	{
        return 1;
    }
}
*/
/*struct node * searching(struct Node* root, int key)      //create a utility function for searching 
{
   while(root!=NULL)                                   // loop will continue until the whole tree is checked 
    {
        if(key == root->data)
		{
            cout<<"ELEMENT IS FOUND AT "<<root;       // Duplication of data is not possible in BST thus insertion cannot be performed in this case
        }
        
        else if(key<root->data)                       //if key is less then data of root then we will  make a recursive call to insert data in left subtreee
		{
            root = root->left;  
	        //  cout<<"element found"<<endl;                  //we will move towards left subtree and perform search operation
        }
        else if (key>root->data)                                          //if key is greater then data of root then we will  make a recursive call to insert data in right subtreee
		{
            root = root->right;                       //we will move towards right subtree and perform search operation
      // cout<<"element found"<<endl;  
	         }
	         
	        
	      
	}
	         
    
    return 0;
}
*/

Node* search(Node* root, int key) {
        if(root == NULL || root->data == key)        
            return root;

        // Key is greater than root's data 
        if(root->data < key) 
            return search(root->right,key);
            cout<<"value found"<<endl;

        // Key is smaller than root's data 
       
	    return search(root->left,key);
         cout<<"value found"<<endl;
         
         
         
     }
     
      Node* deletenode(Node* root, int key) 
    { 
        // Base case 
        if (root == NULL) 
            return root; 
        //If root->data is greater than k then we delete the root's subtree
        if(root->data > key){ 
            root->left = deletenode(root->left, key); 
            return root; 
        } 
        else if(root->data < key){ 
            root->right = deletenode(root->right, key); 
            return root; 
        } 
  

        // If one of the children is empty 
        if (root->left == NULL) { 
            Node* temp = root->right;
            delete root; 
            return temp; 
        } 
        else if (root->right == NULL) { 
            Node* temp = root->left; 
            delete root; 
            return temp; 
        } 
else {
            Node* Parent = root;
            // Find successor of the node
            Node *succ = root->right; 
            while (succ->left != NULL) { 
                Parent = succ; 
                succ = succ->left; 
            } 

            if (Parent != root) 
                Parent->left = succ->right; 
            else
                Parent->right = succ->right; 

            // Copy Successor Data  
            root->data = succ->data; 

            // Delete Successor and return root 
            delete succ;          
            return root; 
        } 
    } 

     
     
     

Node* insert(Node* root, int key)         // A utility function named insert with key taken as arrgument and address of root node
                                             
{

    Node* newnode = createnewNode(key);   // create new node containing new element KEY 
 
    Node* x = root;                       // taking variable of type pointer 'x' to store address of root
	                                      // x is used for performing downward traversal and for searching the position where new node can be inserted
    
    Node* y = NULL;                       // take a following pointer 'y' which follows the actual pointer x
 
    while (x != NULL)                     // loop will continue until pointer 'x' which is equal to root becomes NULL
	 {
        y = x;                            // set the following pointer 'y' equal to the actual pointer 'x'
        if (key < x->data)                
        {       
        	x = x->left;                  // we will move towards left subtree
		}   
        else
        {
        	 x = x->right;                // we will move towards right subtree
		}  
    }
    
    if (y == NULL)                   // If the root is NULL i.e the tree is empty then new node will be root node
    { 
	y = newnode;
	}
	
    else if (key < y->data)            // if the new key is less then the data of leaf node then newnode will become the left child
    {
		
  		y->left = newnode;          
	 
	}
    
    else
    {
    	  y->right = newnode;          // if the new key is greater than the data of leaf node then new node will become right child 
	}

    return y;                          // return the pointer where newnode is inserted
}



 
void Preorder(Node* root)              //create a utility funtion to perform preorder traversal in BST
{
    if (root == NULL)
    {
    	 return;
	}
       
    else 
	{
    	cout << root->data << "  ";
        Preorder(root->left);
        Preorder(root->right);
    }
}



// Inorder Traversal
void inorder(struct Node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    cout << root->data<< " -> ";

    // Traverse right
    inorder(root->right);
  }
}





void Inorder(Node* root)               //create a utility function to perform inorder traversal in BST
{
    if (root == NULL)
    {
    	 return;                         
	}
       
    else
	 {
        Inorder(root->left);
        cout << root->data << "  ";
        Inorder(root->right);
    }
}
void Postorder(Node* root)          
{
    if (root == NULL)
    {
    	return;
	}
    else
	{
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << "  ";
    }
}


 
// Driver code
int main()
{
    /* Let us create following BST
            50
          /   \
        30      70
        / \   / \
       20 40 60 80 */
 
    Node* root = NULL;               
    root = insert(root, 50);         
    insert(root, 30);               
    insert(root, 20);               
    insert(root, 40);                
    insert(root, 70);                
    insert(root, 60);                
    insert(root, 80); 
	
	cout<<"search"<<endl;
	
 Node *s=	search(root,80);
cout<<s->data<<endl;

deletenode(root,60);
	 
	
	cout<<"					ELEMENTS OF TREE AFTER INSERTION ARE "  <<endl;
	cout<<endl;            
    cout<<"PREORDER TRAVERSAL : "<<endl;
    Preorder(root);                  //performing preorder traversal
    cout<<endl<<endl;
    
     cout<<"INORDER TRAVERSAL : "<<endl;
    Inorder(root);                  //performing inorder traversal
    cout<<endl<<endl;
    
     cout<<"POSTORDER TRAVERSAL : "<<endl;
    Postorder(root);                  //performing postorder traversal
    cout<<endl<<endl;
    
    return 0;
}

