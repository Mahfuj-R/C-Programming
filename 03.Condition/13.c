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
        int Case ;
        scanf("%d", &Case);
        if (b == 0) {
            printf("Quotient: Zero as divisor is not valid!");
        } else {
            int div=a/b;
            int rem =(int)a % (int)b;
            if(Case==1)
            {
                printf("Quotient: %d\n",div);
            }else if(Case == 2)
            {
                printf("Remainder: %d\n",rem);
            }
            

        }
    } 
    else {
        printf("Invalid choice!");
    }

    return 0;
}
