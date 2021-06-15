#include <iostream>
#include <string>
using namespace std;

class Human{
    public: 
    void eat(){ cout<<"Is eating"; }
    void tolive(){ cout<<"Is living";}
};
class Student : public Human{
   private:
   int id;
   string name;
   string surname;
   public:
   void setId(int _id){
       id = _id;
   }
   void setName(string _name){
       name = _name;
   }
   void setSurname(string _surname){
       surname = _surname;
   }
   int getId(){
       return id;
   }
   string getName(){
       return name;
   }
   string getSurname(){
       return surname;
   }
};

main(){
    
    Student* student = new Student();
    student->eat();

    
    return 0;
}