#include<iostream>
using namespace std;
struct result 
{int marks;
char grades;
};
struct record
{int roll;
result x;
};
int main(){
  record z;
  cout<<"enter your roll number"<<endl;
  cin>>z.x.marks;
  cout<<"enter your marks"<<endl;
  cin>>z.x.marks;
  cout<<"enter your grade"<<endl;
  cin>>z.x.grades;

cout<<"your roll number"<<":"<<z.x.marks<<endl;
cout<<"your marks"<<":"<<z.x.marks<<endl;
cout<<"your grade"<<":"<<z.x.grades<<endl;}

