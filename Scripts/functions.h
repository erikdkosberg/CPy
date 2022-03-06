#ifndef functions_h
#define functions_h

// Macros
// replaces all text with the specified value, ignoring scope and type
#define macro_value 1

void header_function(void) {
    printf("This comes from the header: %d\n", macro_value);
}

#endif /* functions_h */
