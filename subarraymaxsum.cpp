#include <iostream>

using namespace std;
int subarraysum(int a[],int i,int j){
	int sum=0;
	for(int k=i;k<=j;k++){
		sum+=a[k];
	}
	return sum;
}
int main() {
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>arr[i][j];
	}
}
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
}
