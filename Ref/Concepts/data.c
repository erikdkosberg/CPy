#include <stdio.h>

int get_the_size_of_something(void) {
    // The four types used in standard C are:
    int number = 1;
    char letter = 'a';
    float best_guess = 1.0; // less precise than double, uses less space
    double real_number = 3.14159; // more precise than float, uses more space
    
    size_t size1 = sizeof(number);
    size_t size2 = sizeof(letter);
    size_t size3 = sizeof(best_guess);
    size_t size4 = sizeof(real_number);

    printf("Int: %zu\n", size1);
    printf("Char: %zu\n", size2); // when sizeof is applied to a char it always returns 1
    printf("Float: %zu\n", size3);
    printf("Double: %zu\n", size4);
    
    return 0;
    
}

// Modifiers
// unsigned means that number can never be negative
// long and short let you use more or less memory for a data type
// typically - short: 2 bytes, int: 4 bytes, long: 8 bytes
// short is not guaranteed to be smaller than int but long is always bigger than int
unsigned short int usi; /* fully qualified -- unsigned short int */
short si; /* short int */
unsigned long uli; /* unsigned long int */

// Constants





