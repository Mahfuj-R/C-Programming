#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int bal_X = x ;

    printf("X++:%d\n",x++);
    x= bal_X ;
    printf("++X:%d\n",++x);
    x= bal_X ;
    printf("X--:%d\n",x--);
    x= bal_X ;
    printf("--X:%d\n",--x);
    return 0;
}