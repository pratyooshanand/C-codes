/* bit manipulation starting with *GETBIT*  */

#include <iostream>
#include<math.h>

using namespace std;

int getBit(int n, int i){
return((n&(1<<i))!=0);
}

int main()
{
int n,i;
cin>>n>>i;
cout<<getBit(n,i);
}
