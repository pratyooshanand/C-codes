#include <iostream>
#include<math.h>

using namespace std;

int main() {
int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>a[i][j];
	}
}
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(i<j){
			int temp;
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		
		}
	}
}
cout<<endl<<endl<<endl<<endl;

cout<<"\t\t\t"<< "HERE IS THE NEW TRANSPOSE MATRIX"<<endl<<endl<<"\t\t\t"<<endl;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
}
}
