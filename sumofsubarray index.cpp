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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mx=0;
	int current;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			current=subarraysum(a,i,j);	
			mx=max(current,mx);
		}
	}
	cout<<mx;
	return 0;
}
