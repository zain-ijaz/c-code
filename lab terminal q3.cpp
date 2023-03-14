#include<iostream>
using namespace std;


int top=-1;

void push( char stack[],char value)
{
		top++;
	
	stack[top]=value;
		cout<<" element "<<value<<" pushed"<<endl;
		
	

}

void pop(char stack[])
{
	char x = stack[top];
	top--;
	cout<<" element "<<x<<" poped"<<endl;
	
}

int main()
{
	char stack[8];
	push( stack,'A');
	push(stack,'C');
	push(stack,'D');
	push(stack,'F');
	push(stack,'K');
	
	cout<<"-----------------------------"<<endl;
	
	
	pop(stack);
	pop(stack);
	pop(stack);
	
	cout<<endl;
	push( stack,'R');
	push(stack,'L');
	push(stack,'S');
	push(stack,'P');
	cout<<endl;
	pop(stack);
	
	
			
	}

