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
double tri(double l,double b)
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
int Max(int a,int b,int c){
    int max=a;
    if(max<b){
        max=b;  }
    if(max<c)
    {  max=c; }
return max;
}
int main(){
    int x,y,z;
    cout << "Enter 3 number : ";
    cin >>x>>y>>z;
cout<<Max(x,y,z);

}*/