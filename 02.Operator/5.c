#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int bal_X = x ;
    

    printf("Incremented Value :%d\n",x+=y);
    x= bal_X ;
    printf("Deccremented Value :%d\n",x-=y);

    return 0;
}