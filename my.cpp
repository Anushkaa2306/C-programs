// #include <iostream>
// using namespace std;

// int main(){
//     int i,num,ans1 ,ans2 ,ans3;
//     cout<< "I can read your mind!!! want proof OK.. "<<endl;
//     cout << "Think of any number in your mind between 1-9.."<<endl;

//     cout << "Is the greater than 5(press 0 for no 1 for yes )?";
//     cin >> ans1;
//      if(ans1 = 1)//1,2,3,4,5
//      cout <<endl << "Is it a even number(press 0 for no 1 for yes )?";
//      cin >> ans2;
     
//  return 0;
// }

//Today we are doing Reading your mind...... 
//Q. Write a C++ program to demonstrate the use of static_cast by converting an int to a double and vice versa.
/* #include <iostream>
using namespace std;
int main() {
    int iValue;
    double dValue;
cout << "Enter any interger value: ";
cin >> iValue;
cout << "Enter any decimal value:  ";
cin >> dValue;
    
    double convertD = static_cast<double>(iValue);
  cout << "Integer to Double: " << convertD << endl;

   
    int convertI = static_cast<int>(dValue);
    cout << "Double to Integer: " << convertI << endl;

    return 0;*/
    
  //  Q.Write a C++ program to demonstrate the use of dynamic_cast for safe downcasting in a polymorphic class hierarchy.

 // 26. Write a C++ program to print the numbers from 1 to 10 using a for loop.
 /*#include<iostream>
 using namespace std;

 int main(){
    for( int i=1;i<=10;i++)
    cout << i << endl;
 }*/

 //Q27.Write a C++ program to calculate the sum of the first 50 natural numbers using a while loop.
 /*#include<iostream>
 using namespace std;

 int main(){
    int i=0;
    while(i<50)
   { i++;
    cout<<i<<endl;
    sum=}
 }*/
 //28. Write a C++ program to print the multiplication table of a given number using a do-while loop.
 /*#include<iostream>
 using namespace std;

 int main(){
    int i=0,num;
 cout<< "Enter any number : ";
    cin >> num;
do{
    i++;
    cout<< num *i<<endl; 
}
while(i<10); 

 }*/

 //Q29. Write a C++ program to find the factorial of a given number using a for loop.
 /*#include<iostream>
 using namespace std;

 int main(){
    int i,num,fact=1;
    cout<<"Enter the number you want to get factorial of:  ";
    cin >> num;
    for(i=num;i>1;i--)
    { 
        fact=fact*i;
    }
    cout<<fact;
 }*/


//30. Write a C++ program to reverse a given number using a while loop.
// #include <iostream>
// using namespace std;

// int main(){
//     int no,rem,new_num=0;
//     cout<<"Enter the number : ";
//     cin>> no;
//     while(no>0)
//     {
//         rem=no%10;
//         no=no/10;
//         new_num=new_num*10+rem;
       
//     } cout<< new_num<<endl;
// }


//31. Write a C++ program to check if a given number is a prime number using a for loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int i,num,isprime=0;

// cout<<"Enter any number: ";
// cin >> num;
 
// for(i=2;i<num/2;i++)
//    if(num%2==0)
//         {
//            isprime=1;
//             cout << "number is not prime";
//             break;
//        }
//    cout<< "number is prime";
// }

//32. Write a C++ program to print the Fibonacci series up to a given number of terms using a for loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int i,range, fbSeries=0;
//     cout<<"Enter the limit : ";
//     cin>>range;
//     int first = 0, sec = 1;
//     cout<<first<<" "<<sec<<"  ";
//     for(i=0;i<range-2;i++)
//     {  
//        fbSeries= first + sec;
//        first  = sec;
//        sec = fbSeries;

//        cout<<fbSeries<<"\n";
//     }

// }

//33. Write a C++ program to count the number of digits in a given number using a while loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int num,i=0;
//     cout << "Enter the numbers :";
//     cin>>num;
//     while(i<(sizeof(num)-1))
//     {
//      cout<<i<<"\n";
//      i++;
//     }
// }

//34. Write a C++ program to print the sum of all even numbers between 1 and 100 using a for loop.
// #include<iostream>
// using namespace std;
// int main(){
// int i,even = 0;
//  for(i=0;i<=100;i++)
 
//    {if(i%2==0)
//     {   cout<<i<<endl;
        
//        even=+i; 
//     }

//  }cout<<even;
// }
