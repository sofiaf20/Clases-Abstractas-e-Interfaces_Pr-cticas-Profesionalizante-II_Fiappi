#include <iostream>
#include <string>
using namespace std;

class Human{
    public: 
    void eat(){ cout<<"Is eating"; }
    virtual void tolive() = 0;
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
   void tolive(){
       cout<<"The student is living";
   }
};

main(){
    
    Student* student = new Student();
    student->tolive();

    
    return 0;
}