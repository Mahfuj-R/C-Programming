#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c );

    float z = ((b*b)-(4*a*c));
    
    float x = -b + (sqrt(z));
    float y = -b - (sqrt(z));

    float root1 = x/(2*a);
    float root2 = y/(2*a);


    z>0 ? printf("%.2f %.2f",root1,root2) : printf("Imaginary") ;

    //printf("%.2f %.2f",root1,root2);
    return 0;
    
}