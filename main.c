#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    //Init
    int res = 0;

    //Hello world printing
    printf("Hello World! Hola mundo.\n");

    //Sum saved in variable res
    res = 5 + 3;
    //Print result at the console
    printf("The result is: %d\n", res);

    //Function
    justonefunction(void);

    return 0;
}
