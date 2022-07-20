#include<iostream>
using namespace std;
///class side------Blueprint of datatype
   class Book{
         public:
         string title;
         string author;
         int pages;

         Book(string aTitle,string aAuthor,int aPages){  ////constructor
               title=aTitle;
               author=aAuthor;
               pages=aPages;
    
         }

   };
int main(){

    // object side (instance of class)

         Book book1("Harry Potetr","JK Rowling",300);
         Book book2("testing","jagad ",1300);


         


         cout<<book2.author;



    return 0;
}


