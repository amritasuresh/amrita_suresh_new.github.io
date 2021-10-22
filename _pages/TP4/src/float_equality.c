
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a = 0.1;
    double b = 0.2;
    double c = 0.3;

    printf("\n");
    if (a + b == c) {
        printf("0.1 + 0.2 == 0.3\n");
    } else {
        printf("0.1 + 0.2 != 0.3 ??\n");
    }
    printf("\n");
    printf("result of a + b:\t %.18f\n", a + b);
    printf("float c = 0.3;\t\t %.18f\n", c);
    
    return 0;
}