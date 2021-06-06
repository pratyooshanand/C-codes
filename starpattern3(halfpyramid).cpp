#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row,column;
	for(row=n;row>=1;row--){
		for(column=1;column<=5;column++){
			if(column>=row){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

}

