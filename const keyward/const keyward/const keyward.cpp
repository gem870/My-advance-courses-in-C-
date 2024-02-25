// const is a key-ward that do not allow reassignment of valuse to  already assigned value of a variable
#include <iostream>
using namespace std;



//const int i = 20;
////   i = 10;  // this will not work;

//const int* ptr_1 = &i;
////  ptr_1 = 10;  // will not work

//ptr_1++;  // this will work

//cout << endl;
//cout << ptr_1 << endl;
//cout << i;

//const_cast <int&>(i) = 9;
//
//int j;
//static_cast<const int&>(j) = 7; // this is wrong


//          -->   const with function 


//class Dog {
//private:
//    int age;
//    string name;
//
//public:
//    Dog() {                                 // my constructor
//        this->age = 3;
//        this->name = "Dummy";
//    }
//
//    void setAge(const int& a) {
//        age = a;
//    }
//
//    void print_dog_name() const {
//        cout << name << endl;
//    }
//};

class BigArray {
 mutable   int accessCounter;

public:
    int getNumber(int& index) const {
        accessCounter++;
        const_cast<BigArray*> (this)->accessCounter = 20;
    }
};



int main()
{
 /*   Dog d;
    d.print_dog_name();*/

 const   int e = 2.2;
}

