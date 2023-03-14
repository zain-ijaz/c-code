#include<iostream>
#include<string.h>
using namespace std;
class zantek
{
  char author[50],title[50],publisher[50];
  int price,stock;
  public:
  zantek();
  void get_data();
  void display_data();
  int search(char [],char []);
  void copies(int);
};
zantek::zantek()
{
 char *author=new char[50];
    char * title=new char[50];
    char *publisher=new char[50];
    price=0;
    stock=0;
}

void zantek::get_data()
{
 cout<<"\nEnter name of the author: ";
 cin>>author;
 cout<<"\nEnter title of the book: ";
 cin>>title;
 cout<<"\nEnter publisher of the book: ";
 cin>>publisher;
 cout<<"\nEnter price of the book: ";
 cin>>price;
 cout<<"\nEnter stock of book: ";
 cin>>stock;
}

void zantek::display_data()
{
 cout<<"\n";
 cout<<author<<"\t"<<title<<"\t"<<publisher<<"\t"<<price<<"\t"<<stock;
}

int zantek::search(char a[50],char b[50])
{

  if(strcmp(author,a) && strcmp(title,b)){
  return 1;
 }
 else
  return 0;
}

void zantek::copies(int war){
 if(stock>=war){
  cout<<"\nPrice for "<<war<<" copies is: "<<(price*war);
 }
 else
  cout<<"\n* book is Not available*";
}

int main(){
 cout<<"\t\t\t\t\t@@@@@@@@@@@ welcome to e-books @@@@@@@@@@@@@";
 int i,zain,flag,n,k,ch;
 char bull;
 char s_author[50],s_title[50];
 zantek b[50];
 do{
  cout<<"\n1)enter record\n2)Display record\n3)Search the book in record\n";
  cout<<"\nEnter any of above number: ";
  cin>>zain;
  switch(zain){
   case 1:{
    cout<<"\nHow many books do you want to enter: ";
    cin>>n;
    for(i=0;i<n;i++){
     b[i].get_data();
    }
    break;
    }
   case 2:{
    cout<<"\nAuthor\tTitle\tPublisher\tPrice\tStock";
    for(i=0;i<n;i++){
     b[i].display_data();
    }
    break;
   }
   case 3:{
    cout<<"\nEnter the name of the author: ";
    cin>>s_author;
    cout<<"\nEnter the title of the book: ";
    cin>>s_title;
    for(i=0;i<n;i++){
     if(b[i].search(s_author,s_title))
     {
      k=i;
      flag=1;
      if(flag == 1){
       cout<<"\nBook is available"; 
      }
      else
      {
       cout<<"\nN book is in the record";
       break; 
      }
     } 
    }
    if(flag == 1){
     cout<<"\nhow many books you want: ";
     cin>>ch;
     b[k].copies(ch);
    }
    break; 
    }
  } 
  cout<<"\if you want to continue press y if not press n : ";
  cin>>bull;
  }
 while(bull  != 'n');
 return 0;
}
