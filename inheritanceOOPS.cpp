#include<iostream>
using namespace std;
class Chef{
    public:

    void makeChicken(){
        cout<<"the chef makes chicken"<<endl;
    }
    void makesIdlis(){
        cout<<"the chef makes idlis"<<endl;
        
    }
    void makesMasaladosa(){
        cout<<"the chef makes masaladosa"<<endl;
        
    }
};
    class Italianchef : public Chef{
        public:
        void makesNoodles(){
         
            cout<<"the chef makes noodles"<<endl;
        }

    };

int main(){
    Chef chef1;
    chef1.makesIdlis();
    

    Italianchef itoa;
    itoa.makeChicken();
    itoa.makesNoodles();


return 0;

}