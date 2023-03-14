#include <iostream>
using namespace std;
void g_c_d(int , int);
int main() 
{
    int n1, n2, hcf;
    cout << "Enter first number:: ";
    cin>> n1;
    cout<<"Enter the second number ::";
    cin>> n2;
    if ( n1 > 0 && n2 > 0)
    {
	    g_c_d(n1 , n2 );
    }
    else 
    {
	cout<<" 0 "<<endl;
    }
	return 0;
}

void g_c_d (int n1 , int n2) 
{
    int hcf;
    
    for (int i = 1; i <=  n2 ; ++i) 
	{
        if (n1 % i == 0 && n2 % i ==0) 
		{
            hcf = i;
        }
    }

    cout << "HCF = " << hcf;
}
