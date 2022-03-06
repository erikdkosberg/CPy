#include <stdio.h>

/* argv lets you know how many possible arguments there are;
argc lets you access individual arguments by index */

int main(int argv, char *argc[]) {
    printf("The name of this executable is:       %s\n", argc[0]);
    printf("The number of arguments passed:       %d\n", argv);
    return 0;
}
