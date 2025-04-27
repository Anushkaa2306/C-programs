
/* 1. What is the purpose of the main function in a C++ program?
 The main() function acts as the starting point of a C++ program. Every C++ program must have a main() function where execution begins. It controls the overall flow of the program. Without main(), the program will not run.

 ~It is mandatory in C++.

 ~ It signals where the program starts executing.*/
 2. Explain the significance of the return type of the main function.
The main() function typically returns an int to the operating system. A return value of 0 usually means the program executed successfully, while a non-zero value indicates an error. This helps the system know if the program ran properly or not.

0 means success.

Non-zero means failure or error.

3. What are the two valid signatures of the main function in C++?
C++ allows two valid ways to declare the main() function. The first is a simple int main(), and the second includes command-line arguments using int main(int argc, char* argv[]). Both are used depending on whether arguments are passed or not.

int main()

int main(int argc, char* argv[])

4. What is function prototyping and why is it necessary in C++?
Function prototyping means declaring a function before using it, so that the compiler knows the function’s return type and parameters. It helps catch errors early by checking that functions are used correctly. Without it, the compiler might get confused.

Ensures proper function call checks.

Helps in better error detection.

5. How do you declare a function prototype for a function that returns an integer and takes two integer parameters?
In C++, a function prototype specifies the return type and parameter types. For a function that returns an integer and takes two integers, the prototype would look like this:

Example: int add(int a, int b);

Declares before actual function body.

6. What happens if a function is used before it is prototyped?
If a function is used before it is declared or prototyped, the compiler may throw an error. Even if it doesn’t, it might assume the wrong return type or parameters, leading to wrong program behavior or crashes.

Causes compilation error or wrong output.

Must declare before use.

7. What is the difference between a declaration and a definition of a function?
A declaration introduces the function name, return type, and parameters without body, while a definition provides the full code inside the function. Declaration is like announcing, and definition is like actually writing the code.

Declaration = telling about function.

Definition = writing full function.

8. How do you call a simple function that takes no parameters and returns void?
To call a simple void function, you just use the function’s name followed by parentheses. It executes the code inside the function without returning any value.

Example: greet();

No return value.

9. Explain the concept of "scope" in the context of functions.
Scope means where a function or a variable can be accessed. In C++, functions usually have a global scope unless nested inside another function. Proper scope management avoids variable name conflicts and improves program structure.

Global scope for normal functions.

Variables can have local or global scope.

10. What is call by reference in C++?
Call by reference means passing the actual address of variables to a function. Any changes made inside the function directly affect the original variables outside the function.

Real variables are modified.

Faster for large data types.

11. How does call by reference differ from call by value?
In call by value, only a copy is sent and changes don’t affect the original variable. In call by reference, the address is passed, and changes are reflected in the original variable.

Call by value = copy, no change.

Call by reference = original changes.

12. Provide an example of a function that uses call by reference to swap two integers.
To swap two integers using call by reference:

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
& symbol is used.

Swaps real values, not copies.

13. What is an inline function in C++?
An inline function is expanded at the place where it is called, rather than jumping to a separate location. It helps save the time spent on a function call, especially for very short functions.

Reduces function call overhead.

Best for small, frequently used functions.

14. How do inline functions improve performance?
Inline functions improve performance by inserting code directly at the function call site. This avoids the overhead of a function call and can make small programs faster.

Saves time.

Reduces code jumping.

15. Explain the syntax for declaring an inline function.
To declare an inline function, use the inline keyword before the function definition. It is usually written above the main function.

Syntax:
inline int square(int x) { return x * x; }
Small functions are ideal.

16. What are macros in C++ and how are they different from inline functions?
Macros are preprocessor commands that perform simple text replacement before compilation. Inline functions are better because they are type-checked and safer.

Macro: #define SQUARE(x) (x*x)

Inline: Type-checked functions.

17. Explain the advantages and disadvantages of using macros over inline functions.
Macros are faster to write but dangerous because they are not type-checked. Inline functions are a bit longer but much safer and reliable.

Macros: Fast but risky.

Inline functions: Safe and reliable.

18. Provide an example to illustrate the differences between macros and inline functions.
Macro Example:
#define SQUARE(x) (x*x)

Inline Example:
inline int square(int x) { return x * x; }
Macros can cause unexpected results.

Inline functions work properly.

19. What is function overloading in C++?
Function overloading means having multiple functions with the same name but different parameter lists. It allows better code readability and flexibility.

Same name, different parameters.

Enhances code clarity.

20. How does the compiler differentiate between overloaded functions?
The compiler uses the number of parameters and their types to identify which function to call. This is known as signature matching.

Number and type of arguments.

Known as function signature.

21. Provide an example of overloaded functions in C++.

int add(int a, int b) { return a + b; }
float add(float a, float b) { return a + b; }
Same name: add

Different parameter types.

22. What are default arguments in C++?
Default arguments allow a function to have preset values if some arguments are not provided during the call. It increases function flexibility.

Reduces number of function overloads.

Default values set during declaration.

23. How do you specify default arguments in a function declaration?
Default arguments are provided directly in the function declaration:


int sum(int a, int b = 5);
Defaults are assigned right to left.

Must be specified from the end.

24. What are the rules for using default arguments in functions?
You can only assign default values from rightmost parameters. You can’t skip a parameter in the middle.

Right to left only.

No skipping allowed.

25. Provide an example of a function with default arguments.

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!";
}
If no argument is passed, "Guest" is used.

Reduces the need for multiple functions.



//27. Create a program that takes two integers as command line arguments and prints their sum.
/*#include <iostream> 

#include <cstdlib> 

 

int main(int argc, char* argv[]) { 

    if (argc != 3) { 

        std::cout << "Usage: ./program <num1> <num2>" << std::endl; 

        return 1; 

    } 

 

    int num1 = std::atoi(argv[1]); 

    int num2 = std::atoi(argv[2]); 

    int sum = num1 + num2; 

 

    std::cout << "The sum is: " << sum << std::endl; 

    return 0; 

}
*/
//28. Write a function prototype for a function that calculates the factorial of a number.
/*#include<iostream>
using namespace std;

long fact(int num){
    if(num==1)
    return 1;
    else
    {
    return num*fact(num-1);
    
    }
}
    int main(){
        int a;
        cout<<"Enter the number: ";
        cin>> a;
        cout<<"factorial "<<fact(a);
    }
*/
//29. Implement a C++ program with a function prototype for a function that returns the maximum of three numbers.
/*#include<iostream>
using namespace std;
int getMax(int arr[]){
    int max=arr[0];
    for(int i=1;i<10;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
return max;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int output= getMax(arr);
    cout<<output;

}
*/
//30. Write a simple function that calculates the area of a circle.
/*#include<iostream>
#define pi 3.14
using namespace std;
float Area(float r){
    float area= pi *r*r;
    return area;
}
int main() {
    float x;
    cout<<"Enter the radius: ";
    cin>>x;
    float ar= Area(x);
cout << "Area of circle: " << ar << endl;
return 0; }*/

//32. Create a function that prints the elements of an array.
/*#include<iostream>
using namespace std;
int display(int arr[]);
int main(){
    int arr[]={7,28,90,4,5,6,7};
    
    cout<<"The array element ";
    for(int i:arr){
        cout<<i<<endl;
    }
    return 0;
}*/

//Q33. Write a function to swap two integers using call by reference.
/*#include<iostream>
using namespace std;
int swap(int &a,int &b){
     if(a>0 && b>0){
        b=a+b;
        a=b-a;
        b=b-a;

     }

}
int main(){
    int x,y;
    cout<<"Enter 2 number : ";
    cin>>x>>y;
   
    cout <<" Before a = "<< x <<" b= "<< y <<endl;
     int output = swap(x,y);
    cout<<" after a = "<<x <<" b= "<< y;
    return 0;
} */
//34. Implement a function that increments the value of an integer by 10 using call by reference.
/*#include<iostream>
using namespace std;
int addValue(int &a){
     a=a+10;
// return a;
}
int main(){
    int x;
   
    cout<< "Enter the value you want to increment by 10: ";
    cin >> x;
 addValue(x);

cout <<"After increment :"<<x;
return 0;
}*/

//35. Create a function that modifies the elements of an array using call by reference.
/*#include<iostream>
using namespace std;
int  modArr(int arr[],int size){
    for(int i=0;i<size;i++)
    
        arr[i]+=5;
    }

int main(){
    int arr[]={2,3,4,5 };
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before ";
    for(int i=0;i<size;i++){
        cout << arr[i]<<" "<<endl;
    }
    modArr(arr,size);
    cout<<"After ";
    for(int i=0;i<size;i++)
cout << arr[i]<<" "<<endl;

}*/

//36. Write an inline function that calculates the square of a number.
/*#include<iostream>
using namespace std;
inline int sqr(int a) {
    return a*a; }
    int main() {
        int x;
        cout<<"Enter the number: ";
        cin >> x;

        cout << "Square: " << sqr(x) << endl;
    return 0; }*/

  //  37. Create an inline function that returns the cube of a number.

  /*#include<iostream>
  using namespace std;
  inline int cube(int a) {
      return a*a*a; }
      int main() {
          int x;
          cout<<"Enter the number: ";
          cin >> x;
  
          cout << "Cube: " << cube(x) << endl;
      return 0; }*/


  //    38. Implement a program that uses an inline function to calculate the sum of two numbers.

/*#include<iostream>
  using namespace std;
  inline int sum(int a,int b) {
      return a+b; }
      int main() {
          int x;
          int y;
          cout<<"Enter the number: ";
          cin >> x;
          cout<<"Enter the number: ";
          cin >> y;
  
          cout << "Sum: " << sum(x,y) << endl;
      return 0; }*/

//39. Write a macro to calculate the square of a number and compare its performance with an inline function.
/*#include<iostream>
# define sqr(a) (a*a);
using namespace std;
int main(){
    int x;
    cout<<"enter the number: ";
    cin >> x;
    cout<< "square of number is: " << sqr(x);
}*/

//40. Implement a macro to find the maximum of two numbers and compare it with an inline function.
/*#include<iostream>
# define comp(a,b) (a>b?a:b);
using namespace std;
int main(){
    int x; 
    cout <<"Enter the 1st number: ";
    cin>>x;
    int y;
    cout<<"Enter the 2nd number:  ";
    cin>>y;
    cout<<"Largest Number is: " <<comp(x,y);

}*/

//41. Write overloaded functions to calculate the area of a circle, rectangle, and triangle.
/*#include <iostream>
using namespace std;

double circle(double a) {
return 3.14*a*a; }
int rect(int a, int b) {
    return a*b;
}
double tri(double l,double b,double c=0)
{return l*b*0.5;}
int main() {
    double x,y;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the number : ";
    cin>>y;
    cout << "Area of circle: " <<  circle(x) << endl;
 circle(x);
cout << "Area of rectangle: " << rect(x, y) << endl;
rect(x,y);
cout << "Area of Triangle: " << tri(x, y) << endl;
tri(x,y);
    return 0;
}*/

//42. Implement overloaded functions to find the maximum of two and three numbers.

/*#include<iostream>
using namespace std;
int max(int a,int b){
    return (a>b?a:b);
        
    }

int max(int a,int b ,int c){

    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
int main(){
    int x,y,z;
    cout <<"Enter 1st number :";
    cin>>x;
    cout <<"Enter 2nd number :";
    cin>>y;
    cout <<"Enter 3rd number :";
    cin>>z;
    cout<<"The maximum in 2 numbers are :"<<max(x,y)<<endl;
    cout << "The maximum in 3 numbers are :"<<max(x,y,z);
}*/

//43. Create overloaded functions to print different data types (int, float, string).
/*#include<iostream>
using namespace std;
int Int(int a){
    return a;
}

float Flt(float a){
    return a;
}

string Str(string a){
    return a;
}

int main(){
    string x="hello";
    cout <<"integer value :"<<Int(4)<<endl;
    cout <<"float value :"<<Flt(22.2)<<endl;
    cout<<"string value :"<<Str(x);
}*/

//44. Write a function with default arguments to calculate the compound interest.
/*#include<iostream>
#include<cmath>
using namespace std;
double ci(double pri,double rate=5.0 ,int time=3,int n=1){
    return pri  * pow(1+rate/(100*n),n*time);

}
int main(){
    double principal = 10000;
    cout << "Compound Interest: " << ci(principal) << endl;

}*/
//45. Implement a function with default arguments to print a greeting message (default name is "Guest").
// #include <iostream>
// using namespace std;
// void defArg(string name="gest"){
// cout<<"The default name is "<<name;
// }
// int main(){
// defArg();
// }
// 46. Create a function that calculates the power of a number with a default exponent of 2.
#include <iostream>
using namespace std;
int power(int base, int exponent = 2) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
int x;
cout<<"Enter the number you want the square of: ";
cin>>x;
    cout << "square of "<< x <<" is = "<< power(x) << endl;   
  
    return 0;
}

// 47. Write a program to demonstrate the concept of recursive functions.

// 48. Implement a program that uses an array of function pointers.
// 49. Create a program to demonstrate the use of function templates.
// 50. Write a program to illustrate the concept of function pointers and callback functions.