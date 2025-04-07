#include <iostream>

int addNum(int num)
{
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;

    int final = addNum(num);
    std::cout << "Final sum: " << final << std::endl;

    return 0;
}

// int a,b,c,max;
//         cout << "Enter 3 numbers : ";
//         cin >> a >> b >> c;
//         max=a;
//          if(b>max)
//           {max=b;}
//          if(c>max)
//           {max=c;}

//           cout<<"The largest number is "<<max;
//           return 0;
// }

// Q2. Write a program to read 2 numbers from the keyboard and display the larger value on
//       the screen.
//     int a,b;
//     cout << "Enter 2 numbers:";
//     cin >> a >> b;
//     if(a<b){
//         cout << b <<" is larger.";
//     }
//     else if(a>b){
//         cout << a << " is larger.";
//     }
//     else
//     {
//         cout<< "Both are equal.";
//  }
// }
// Q1.To print "Maths = 90" , "Physics = 74" ,  "Chemistry =76" from one cout
//     cout << "Maths = 90 "<< endl <<"Physics = 74"<< endl << "Chemistry =76";
// }
// #include <cmath>

// Q3.(long method)
//   int a,b,c;
//   cout<< "enter 3 numbers  : ";
// cin>> a >> b >> c;
//   if(a>b && a>c){
//     cout<<a<<" is greatest number";
//   }
//    if(b>a && b>c){
//     cout<<b<<" is greatest number";
//       }else if (c>a && c>b){
//        cout<<c<<" is greatest number";
//       }if(a == b)
//             cout<<a<<" is equal to "<<b;
//         if(b == c)
//             cout<<"2nd and 3rd are equal. ";
//         if (c == a)
//             cout<<c<<" is equal to "<<a;

// (short method)
// Q3.Write that obtains the largest of 3 numbers.

//  Q4.checking if number is even or odd.
// int a;
// cout<<"Enter any number : ";
// cin>> a;

// if (a%2==0)
// cout<<"The number is even.";
// else
// cout<<"The number is odd.";

// int a;
// int w,min;
// int b = sizeof(a);
// long int max;

//  cout <<"Size of a is " << b<<" bytes"<<endl;
//  //converting bytes into bits
//  int bitSize = b*8;
//  cout<<"The bit size is "<< bitSize;
//  cout<<"\npress 1 for signed and 0 for unsigned : ";
// cin>>w;
// if(w==1)
// {
// min=pow(2,-1);

// cout <<"Minimum value is "<< min;
// }
// else if(w==0)
// {max=pow(2,32);
// cout <<"Maximum value is "<< max;}
// else
// cout<<"ENTER 0 OR 1 ONLY , NOT ANY OTHER NUMBER OR CHARACTER";

// using namespace std;

// int main() {
//     int choice;

//     cout << "Choose a data type:\n";
//     cout << "1. int\n2. float\n3. double\n4. char\n5. short\n6. long\n7. long long\n8. unsigned int\n";
//     cout << "Enter your choice (1-8): ";
//     cin >> choice;

//     if (choice == 1)
//     {
//      int min = -(pow(2, 31));
//      int max = (pow(2, 31) - 1);
//      cout << "Range of int: " << min << " to " << max << endl;
//     }

//     else if (choice == 2)
//        {  int min =  pow(2, -126);
//           int max = pow(2, -126);
//         cout << "Approximate range of float: " << min << " to " << max << endl;
//        }
//     else if (choice == 3)
//         cout << "Approximate range of double: " << pow(2, -1022) << " to " << pow(2, 1023) << endl;
//     else if (choice == 4)
//         cout << "Range of char: " << -(pow(2, 7)) << " to " << (pow(2, 7) - 1) << endl;
//     else if (choice == 5)
//         cout << "Range of short: " << -(pow(2, 15)) << " to " << (pow(2, 15) - 1) << endl;
//     else if (choice == 6)
//         cout << "Range of long: " << -(pow(2, 31)) << " to " << (pow(2, 31) - 1) << endl;
//     else if (choice == 7)
//         cout << "Range of long long: " << -(pow(2, 63)) << " to " << (pow(2, 63) - 1) << endl;
//     else if (choice == 8)
//         cout << "Range of unsigned int: 0 to " << (pow(2, 32) - 1) << endl;
//     else
//         cout << "Invalid choice! Please enter a number between 1 and 8.\n";

//     return 0;
// }
// Q5 . print number 1 to 10 using loop.
// int main(){
//     int num,even;
//     for(num=0;num<=10;num=num+2)
//     cout << num;
// }
// Q6 taking value from user for max and min value and show all even number between the range.(used goto)
// int main(){
//     int i,max,min;
//     cout << "Enter the minumum of range: ";
//     cin >> min;
//     cout <<"\nEnter the maximum of range: ";
//     cin >> max;
//      if(max<min)
//           goto bhiyao;
//     for(i=min;i<=max;i++)

//          {if (i%2==0)
//      cout<<i<<endl;
//      }
//      bhiyao:
//      cout << "kya kar rh hai bhai ";
//      }
// Q7 checking if number is prime.
// int main(){
//     int num,i,isprime=0;
//     cout<< "Enter any number :";
//     cin >> num;
//     for(i=2;i<=num/2;i++)
//     {
//         if(num%i==0)
//          {
//             cout<<"The number is not prime.";
//             isprime=1;
//             break;

//          }
//     }
//      if(isprime==0)
//     cout << "Number is prime.";
//     return 0;
// }
//
// int main(){
//     int i,j,num,isprime=0;
//      for(i=0;i<=10;i++)
//      {
//         for(j=i=2;i<=num/2;i++)
//          {
//             if(num%i==0)
//             {
//                 isprime=1;
//                 break;
//             }
//         }
//         if(isprime==0)
//          cout<< i;
//      }
// }
