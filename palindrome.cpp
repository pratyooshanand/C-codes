#include <iostream>

using namespace std;
void swap(int *aptr,int *bptr){
	int temp;
	temp=*aptr;
	*aptr=*bptr;
	*bptr=temp;
}

int main(){
	int a=2;
	int b=3;
	int *aptr=&a;
	int *bptr =&b;
	swap(aptr,bptr);
	cout<<a<<" "<<b;
	
}
