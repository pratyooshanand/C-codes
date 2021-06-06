#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n,count=1;
cin>>n;
for(int i=2;i<=n-1;i++){
	if(n%i==0){
		count++;
	}
}
if(count>1){
	cout<<"Number is not prime";
}
else{
	cout<<"Number is prime";
}

}
