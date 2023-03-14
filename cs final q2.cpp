#include<iostream>
using namespace std; 
void rotate(float arr[], int n); 
void left_shift(float arr[], int d, int n) ;
int main() 
{ 
    float arr[10] ;
    int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Enter the elements of array::";
	for(int i = 0 ; i < n ; i++)
	{
		cin>>arr[i];
	}

    left_shift(arr, 2, n); 
  
    return 0; 
} 

void left_shift(float arr[], int d, int n) 
{ 
    for (int i = 0; i < d; i++) 
    {    
		rotate(arr, n); 
    }
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
void rotate(float arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
        
    arr[i] = temp; 
}
