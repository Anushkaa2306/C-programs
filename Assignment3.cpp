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
// #include<iostream>
// using namespace std;
// class car{
// private:
// string mod,make;
// int year;
// public:
// car(string g="nexon" , string h="tata",int y=2023){
//     mod=g;
//     make=h;
//     year=y;
//     cout<<"aapki car ka modle:"<< mod<<" make is: "<<make<<"year is: "<<y<<endl;

// }
// };
// int main(){
//     car c;
//     car c1("i20","hyndai",2013);
//     car a[3];
//     return 0;
// }
//58. Implement a class BankAccount with private attributes for account number, balance, and public methods for depositing and withdrawing money.
// #include<iostream>
// using namespace std;
// class BankAccount {
//     private:
//         double balance;
//         int AccNo;
//     public:
//     BankAccount(int accN=0, double bal=0) {
//         AccNo = accN;
//         balance = bal;
//     }
  
//     void deposit(double amount) {
//             balance += amount;
//             cout << "Deposited: " << amount << " SNew Balance: " << balance << endl;
//     }
//      void withdraw(double amount){
//                 balance -= amount;
//                 cout << "Withdrawn:" << amount << "New Balance: " << balance << endl;
//         }
//      void display(){
//         cout << "Account number: "<<AccNo<<" balance: "<<balance;
//      }
// }; 
// int main(){
//     BankAccount B1(101,20);
//   B1.display();
//   B1.deposit(30);
//   B1.display();
//   B1.withdraw(10);
//   B1.display();
//   B1.deposit(1000);
//   B1.display();
  

// }
//g++ main.cpp && ./a.out
//59.Create a class Rectangle with private attributes for length and width, and public methods to calculate area and perimeter.
// #include<iostream>
// using namespace std;
// class 

//61. Create a class Counter with a static data member to count the number of objects created.
// #include<iostream>
// using namespace std;
// class Counter{
// private:
// static int a;
// public:
// Counter(){
//     a++;
//     cout<<"\nObject "<<Counter::a;
// }
// };
// int Counter::a=0;
// int main(){
//     Counter c;
//     Counter a[5];
// }
// 62. Implement a class Math with static function members for basic arithmetic operations.
// #include<iostream>
// using namespace std;
// class Math{
// public:
// static int add(int a, int b){
//     return a+b;
// }
// static int sub(int a, int b){
//     return a-b;

// }
// static int mul(int a, int b){
//     return a*b;
// }
// static double div(int  a,int  b){
//     return a/b;
// }
// };
// int main(){
//     int a,b;
//     cout << "Enter the 1st number: ";
//     cin >>a;
//     cout << endl<<"Enter the 2nd number: ";
//     cin >>b;

//     cout <<"Add: "<< Math::add(a,b)<<endl;
//     cout <<"Sub: "<< Math::sub(a,b)<<endl;
//     cout <<"Mul: "<< Math::mul(a,b)<<endl;
//     cout <<"div: "<< Math::div(a,b);

// }

//g++ Assignment3.cpp && ./a.out
// 63.Write a class Student with a static data member to keep track of the total number of students enrolled.
// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     string name;
//     int rollno;
//    static int totalStd;

//     public:
//     Student(string n,int r){
//         name=n;
//         rollno=r;
//         totalStd++;

//     }
//     static int getTstd(){
//         return totalStd;
//     }
//     void display(){
//         cout<<endl <<"Name: "<<name<<endl<<"Rollno: "<<rollno;

//     }
// };
// int Student::totalStd=0;
// int main(){
// Student s1("Anushka Chouhan",101);
// s1.display();
// Student s2("Garvit Hindoliya",102);
// s2.display();
// cout<<endl<<"Total number of Student : "<<Student::getTstd();
// }

//g++ Assignment3.cpp && ./a.out
// 64. Implement a class Book with a parameterized constructor to initialize book details.

// 65. Create a class Point with a default constructor, parameterized constructor, and copy constructor.
// #include<iostream>
// using namespace std;
// class point{
//     int a,b,cp;
//     public:
//     point(){
//         cout <<"Default Constructor."<<endl;
//     }
//     point(int x,int y){
//         a=x;
//         b=y;
//         cout <<x+y<<" this is a parameterized Constructor.";
//     }
//     point(point &obj){
//         this->a=obj.a;
//     }
//     void display(){
//         cout<<"hi";
//     }
// };
// int main(){
//     point p1;
//     p1.display();
//     cout<<endl;
//     point p2(2,3);
//     p2.display();
//     cout<<endl;
//     point p3;
//     p3=p3;
//     p3.display();
//     cout<<endl;


// }
// 66. Write a class Matrix with a parameterized constructor to initialize a 2D array.
// #include<iostream>
// using namespace std;
// class Matrix{
//     Matrix(int x,int y)
// }
// 67. Implement a class FileHandler with a destructor that closes an open file.
// 68. Create a class DynamicArray with a destructor that deallocates dynamically allocated memory.
// 69. Write a class Logger with a destructor that logs messages when the object is destroyed.
// 70. Overload the "+" operator for a class Complex to add two complex numbers.
// 71. Implement the "<<" and ">>" operators for a class Fraction to input and output fraction values.
// 72. Overload the "==" operator for a class Date to compare two dates.
// 73. Write a class Vector and overload the "[]" operator to access elements of the vector.
// 74. Implement a class Box with a friend function to calculate the volume of two boxes.
// 75. Create a class Circle with a friend function to calculate the area.
// 76. Write a class Distance with a friend function to add two distances.
// 77. Implement a class Shape with derived classes Circle, Rectangle, and Triangle.
// 78. Create a class Animal with derived classes Dog, Cat, and Bird.
// 79. Write a class Vehicle with derived classes Car and Bike.
// 80. Implement single inheritance with a base class Person and derived class Employee.
// 81. Create a class Parent and implement multiple inheritance with derived classes Child1 and Child2.
// 82. Write a class Base and implement hierarchical inheritance with derived classes Derived1, Derived2, and Derived3.
// 83. Implement multilevel inheritance with classes Base, Intermediate, and Derived.
#include<iostream>
using namespace std;
class student{
    public:
    int sum(int a,int b){
        return a+b;
    }
    void display(){
        cout <<"your sum is: ";
    }
};
int main(){
    int x,y;
    cout <<"1st and 2nd number: ";
    cin>>x>>y;
    student s1;
    s1.display();
    student s2;

   cout<< s2.sum(x,y);
   cout <<endl<<s2.sum(3,4);
    
}
