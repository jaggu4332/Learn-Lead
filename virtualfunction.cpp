#include<iostream>
using namespace std;

class chef{
public:
virtual void makesFood(){
    cout<<"the chef makes chicken"<<endl;
}
};
class indianchef:public chef{
    public:
    void makesFood(){
    cout<<"the chef makes sambar";

    }
    
};

int main(){
    chef  *chef1= new indianchef();
    chef1->makesFood();
return 0;


}