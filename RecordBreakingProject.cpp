#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
if(a[0]>a[1]){
	cout<<"Record Breaking"<<endl;
}
else{
	cout<<"no\n";
}
int mx=a[0];
for(int i=1;i<n;i++){
	if(mx<a[i] && a[i]>a[i+1]){
		cout<<"Record Breaking"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	mx=max(mx,a[i]);
}
}
