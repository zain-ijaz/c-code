#include<iostream>
using namespace std;
const int arraysize=3;

string zain[arraysize][arraysize];

int main(){
	 for(int x=0;x<arraysize;x++){
		 for(int y=0;y<arraysize;y++){
			cout<<"enter the number"<<endl;
			cin>>zain[x][y];
		 }
    }
    for(int z=0;z<arraysize;z++)
    {for(int d=0;d<arraysize;d++)
    {cout<<zain[z][d];
    cout<<endl;
	}
	}
}
