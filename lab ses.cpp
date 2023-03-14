#include<iostream>
using namespace std;
int shape1()
{for(int a=0;a<4;a++)
{for(int b=0;b<4;b++)
{cout<<"*";
}
cout<<endl;
}
}
int shape2()
{for(int a=0;a<5;a++)
{for(int b=0;b<a;b++)
{cout<<"*";
}
cout<<endl;
}
}
int main()
{int h;
cout<<"press 1 to display shape 1 press 2 to display shape 2"<<endl;
cin>>h;
if(h==1)
{shape1();
}
if(h==2)
{shape2();
}
}

