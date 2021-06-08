#include<iostream>
using namespace std;
void prime(int n)
{
	int a[100]={0};
	for(int i=2;i<=n;i++)
	{
		if(a[i]==0){
			for(int j=i*i;j<=n;j++)
			{
			if(j% i==0){
				a[j]=1;
			}
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]==0)
		{
			cout<<i<<endl;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	prime(n);
	
}
