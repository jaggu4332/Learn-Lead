#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
string str;
cin>>str;
reverse(str.begin(),str.end());
cout<<'\n'<<str;
return 0;
}