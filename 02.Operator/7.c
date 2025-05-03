#include<stdio.h>
int main()
{
    int x ;
    float y ;

    scanf("%d",&x);
    scanf("%f",&y);

    int original_int = y;
    float original_float = x;

    printf("Assignment:%f assigned to an int produce %d\n",y ,original_int);
    printf("Assignment:%d assigned to an int produce %f \n",x ,original_float);

    //Type casting 
    float float_cast =(float)x;
    int int_cast=(int)y ;

    printf("Type Casting :(float) %d produces %f\n",x,float_cast);
    printf("Type Casting :(int) %f produces %d\n",y,int_cast);

    return 0;

}