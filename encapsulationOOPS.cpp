#include<iostream>
using namespace std;
class employee{
    private:
   string title;
   string director;
   int  rating;
   public:
   employee(string aTitle,string aDirector,int aRating){
            setDirector(aDirector);
            setRating(aRating);
            seTitle(aTitle);
   }

   void seTitle(string aTitle){
    title=aTitle;
   }
   string getTitle(){
    return title;
   }
   void setDirector(string aDirector){
    director=aDirector;
   }
   string getDirector(){
    return director;
   }
   void setRating(int aRating){
    rating=aRating;
   }
   int getRating(){
    return rating;
    
   }
};
int main(){
    employee emp1("jaagd","krishna",13);
    cout<<emp1.getTitle();

    return 0;
}