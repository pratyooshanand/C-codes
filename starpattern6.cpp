#include<iostream>

using namespace std;

int main()
{
	int n=20;
	int row,column;
	for(row=1;row<=n;row++){
		for(column=1;column<=row;column++){
			cout<<"* ";
		}
		int space=2*n-2*row;
		for(int i=1;i<=space;i++){
			cout<<"  ";
		}
		for(column=1;column<=row;column++){
			cout<<"* ";
		}
	cout<<endl;	
	}
		for(row=n;row>=1;row--){
		for(column=1;column<=row;column++){
			cout<<"* ";
		}
		int space=2*n-2*row;
		for(int i=1;i<=space;i++){
			cout<<"  ";
		}
		for(column=1;column<=row;column++){
			cout<<"* ";
		}
	cout<<endl;	
	}
}
