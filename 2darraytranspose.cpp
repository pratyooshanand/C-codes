#include <iostream>

using namespace std;

int main(){
char a[50];
cin>>a;
int i=0,length=0;
while(a[i]!='\0'){
	length++;
	i++;
}
bool result=true;
for(int i=0;i<length;i++){
	if(a[i]!=a[length-1-i]){
		result=false;
		break;
	}
	
}
if(result){
	cout<<"Palindrome";
}else{
	cout<<"Not palindrome";
}


}
