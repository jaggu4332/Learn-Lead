#include<iostream>
using namespace std;
class Smartphone{
    public:
   virtual  void takeSelfie()=0;           ///abstract class
   virtual void makeCall()=0;
};
class  Android : public Smartphone{
      public:
      void takeSelfie()
      {
        cout<<"CLICKED"<<endl;
      }
      void makeCall(){
        cout<<"android calling"<<endl;
      }
};

class iphone: public Smartphone{

public:
void takeSelfie(){
    cout<<"iphone clicks"<<endl;
}
void makeCall(){
    cout<<"iphone calling"<<endl;
}

};

int main(){

    Smartphone *s1= new iphone();
    s1->takeSelfie();
    s1->makeCall();
 

   





    return 0;
}