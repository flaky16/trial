//
//  main.cpp
//  tutorial1
//
//  Created by Sema Kuru on 24/07/2018.
//  Copyright © 2018 Sema Kuru. All rights reserved.
//
//  Preprocessor processes # lines before

#include <iostream>
#include <iomanip>  //used to get fixed, scientific notation
#include "tutorial1.h"

using namespace std;

//void functionxx() ; //propotype of the func, the func itself is at the end
int myInteger(int integer) {
    cout << "The integer is: " << integer << endl ;
    return integer;
}

void changeNumber(int &number){  // Using reference variable at input changes the number outside of the function even not return
    number = 15;
}

int main(){
    // DATA TYPES
    
    double myvar = -8736488888888e200 ;
    
    cout << "Hello, World!" << flush ;
    
    int x = 5 ;
    while (x <= 7)  {
        cout << "x is " << x << endl ;
        x++ ;
    }
    
    cout << sizeof(long double) << endl;
    
    cout <<"print"<< myvar<< endl;
    
    cout <<"print" << setprecision(26) << scientific << myvar<< endl;
    
    bool btype = false ;
    cout << "the info isn't true " << btype << endl;
    
    char lambda = 103 ;
    cout << lambda << endl;
    
    wchar_t wchartype = 'i';
    cout << (int)wchartype << endl;
    
    wchar_t wchart = 55;
    cout << (char)wchart << endl;
    wchart = (char)wchart;
    cout << "enter letter lambda \u03BB" << endl;
    
    double number = 1.2;
    cout << setprecision(3) << number << endl;
    if(number == 1.2) {
        cout << "true " << endl ;
    }
    else {
        cout << "not true" << endl;
    }
    if(number == 1.2 || number < 1) {
        cout << "true true " << endl ;
    }
    else {
        cout << "not true" << endl;
    }
     
    /* logic:
     * && AND
     * || OR
    */
    
    // LOOPS
    
    int aa = 1;
    
    do {      //executes the lines between brakets once before checking the while cond.
        cout << "do while" << endl;
        aa++;
    }
        while(aa<5) ;
    
    int j = 0;
    for (int i = 0 ; i<5; i++) {
        j = 1+i;
        
        cout << "for loop" << i << j << endl;
        
        if (j == 3) {
            continue;
        }
            
        else if(j==4) {
                break;
        }
    }
    
    //ARRAYS
    cout << "INT ARRAYS " << endl << "+++++++++++" << endl ;
    
    int intArray[4];
    intArray[0] = 6;
    intArray[1] = 3;
    intArray[2] = 4;
    intArray[3] = 9;
    for(int k=0 ; k < 4 ; k++) {
        cout << intArray[k] << endl ;
    }
    
    cout << "STRING ARRAYS " << endl << "+++++++++++" << endl ;
    
    string stArray[] = {"A" , "B" , "C"};
  
    for(int k=0 ; k < 3 ; k++) {
        cout << stArray[k] << endl ;
        stArray[k] = "K";
        cout << stArray[k] << endl ;
    }
    
    cout << "ANIMALS " << endl << "+++++++++++" << endl ;
    
    string animalArray[2][3] = {
        {  "dog" , "cat" , "bird"   },
        { "lion" , "tiger" , "eagle" }
        
    };
    
    for(int k=0 ; k < 2 ; k++) {
        for(int l = 1 ; l < 3 ; l++) {
            cout << animalArray[k][l] << " " << flush ;
        }
        cout << endl;
    }
    // size of an array
    //sizes of rows in 2d array has to be the same obv like a matrix
    int sizeOfArray = sizeof(intArray) / sizeof(int);
    cout << "intArray " << intArray[3] << " size of intArray " << ": " << sizeOfArray << endl;
    
    int sizeOfArray2d = sizeof(animalArray) / sizeof(animalArray[0]);
    int rowSizeOfArray2d = sizeof(animalArray[1])/sizeof(string);
    cout << " animalArray " << animalArray[1][2] << " size of animalArray " << ": " << sizeOfArray2d << endl;
    cout << " animalArray " << animalArray[1][2] << " size of animalArray " << ": " << rowSizeOfArray2d << endl;
    
    // SWITCH-CASE - cannot use variables as case objects (const is ok), or strings
    
    int value;
    cout << "enter a menu option: " << flush;
    cin >> value;
    const int case1 = 1;
    
    do {
    switch(value) {
        case case1 :  // cannot put case1 as int
            cout << "Top up menu" << endl;
            break;
        case 2 :
            cout << "Change credit card" << endl;
            break;
        case 3 :
            cout << "Change pay as you go" << endl;
            break;
        default :
            cout << "Enter a menu option 1-3" << endl;
            cin >> value;
            
    }
        cout << "vslue is " << value << endl;
    }
    while(value != 1 && value != 2 && value != 3);
    
    
    /* FUNCTIONS -
     void : no return
     int : integer return
     DOES NOT RETURN ARRAYS WTFFF
     */
    
    functionxx();
    int integer;
    cin >> integer;
    myInteger(integer);

    cout << "DOG ------------" << endl;
    
    // Loop try
    
    int days = 1;
    while(days < 8){
        if (days > 5){
            cout << "Hating lyfe less now, its day " << days << endl;
            cout << "hI" <<endl;
        }
        else {
            cout << "Still hating lyfe... Day " << days << endl;
        }
        days++;
    }
    
    // DOG CLASS
    
    {
    Dog newDog;
    newDog.rename("Pepito");
    newDog.bark();
    newDog.walk(23, 12);
    float *pxx = newDog.showposition();
    float *pyy = newDog.showposition()+1;
    float xx = *pxx;
    float yy = *pyy;
    xx = xx + 0.6;
    yy = yy + 1;
    cout << xx << " " << yy << endl;
    }
    
    number = 665.3;
    cout << "this is the number " << setprecision(1) << number << endl;
    
    // Char Arrays
    char text[] = "hello";
    
    for( int i=0 ; i<6 ; i++){
        cout << text[i] << i << endl;
    }
    cout << text << endl;
    
    // Reference variable
    // useful to change variables inside functions without return
    
    int number1 = 8;
    int &number2 = number1;  // number2 represents number1, anything done to 2 also happens to 1
    
    number2 = 12;
    changeNumber(number2);  // Both 1 and 2 becomes 15
    
    cout << number1 << endl;
    
    // Const
    
    int val = 5;
    int * const pval = &val;  // Constant pointer to an int
    int const *pvalue = &val;   // Pointer to a constant int
    val = 6;
    cout << *pval << endl;
    cout << *pvalue << endl;
    // *pvalue = 7;  cannot change int from pointer
    // cout << *pvalue << endl;
    
    cout << "----------------" << endl;
    
    // New - delete operator
    // Allocating memory space to class object, object stays in memory unless deleted
   
    Dog *pdog = new Dog();
    pdog->rename("Collie");
    pdog->bark();
    pdog->~Dog();   // dont know if this enough to delete
    delete pdog;
    
    cout << "----------------" << endl;
    
    // Copy constructor
    Dog doggy1;           // Normal constructor
    Dog doggy2 = doggy1;  // Copy constructor is invoked here instead of the actual constructor, doggy1 is copied into 2
    doggy1.bark();
    doggy2.rename("COLLIE");
    doggy2.bark();

    return 0;
}



