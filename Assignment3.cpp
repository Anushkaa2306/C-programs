1. What is an object in C++?
An object in C++ is a real-world entity that represents an instance of a class. It contains both data members and member functions defined by its class. Objects allow accessing and manipulating data. Objects occupy memory when created.

Points:

Object = instance of a class.

Created using the class blueprint.

Allocates memory at runtime.

2. What is a class in C++ and how does it differ from an object?
A class in C++ is a blueprint or template that defines the structure of data and functions. It doesn't occupy memory until an object is created. Objects are created based on the class, meaning the object is a physical entity, and the class is just a design.

Points:

Class = blueprint; Object = real-world entity.

Class has no memory allocation; Object does.

Objects are used to access class features.

3. Explain the concept of encapsulation with an example.
Encapsulation is the concept of binding data and functions together in one unit (class). It hides internal details and exposes only necessary parts, ensuring security. Example: Banking systems where balance is private and accessed through functions only.

Points:

Protects data from direct access.

Achieved by using private and public keywords.

Example: Private balance variable in BankAccount class.

4. How do you define a class in C++?
A class in C++ is defined using the class keyword followed by its name and a block of code. The block contains private, protected, and public members (variables and functions).

Example Syntax:
class MyClass {
  public:
    int number;
    void display();
};
Points:

Use class ClassName { };

Members can be public, private, or protected.

Ends with a semicolon ;.

5. Describe the syntax for creating an object of a class.
To create an object, simply declare it by class name followed by object name. Once declared, you can access public members using the dot . operator.

Example:
MyClass obj1; // object creation
obj1.display();
Points:

Syntax: ClassName ObjectName;

Use dot operator to access members.

Object is like a variable of the class type.

6. What are private members in a class and how are they accessed?
Private members are variables or functions that cannot be accessed directly outside the class. They can only be accessed through public functions inside the class.

Points:

Default access in class is private.

Accessed indirectly using public methods.

Provides data protection.

7. What are public members in a class and how are they accessed?
Public members are accessible from anywhere in the program where the object of the class is visible. Public members allow interaction with the class from the outside world.

Points:

Declared using public: keyword.

Directly accessed using object name and dot operator.

Helps expose necessary functionality.

8. Explain the significance of access specifiers in a class.
Access specifiers (public, private, protected) control the accessibility of class members. They help implement encapsulation and data hiding by restricting direct access to data members.

Points:

private: accessible only inside the class.

public: accessible everywhere.

protected: accessible inside class and derived classes.

9. Provide an example of a class with both private and public members.
Here’s a simple class with private and public members:

class Student {
  private:
    int rollNumber;
  public:
    void setRollNumber(int r) { rollNumber = r; }
    void display() { cout << "Roll Number: " << rollNumber; }
};
Points:

rollNumber is private.

setRollNumber and display are public.

Access to private data is controlled via public methods.

10. How does data hiding work in C++?
Data hiding ensures that sensitive data members of a class are hidden from outside access. Only trusted functions (public methods) can interact with the hidden data, ensuring security and integrity.

Points:

Achieved using private or protected access specifier.

Prevents external misuse of internal data.

Essential part of encapsulation.

11. What is a static data member in C++?
A static data member is a class variable that is shared among all objects of the class. It is not duplicated with each object; instead, it is common and stored at a single location in memory.

Points:

Only one copy exists for all objects.

Declared with the static keyword inside class.

Must be defined outside the class.

12. How do you declare and initialize a static data member?
A static data member is declared inside the class and initialized outside the class using the class name and scope resolution operator ::.

Example:
class Test { static int count; };
int Test::count = 0; // Initialization
Points:

Declare with static inside class.

Initialize outside using ClassName::VariableName.

Initialization is mandatory once.

13. What is a static function member in C++?
A static function member belongs to the class rather than to any object. It can only access static data members and is called using the class name.

Points:

Declared using static keyword.

Cannot access non-static members directly.

Called using ClassName::FunctionName().

14. How do static function members differ from regular function members?
Static function members do not need an object to be called, whereas regular function members require an object. Static functions can only manipulate static variables.

Points:

Static function is common to all objects.

No this pointer inside static functions.

Useful for utility functions.

15. Provide an example of a class with static data and function members.
class Sample {
    static int counter;
  public:
    static void showCounter() {
        cout << "Counter: " << counter << endl;
    }
};
int Sample::counter = 10;
Points:

counter is a static data member.

showCounter() is a static function.

Access using Sample::showCounter().

16. What is a constructor in C++ and why is it important?
A constructor is a special member function that is automatically called when an object is created. It initializes the object’s data members with default or user-provided values.

Points:

Same name as class.

No return type, not even void.

Automatically invoked during object creation.

17. Explain the different types of constructors in C++.
There are three types of constructors in C++:

Default Constructor: No parameters.

Parameterized Constructor: Accepts parameters.

Copy Constructor: Creates a new object as a copy of an existing object.

Points:

Default for initialization.

Parameterized for custom values.

Copy constructor for cloning objects.

18. What is a default constructor and when is it used?
A default constructor is a constructor without parameters that initializes objects with default values. If no constructor is provided, C++ automatically provides a default constructor.

Points:

No arguments taken.

Automatically created by the compiler if none is defined.

Useful for creating empty objects.

19. How do parameterized constructors work?
A parameterized constructor accepts arguments to initialize an object with specific values at the time of creation.

Example:
class Point {
  int x;
  public: Point(int a) { x = a; }
};
Points:

Accepts input while creating object.

Helps in flexible initialization.

No automatic default if only parameterized is defined.

20. What is a copy constructor and what is its purpose?
A copy constructor creates a new object as an exact copy of another object. It is invoked when an object is passed by value, returned from a function, or explicitly copied.

Points:

Syntax: ClassName(const ClassName &obj)

Used for copying objects safely.

Essential for deep copy when using pointers.



21. Explain the concept of constructor overloading.
Constructor overloading means defining multiple constructors in a class with different parameter lists. It allows creating objects in different ways depending on the situation.

Points:

Same constructor name but different signatures.

Helps to initialize objects differently.

Decided at compile time (polymorphism).

22. How does a constructor initializer list work?
A constructor initializer list allows you to initialize data members directly before entering the constructor body. It is efficient, especially for const and reference members.

Example:

cpp
Copy
Edit
class A { int x; public: A(int a) : x(a) {} };
Points:

Syntax: Constructor() : member1(val1), member2(val2) { }

Required for const or reference variables.

Improves performance.

23. What is a destructor in C++ and what is its purpose?
A destructor is a special member function that is invoked automatically when an object goes out of scope. It is mainly used to release resources like memory or file handles.

Points:

Same name as class, preceded by ~.

No return type and no parameters.

Cleans up before object is destroyed.

24. How is a destructor declared and defined?
A destructor is declared inside the class with a tilde (~) followed by the class name. It is defined like a normal member function.

Example:

cpp
Copy
Edit
class Demo { ~Demo(); };
Demo::~Demo() { /* body */ }
Points:

No arguments allowed.

No return type.

Called automatically when object dies.

25. What happens if a destructor is not explicitly defined in a class?
If no destructor is defined, C++ compiler automatically provides a default destructor that safely destroys the object without custom cleanup.

Points:

Default destructor handles simple cleanup.

Needed explicitly only if dynamic memory is involved.

Compiler-generated destructor is empty.

26. Explain the concept of automatic and dynamic storage duration in relation to destructors.
Automatic storage objects are destroyed automatically at the end of their scope, whereas dynamic storage objects created by new must be destroyed manually using delete.

Points:

Automatic: Destroyed at block exit.

Dynamic: Destroyed by explicit delete.

Destructor called automatically in both cases.

27. How do destructors differ from constructors?
While constructors are used to initialize objects, destructors are used to destroy them and free up resources. Constructors can be overloaded, destructors cannot.

Points:

Constructors can have parameters, destructors can't.

Destructor starts with ~.

Destructor has no return type, like constructor.

28. What is operator overloading in C++ and why is it useful?
Operator overloading allows you to redefine the behavior of operators for user-defined types (like classes). It makes code more readable and natural.

Points:

Makes objects behave like built-in types.

Improves code clarity and usability.

Implemented by overloading operator functions.

29. Describe the syntax for overloading an operator.
To overload an operator, you define a function using the keyword operator followed by the symbol you want to overload.

Syntax:

ReturnType operatorSymbol(Parameters) { /* code */ }
Points:

Return type can be a value or reference.

operator keyword must be used.

Can be a member or friend function.

30. Which operators can and cannot be overloaded in C++?
Most operators can be overloaded, but a few cannot be overloaded like :: (scope resolution), . (member access), .*, sizeof, and ?: (ternary).

Points:

Can overload +, -, *, /, ==, etc.

Cannot overload sizeof, typeid, . etc.

Overloading should preserve the original meaning if possible.
21. Explain the concept of constructor overloading.
Constructor overloading means defining multiple constructors in a class with different parameter lists. It allows creating objects in different ways depending on the situation.

Points:

Same constructor name but different signatures.

Helps to initialize objects differently.

Decided at compile time (polymorphism).

22. How does a constructor initializer list work?
A constructor initializer list allows you to initialize data members directly before entering the constructor body. It is efficient, especially for const and reference members.

Example:

class A { int x; public: A(int a) : x(a) {} };
Points:

Syntax: Constructor() : member1(val1), member2(val2) { }

Required for const or reference variables.

Improves performance.

23. What is a destructor in C++ and what is its purpose?
A destructor is a special member function that is invoked automatically when an object goes out of scope. It is mainly used to release resources like memory or file handles.

Points:

Same name as class, preceded by ~.

No return type and no parameters.

Cleans up before object is destroyed.

24. How is a destructor declared and defined?
A destructor is declared inside the class with a tilde (~) followed by the class name. It is defined like a normal member function.

Example:

class Demo { ~Demo(); };
Demo::~Demo() { /* body */ }
Points:

No arguments allowed.

No return type.

Called automatically when object dies.

25. What happens if a destructor is not explicitly defined in a class?
If no destructor is defined, C++ compiler automatically provides a default destructor that safely destroys the object without custom cleanup.

Points:

Default destructor handles simple cleanup.

Needed explicitly only if dynamic memory is involved.

Compiler-generated destructor is empty.

26. Explain the concept of automatic and dynamic storage duration in relation to destructors.
Automatic storage objects are destroyed automatically at the end of their scope, whereas dynamic storage objects created by new must be destroyed manually using delete.

Points:

Automatic: Destroyed at block exit.

Dynamic: Destroyed by explicit delete.

Destructor called automatically in both cases.

27. How do destructors differ from constructors?
While constructors are used to initialize objects, destructors are used to destroy them and free up resources. Constructors can be overloaded, destructors cannot.

Points:

Constructors can have parameters, destructors can't.

Destructor starts with ~.

Destructor has no return type, like constructor.

28. What is operator overloading in C++ and why is it useful?
Operator overloading allows you to redefine the behavior of operators for user-defined types (like classes). It makes code more readable and natural.

Points:

Makes objects behave like built-in types.

Improves code clarity and usability.

Implemented by overloading operator functions.

29. Describe the syntax for overloading an operator.
To overload an operator, you define a function using the keyword operator followed by the symbol you want to overload.

Syntax:
ReturnType operatorSymbol(Parameters) { /* code */ }
Points:

Return type can be a value or reference.

operator keyword must be used.

Can be a member or friend function.

30. Which operators can and cannot be overloaded in C++?
Most operators can be overloaded, but a few cannot be overloaded like :: (scope resolution), . (member access), .*, sizeof, and ?: (ternary).

Points:

Can overload +, -, *, /, ==, etc.

Cannot overload sizeof, typeid, . etc.

Overloading should preserve the original meaning if possible.

31. Provide an example of overloading the "+" operator for a custom class.
Operator overloading allows customizing the + operator for a class like adding two objects. Here’s an example:
class Complex {
    public:
        int real, imag;
        Complex(int r, int i) : real(r), imag(i) {}
        Complex operator+(const Complex& obj) {
            return Complex(real + obj.real, imag + obj.imag);
        }
    };
    Points:

    Syntax: ReturnType operator+(Parameters)
    
    Can also use friend function for operator overloading.
    
    32. Explain the concept of friend functions in the context of operator overloading.
    In operator overloading, friend functions allow external functions to access private data for performing operations, such as adding two different objects.
    
    Points:
    
    Defined outside the class.
    
    Declared using friend keyword inside the class.
    
    Used when operator needs access to both operands.
    
    33. What is a friend function in C++ and how is it declared?
    A friend function is a function that is not a member of the class but has access to its private and protected members. It is declared with the keyword friend inside the class.
    
    Example:
    class A {
        friend void display(A);
    };
    Points:
    Helps in operator overloading.
    
    Can access private data directly.
    
    Defined outside the class.
    
    34. How do friend functions differ from member functions?
    Friend functions are not bound to objects, while member functions are invoked with an object and have this pointer.
    
    Points:
    Friend functions are non-members.
    
    Cannot be called with an object like obj.func().
    
    Need explicit parameters for object data.
    
    35. Explain the benefits and potential drawbacks of using friend functions.
    Friend functions provide flexibility and can simplify code, but they break encapsulation by accessing private data directly.
    
    Points:
    Advantage: Easy external access to private members.
    
    Disadvantage: Reduces data hiding/security.
    
    Should be used carefully.
    
    36. What is inheritance in C++ and why is it important?
    Inheritance allows one class (child/derived) to acquire properties and behaviors from another (parent/base). It promotes code reusability and modularity.
    
    Points:
    Supports hierarchical classifications.
    
    Reduces redundancy.
    
    Enables polymorphism.
    
    37. Explain the different types of inheritance in C++.
    C++ supports five types of inheritance:
    Single, Multiple, Multilevel, Hierarchical, and Hybrid.
    
    Points:
    Single: One base, one derived.
    
    Multiple: Many bases, one derived.
    
    Multilevel: Chain of inheritance.
    
    38. How do you implement single inheritance in C++?
    In single inheritance, a derived class inherits from only one base class. It’s the simplest form.
    example:
    class A { };
class B : public A { };
Points:
Promotes simple relationships.

Syntax: class Derived : access Base {}.

39. What is multiple inheritance and how does it differ from single inheritance?
In multiple inheritance, a class inherits from multiple base classes. In single inheritance, it inherits from only one.

Example:
class A { };
class B { };
class C : public A, public B { };
Points:
Can lead to ambiguity problems (diamond problem).

Allows combining functionalities from different classes.

40. Describe hierarchical inheritance with an example.
In hierarchical inheritance, multiple classes inherit from a single base class. It’s like branches from a common root.

Example:
class A { };
class B : public A { };
class C : public A { };
Points:
One base, many derived.
Useful for creating categories/subcategories.

41. What is multilevel inheritance and how is it implemented in C++?
Multilevel inheritance occurs when a class is derived from another derived class, forming a chain of inheritance.

Example:
class A { };
class B : public A { };
class C : public B { };

A chain of inheritance.
Each class has its own specific functionality, derived from the previous class.

42. Explain the concept of hybrid inheritance.
Hybrid inheritance is a mix of different types of inheritance, such as multiple and multilevel inheritance, in a single program.

Example:
class A { };
class B { };
class C : public A { };
class D : public B, public C { };

Combines various inheritance models.
Can lead to complexity and ambiguity.

43. What are access modifiers in C++ and what are the different types?
Access modifiers control the visibility and accessibility of class members. The three main types are public, private, and protected.

Points:

Public: Members accessible from anywhere.

Private: Accessible only within the class.

Protected: Accessible within the class and derived classes.

44. How do public, private, and protected access modifiers affect inheritance?
Access modifiers impact member visibility during inheritance:

Public members are inherited as public.

Private members are not inherited.

Protected members are inherited as protected.

Points:

Public: Accessible in derived class and outside.

Private: Not accessible outside the base class.

Protected: Accessible in derived classes but not outside.

45. Explain how access modifiers control member accessibility in derived classes.
In derived classes, public and protected members of the base class retain their access specifiers, but private members are hidden.

Points:

Public: Inherited as public.

Protected: Inherited as protected.

Private: Not inherited.

46. What is function overriding in the context of inheritance?
Function overriding allows a derived class to provide a new definition of a function that is already defined in its base class.

Points:

Same function signature.

Provides specific behavior in the derived class.

Requires the base class function to be virtual.

47. How do you override a base class function in a derived class?
To override a function, define a function in the derived class with the same signature as in the base class and use the virtual keyword.

Example:
class Base {
    public:
        virtual void display() { cout << "Base class display"; }
    };
    
    class Derived : public Base {
    public:
        void display() override { cout << "Derived class display"; }
    };
    The virtual keyword allows for runtime polymorphism.

    The override keyword is used for clarity and error checking.
    
    48. Explain the use of the "virtual" keyword in function overriding.
    The virtual keyword ensures that the most derived class's function is called, even if the object is accessed through a base class pointer.
    
    Points:
    
    Enables dynamic binding.
    
    Ensures the correct method is called at runtime.
    
    49. What is the significance of the "override" specifier in C++11 and later?
    The override specifier confirms that a function is meant to override a base class function. It helps prevent errors, such as signature mismatches.
    
    Points:
    
    Prevents accidental overloads.
    
    Ensures that the function is overriding a base class function.
    
    50. What is a virtual base class in C++ and why is it used?
    A virtual base class is used to resolve ambiguity in multiple inheritance. It ensures that a class is only inherited once.
    
    Points:
    
    Used to avoid diamond problem.
    
    Prevents the base class from being inherited multiple times in the derived classes.
    
    51. How do you declare and implement a virtual base class?
    A virtual base class is declared using the virtual keyword in the inheritance list. It ensures that only one instance of the base class is inherited.
    
    Example:
    class A { };
class B : virtual public A { };
class C : virtual public A { };
class D : public B, public C { };

Declared as virtual in the derived class.

Ensures only one instance of the base class.

52. Explain the role of virtual base classes in resolving ambiguity in multiple inheritance.
In multiple inheritance, a virtual base class ensures only one copy of the base class is inherited, preventing ambiguity and issues like the diamond problem.

Points:

Used to avoid multiple inheritance of the same base class.

Resolves ambiguity where a class has multiple paths to a base class.

53. Provide an example of using a virtual base class to avoid the diamond problem in inheritance.
The diamond problem occurs when a class inherits from two classes that share a common base. Using virtual inheritance solves this issue.

Example:
class A { };
class B : virtual public A { };
class C : virtual public A { };
class D : public B, public C { }; // No ambiguity

Only one instance of A exists in D.

Virtual inheritance eliminates the diamond problem.





        
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
84. Create a class Base and implement hybrid inheritance with derived classes Derived1, Derived2, and Derived3.
85. Implement a class Library with private, protected, and public members and demonstrate their accessibility.
86. Create a class Account with private data members and public methods to access and modify them.
87. Implement function overriding with a base class Shape and derived class Circle.
88. Create a base class Employee and derived class Manager with overridden methods.
89. Implement a virtual base class Entity with derived classes Person and Organization.
90. Write a class Animal and implement a virtual base class to avoid the diamond problem in inheritance.
91. Implement a class Polynomial with member functions to add and multiply polynomials.
92.Create a class SparseMatrix with member functions for matrix addition and multiplication.
93. Write a class Time with member functions to add, subtract, and compare time values.
94. Implement a class BigNumber to handle arithmetic operations on large numbers.
95. Create a class FileCompressor with member functions to compress and decompress files.
96. Write a class Network with member functions to simulate network packet transmission.
97. Implement a class Cache with member functions to store and retrieve cached data.
98. Create a class Game with member functions to simulate a simple game with player actions and scoring.