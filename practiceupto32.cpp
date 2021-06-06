#include<iostream>
#include<string>

using namespace std;

int main(){
int row,col;
cin>>row>>col;
for(int i=1;i<=row;i++){
	for(int j=1;j<row-i;j++){
		cout<<" ";
	}
	for(int j=2;j<=i;j++){
		cout<<j<<"";
	}
	for(int j=1;j<=row;j++){
		cout<<j<<"";
	}
	cout<<endl;
}
}




