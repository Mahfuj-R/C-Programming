#include<stdio.h.>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c );

    int x = (a+b) <= 80 ? 1 : 0 ;
    int y = !(a+c) ? 1 : 0 ;
    int z =  a!=0  ? 1 : 0 ;

    printf("a)%d\n",x);
    printf("b)%d\n",y);
    printf("c)%d\n",z);

    return 0;


}