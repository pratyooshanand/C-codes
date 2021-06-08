#include<iostream>
using namespace std;

void binary1s(int n)       // this function counts the number of 1s in binary form of a number
{
	int count=0;
 while(n!=0)
 {
 	n= (n & (n-1));
 	count++;
 	
	 }	
	 cout<<count;
}

int main()
{
	int n;
	cin>>n;
	binary1s(n);

	return 0;
}
