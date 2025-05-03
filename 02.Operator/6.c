#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);

    int bal_X = x ;

    printf("Multiplication :%d\n",x*=y);

    x= bal_X ;

    printf("Division :%d\n",x/=y);

    return 0;
}