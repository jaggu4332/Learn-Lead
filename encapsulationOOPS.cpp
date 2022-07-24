#include<iostream>
using namespace std;
class employee{
    private:
    string Name;
    int Age;

    public:
    void setName(string name){
               Name=name;
       }
       string getName(){
        return Name;
       }
       void setAge(int age){
        Age=age;
       }
       int getAge(){
        return Age;
       }

      
       





};
int main(){
    employee emp1;
    emp1.setName("raju");
    cout<<emp1.getName();


    return 0;

}

