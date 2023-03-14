#include<iostream>
using namespace std;
int small=10000;
int smallidx=10000;
int large=-1000;
int mat[4][5]=
{
	
{5,4,3,2,1},
{1,2,3,4,5},
{7,8,9,5,4},
{2,4,6,8,9}
};


int sorted[4][5];

int main(){
	
	for(int i=0;i<4;i++){
		for(int  j=0;j<5;j++){
			if(mat[0][j] < small){
				small=mat[0][j];
			}
		}
	}
	small=100000;
	
	for(int i=0;i<4;i++){
		for(int  j=0;j<5;j++){
			if(mat[1][j] > large){
				large=mat[1][j];
			}
		}
	}
	large=-100000;
	for(int i=0;i<4;i++){
		for(int  j=0;j<5;j++){
			if(mat[2][j] < small){
				small=mat[2][j];
			}
		}
	}
	
	
	for(int i=0;i<4;i++){
		for(int  j=0;j<5;j++){
			if(mat[3][j] > large){
				large=mat[3][j];
			}
		}
	}
	cout<<large<<endl;
}
