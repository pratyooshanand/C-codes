#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==0){
		return 1;
	}
	int prevfactorial=factorial(n-1);
	return n*prevfactorial;
}

int main()
{
int n;
cin>>n;
int ans=factorial(n);
cout<<ans;
return 0;
}
