//54. Create a class Person with private attributes name, age, and public methods to set and get the values.
/*#include<iostream>
using namespace std;
class person {
    private:
        string name;
        int age;
    public:
        void setName(string n){
            // cout<<"Enter name :";
            name=n;
    }

    string getName(){ 
       return name;
    }
    
    void setAge(int a){
        age=a;

    }
    int  getAge(){
       return age;
        
    }

};


int main(){ 
    string name;
    int age;
    cout <<"Enter name: ";
    getline(cin,name);
    cout <<"Enter age :";
    cin >> age;
    person obj;
    obj.setName(name);
    cout <<"Name is :" <<obj.getName()<<endl;

     obj.setAge(age);
     cout<<"Age is: "<<obj.getAge();

     
   
    return 0;
}*/

//55. Implement a class Student that inherits from Person and adds a private attribute studentID with appropriate methods.
/*#include<iostream>
using namespace std;
class person{
    private:
    srting name;
    int age; 
 public:
}*/

//56. Design a class Car with attributes for make, model, and year. Include methods to display car details.
/*#include<iostream>
using namespace std;
class car{
   
    string model="Spresso";
    int year=2021;

    public:
    string getModel(){
    return model;
   }    
    int getYer(){
        return year;
    }
};
int main(){
  car C;
  cout<<"Your car Model is :"<<C.getModel()<<endl;
  cout<<"Your year of purchase is :"<<C.getYer();
}*/
//57. Write a program that creates an array of Car objects and displays their details.
#include<iostream>
using namespace std;

//58. Implement a class BankAccount with private attributes for account number, balance, and public methods for depositing and withdrawing money.
#include<iostream>
using namespace std;
class BankAccount {
    private:
        double balance;
        int AccNo;
    public:
    void setAcc(int acc)
    {
        AccNo=acc;
    }
    void setBal(    )
        void setDeposite(int dep){
            if(dep>0){
                balance+=dep;
            }
            
        }
        void getWithdraw(){ 
            return  ;
    }
};