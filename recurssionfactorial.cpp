#include<iostream>
using namespace std;

int fib(int n)
{
	int ans=0;
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	ans=fib(n-1)+fib(n-2);
	return ans;
}

int main()
{
int n;
cin>>n;
int ans=fib(n);
cout<<ans;
return 0;
}
