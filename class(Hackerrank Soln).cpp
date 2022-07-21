#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class student{
    public:
    int age;
    string first_name;
    string last_name;
    int standard;

    student(int aAge,string aFirst_name,string aLast_name,int aStandard){
        age=aAge;
        first_name=aFirst_name;
        last_name=aLast_name;
        standard=aStandard;
    }
    
};

int main() {
    int age;
    cin>>age;
   
    string first_name;
    cin>>first_name;
    string last_name;
    cin>>last_name;
    int standard;
    cin>>standard;
    
    
    student s1(age,first_name,last_name,standard);
    cout<<s1.age<<"\n";
    cout<<s1.last_name<<","<<'\t'<<s1.first_name<<"\n";
    cout<<s1.standard<<"\n";
    cout<<"\n";
    cout<<s1.age<<","<<s1.first_name<<","<<s1.last_name<<","<<s1.standard;

    
    
    return 0;
}