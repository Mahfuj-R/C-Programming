#include <stdio.h>

int main() {
    double x, y;


    scanf("%lf", &x);
    scanf("%lf", &y); 

    double Addition = x + y;
    double Subtraction = x - y; 
    double Multiplication = x * y;
    int quotient = (int)x / (int)y;
    int remainder = (int)x % (int)y;

    printf("Addition: %.2lf\n\n", Addition);
    printf("Subtraction: %.2lf\n\n", Subtraction);
    printf("Multiplication: %.2lf\n\n", Multiplication);
    printf("Quotient: %d\n\n", quotient);
    printf("Remainder: %d\n\n", remainder);

    return 0;
}
