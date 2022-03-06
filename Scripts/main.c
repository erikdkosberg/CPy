/*
 To compile a program, navigate to the root directory and run the following in the terminal:
 
 gcc -o program main.c -Wall
 
 This uses the gcc compiler to compile main.c named as 'program' using the -o flag
 
 -Wall warns you about code that might be incorrect
 
 Alternatively, in xcode you can just hit command+r and view the output in the IDE
 
 */

#include <stdio.h> // needed for printf
#include "functions.h" // this is where we store other functions to reference in main

// Declare multiple variables in one line, only bar is assigned
int i, test, foo, bar = 2;

int prints_something(void) {
    return bar;
}

int nested_blocks(void) {
    int outer = 5;
    
    {
        int inner = 6;
        printf("%d", inner); // cant call this outside of the block
    
    }

    printf("%d", outer);
    return 0;
}


int main(int argc, const char * argv[]) {
    printf("[START]\tWelcome to the main program...\n\n"); // %s and %d are similar to Python for string formatting
        
    header_function();
    
    printf("This comes from the main: %d\n", prints_something()); // prints bar
    
    printf("\n[END]\t");
    return 0;
}
