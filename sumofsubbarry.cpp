#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	} else{
			return b;
	}

}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	int difference,sum=2;
	int maximum=0;
	difference=a[1]-a[0];
for(int i=2;i<n;i++){
	if((a[i]-a[i-1])==difference){
		sum+=1;

	}else{
		difference=a[i+1]-a[i];
		maximum=2;
	}
	maximum=max(sum,maximum);
	
	
}
cout<<maximum;
}
