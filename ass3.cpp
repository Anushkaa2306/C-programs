//54. Create a class Person with private attributes name, age, and public methods to set and get the values.
#include<iostream>
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
}