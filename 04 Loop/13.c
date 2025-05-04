#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1; 

    scanf("%d", &n);

    printf("%d! = ", n);

    for (i = n; i >= 1; --i) {
        factorial = factorial* i;
        printf("%d", i);
        if (i != 1) {
            printf(" x ");
        }
    }
    printf(" = %d\n", factorial);
   
    return 0;
}