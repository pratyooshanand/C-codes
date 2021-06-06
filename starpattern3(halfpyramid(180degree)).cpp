#include<iostream>

using namespace std;

int main(){
	int n;
	int row,column;
	for(row=1;row<=5;row++){
		for(column=1;column<=row;column++){
			cout<<row<<" ";
		}
		cout<<endl;
	}
}

