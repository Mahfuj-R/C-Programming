#include <stdio.h>

int main() 
{
    double a, b, choice;

    scanf("%lf %lf %lf", &a, &b, &choice);
    
    if (choice == 1) {
        printf("Addition=%.lf", a + b);
    } 
    else if (choice == 2) {
        printf("Subtraction=%.lf", a - b);
    } 
    else if (choice == 3) {
        printf("Multiplication=%.lf", a * b);
    } 
    else if (choice == 4) {
        if (b == 0) {
            printf("Quotient: Zero as divisor is not valid!");
        } else {
            int div=a/b;
            printf("Division: %d\n",div);
    
        /*else {
            int quotient = a/b;
            if(quotient<0)
            {
                quotient =-quotient;
                printf("Quotient:%d",quotient);
            }else{
                printf("Quotient:%d",quotient);
            }*/
            
        }
    } 
    else {
        printf("Invalid choice!");
    }

    return 0;
}
