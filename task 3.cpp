#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 string str;
 int i=0, j, flag;
 cout<<"Enter any sentence with spaces "<<endl;
 
 getline(cin,str);
 
    while(str[i]!='\0')
 {
    flag=0;
 if(str[i]==' ')
 {
 for(j=i; str[j-1]!='\0'; j++)
 str[j] = str[j+1];
 flag = 1;
 }
 if(flag==0)
 i++;
 }
 cout<<"Sentence without Spaces: "<<str<<endl;
 
 return 0;
 }
