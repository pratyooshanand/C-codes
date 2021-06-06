#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	int mx=a[0];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(mx<a[j]){
				mx=a[j];
			}
			
		}
		cout<<mx<<" ";
	}
}
