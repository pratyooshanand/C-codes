#include<iostream>                  // preprocessor directives( includes certain files)
using namespace std;                
int main(){                        // start of the program(main function)
int a;//variable declaration          
a=5;//intialization
cout<<"size of a "<<sizeof(a)<<"\n";         // cout<< is used to print 
char b;
cout<<"size of b "<<sizeof(b)<<"\n";         // \n provides line break
short int si;
long int li;
cout<<"size of "<<sizeof(si)<<endl;           // another way to endline
cout<<"size of "<<sizeof(li)<<endl;
}