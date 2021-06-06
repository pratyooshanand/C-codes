#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(isPrime(i)){
			cout<<i<<endl;
		}
}
return 0;
}
