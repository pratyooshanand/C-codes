#include<iostream>
using namespace std;
void divcheck(int n)
{
	int sum=0,sum1=0;
	for(int i=1;i<=n;i++)
	{
		if(i%5==0){
			sum+=1;
		}
		if(i%7==0)
		{
			sum+=1;
		}
		if(i%5==0 & i%7==0)
		{
			sum-=1;
		}
	}
	cout<<sum;
}
int main()
{
	divcheck(20);
}
