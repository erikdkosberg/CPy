#include <stdio.h>

// Static variables allow values to only be updated through functions
// When the variable goes out of scope, its value is retained in memory
// When used with functions, that function can only be accessed from that file
static int j = 0;

// Extern is used when a file needs to access a variable in another file that it may not have #included directly
// Does not carve out memory for the variable, only provides necessary info for the compiler
extern int k;

// Volatile informs the compiler that the value of the variable may be changed by external entities other than the program itself.
volatile int l;

// Auto specifies a variable that is automatically created when in scope and destroyed when out of scope.
void auto_holder(void) {
    auto int m = 0;
    (void)m;
}

// Register is a hint to the compiler to attempt to optimize the storage of the given variable by storing it in a register of the
// computer's CPU when the program is run. Most optimizing compilers do this anyway, so use of this keyword is often unnecessary
void register_holder(void) {
    register int n = 0;
    (void)n;
}
