#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n;
cin>>n;
int orgn=n;
int reverse=0,last_digit;
while(n>0)
{
	last_digit=n%10;
	reverse=reverse+pow(last_digit,3);
	n=n/10;
}
if(orgn==reverse){
	cout<<"Armstrong";
}
else{
	cout<<"NOt";
}
}
