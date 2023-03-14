# include <iostream>
using namespace std;
 int calfun(int num1, int num2, char op);

int main()
{
	int x;
int y;
char z;

    cout << "Enter first number :"<<endl;
    cin >> x;
    cout<<"enter second number"<<endl;
    cin>>y;
      cout << "baray meharbani apna operator enter karay + or - or * or /: ";
    cin >> z;
    calfun( x,  y, z );
       
  
    
}
     int calfun( int num1, int num2, char op)

 {
	   switch(op)
    {
        case '+':
            cout<<num1+num2;
            break;

        case '-':
            cout<<num1-num2;
            break;

        case '*':
            cout<<num1*num2;
            break;

        case '/':
            cout<<num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }


}

