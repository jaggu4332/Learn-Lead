#include<iostream>
using namespace std;
int power(int basenum,int powernum){
	int result=1;
	for(int i=0;i<powernum;i++){
		result=result*basenum;
		
	}
	return result;
}
int main(){
	cout<<power(2,2);
	return 0;
}

