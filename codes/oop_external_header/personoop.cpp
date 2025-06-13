#include <iostream>
#include <string> 
#include <format>
#include "data.h"

using namespace std; 

class Person { 
    public: 
        string name; 
        int age; 

        Person(string n, int a)
        {
            name = n; 
            age = a; 
        }

        void introduce(){
            cout << format("Hello! My name is {} and I'm {} years old!\n", name, age); 
        }
}; 

int main(){ 

    Person p1(name, age);

    p1.introduce();
    return 0;
}