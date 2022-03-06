#include <stdio.h>

struct Human {
    const char* name; // Member "name".  Semicolon after the end of any member
    int age, height; // Just like variable, comma will create a lot of members of the same type
}; // Notice how we need to have a semicolon here

void print_human(struct Human* h) {
    printf("name = %s\nage = %d\nheight = %d\n",
        (*h).name, // dereference the pointer
        h->age, // use the arrow operator to do it automatically
        h->height );
}

int main() {
    struct Human maria = { "Maria", 19, 158 };
        
    struct Human john = { .age = 19, .name = "John", .height = 195 };
   
    //(void)john; // silence warnings about unused variables
    
    // Notice how we need to use the "struct" keyword to tell the compiler that we want to create a custom type that is a struct
    // The curly brackets will initialize the members in order to the given value. If you don't give a value to a member, it will
    // get the default value for its type. You could also change the order you initialize use dot syntax. Consider the following object
    // Use the "name" member from the "maria" Human object
    
    printf("Erik's name is: %s\n", maria.name);
    
    printf("john's height is: %d\n", john.height);
    
    print_human(&maria);
    
    return 0;
}
