#include<iostream>
using namespace std;


	int max(int a,int b,int c){
		int result;
		if(a>=b && a>=c){
			result=a;
		}
		else if(b>=a && b>=c){
			result=c;
		}
		else{
			result=c;
		}
		
	}
	int main(){
		cout<<max(4,5,6);
		return 0;
	}

