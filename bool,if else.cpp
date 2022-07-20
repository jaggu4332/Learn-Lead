#include<iostream>
using namespace std;
int getmax(int num1,int num2)
{
	int result;
	if(num1>num2){
		
		result=num1;
	}
	else if(num1=num2)
	{
	result=num1;
		
	}
	else{
		result=num2;
	}
	return result;
	
	
}
int main(){
	cout<<getmax(2,2);
	return 0;
	
}
	


 
