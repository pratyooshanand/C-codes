#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				int a;
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=arr[i];
			}
			else{
				
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

