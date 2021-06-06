#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int counter=1;
while(counter<n){
	for(int j=0;j<n-counter;j++){
	if(a[j]>a[j+1]){
		int dummy=a[j];
		a[j]=a[j+1];
		a[j+1]=dummy;
	}
	
	}
	counter++;
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
}


