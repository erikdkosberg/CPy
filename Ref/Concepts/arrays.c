#include <stdio.h>

// type [length] = { x, y, z}
int main(void) {
    /* One-Dimensional */
    
    // If the length is greater than amount of initialized values, sets unitialized to 0
    int numbers[4] = { 1, 2, 3 };
    
    // If index omitted, the length becomes the number of initialized values
    char *letters[] = { "a", "b", "c", "d" };
    
    /* Two-Dimensional */
    
    // [rows][columns]: columns must be explicitly stated, rows come from initialization list
    int two_dim[2][3] = {
        {1,2,3},
        {4,5,6} };
    
    // Get the length of an array
    int array_length1 = sizeof(numbers)/sizeof(numbers[0]) - 1;
    int array_length2 = sizeof(letters)/sizeof(letters[0]) - 1;
    
    // Example usage
    int     point1 = numbers[array_length1]; // 0 since its not initialized
    char    point2 = *letters[array_length2]; // "d"
    int     point3 = two_dim[0][0]; // 1
    
    char string_example[] = "This is how you store a string in an array:\n\n";
    
    printf("%s", string_example);
    
    printf("[1,2,3,0], last element: %d\n", point1);
    
    char point2_print = point2; // re-assign to char so we can print
    printf("[a,b,c,d], last element: %c\n", point2_print);
    
    printf("[[1,2,3],[4,5,6]], row 1 col 1: %d\n", point3);
    
    return 0;
}

