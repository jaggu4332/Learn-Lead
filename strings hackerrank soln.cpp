#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main() {
    // Complete the program
 
 string a;
 cin>>a;
 string b;
 cin>>b;
char temp[0];

 
 string c=a+b;
  

  cout<<a.length()<<"\t"<<b.length()<<endl;
  cout<<c<<endl;
  temp[0]=a[0];
  a[0]=b[0];
  
  b[0]=temp[0];
  cout<<a<<"\t"<<b;
  
    return 0;
}