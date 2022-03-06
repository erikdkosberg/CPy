#include <stdio.h>

/*
 
 What is a pointer?
 
 A pointer is a value which represents the location in memory of a variable.
 
 Pointers can reference any data type, even functions.
 
 Four important things to know about pointers:
 
    1. How to declare them
 
    2. How to assign them
 
    3. How to reference them
 
    4. How they refer to arrays*
 
 
 Example Constructs:
 
 int i;         // integer variable 'i'
 int *p;        // pointer 'p' to an integer
 int a[];       // array 'a' of integers
 int f();       // function 'f' with return value of type integer
 int **pp;      // pointer 'pp' to a pointer to an integer
 int (*pa)[];   // pointer 'pa' to an array of integers
 int (*pf)();   // pointer 'pf' to a function with return value int
 int *ap[];     // array 'ap' of pointers to an integer
 int *fp();     // function 'fp' which returns a pointer to an int
 int ***ppp;    // pointer 'ppp' to a pointer to a pointer to an int
 int (**ppa)[]; // pointer 'ppa' to a pointer to an array of ints
 int (**ppf)(); // pointer 'ppf' to a pointer to a func with return value
 int *(*pap)[]; // pointer 'pap' to an array of pointers to an int
 int *(*pfp)(); // pointer 'pfp' to function with return value of type int
 int **app[];   // array of pointers 'app' that point to pointers to int
 int (*apa[])[];// array of pointers 'apa' that point to array of ints
 int (*apf[])();// array of pointers 'apf' to functions with return type int
 int ***fpp();  // function 'fpp' which returns pointer to pointer to pointer to an int
 int (*fpa())[];// function 'fpa' with return value of pointer to an array of ints
 int (*fpf())();// function 'fpf' with return value of pointer to function which returns an int
 
 */

struct MyStruct {
    int     a;
    float   b;
};

/*
// Declaring
void declaring_pointers(void) {
    int     *c = 3;     // Declares a variable C which points to an int
    struct  Struct *d;  // D points to something which structure 'Struct'
    long    *e,f;       // E is a pointer to a long, F is just a long
    int     **g;         // G is a pointer to a pointer to an int
}
*/

// Assigning the address of a value to a pointer
void assigning_pointers(void) {
    int     some_int;
    int     *int_pointer;
    
    struct  MyStruct struct1;
    struct  MyStruct *struct_pointer;
    
    int_pointer = &some_int;
    struct_pointer = &struct1;
    
    printf("Pointing to int:    %p\n", int_pointer);
    printf("Pointing to struct: %p\n", struct_pointer);
    
}

/*
// Referencing
void referencing_pointers(void) {
    
}
*/

// Main point of entry
int main(void) {
    assigning_pointers();
    return 0;
}
