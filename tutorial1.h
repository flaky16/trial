//
//  tutorial1.h
//  tutorial1
//
//  Created by Sema Kuru on 07/08/2018.
//  Copyright © 2018 Sema Kuru. All rights reserved.
//

#ifndef tutorial1_h  // If the name not defined - if defined, cannot use it
#define tutorial1_h  // Define it
#include <iostream>
#include <iomanip>
using namespace std;


void functionxx() {
    cout << "this is a function" << endl;
}

class Dog {
private:
    string name;
    int age = 0;
    float position[2] = {0,0};
public:
    Dog() : name("Dog") { cout << "Dog created" << endl; };     // Constructor
    Dog(const Dog& other): name(other.name) { cout << "Dog copied" << endl; };    // Copy constructor, can access other's name inside the class
    ~Dog() { cout << "Dog destroyed" << endl ; } ;                                      // other is the object being copied
    void walk(float xdisp, float ydisp) {
        position[0] = position[0] + xdisp;
        position[1] = position[1] + ydisp;
        //cout << "New dog position: " << setprecision(1) << scientific << position[0] << ", " << position[1] << endl;
    }
    void bark(){
        cout << "HAV HAV!!! My name is " << name << endl;
    }
    float *showposition() {
        cout << "The dog is at " << flush;
        float *pposition = position;
        return pposition;       //RETURNS THE POINTER OF FIRST ELEMENT OF ARRAY
    }
    void rename(string name){
        this ->name = name;
    }
    
};


//int main(){
//    std::cout << "Hello World!" << std::endl;
//}
#endif /* tutorial1_h */  // End of the if not defined

