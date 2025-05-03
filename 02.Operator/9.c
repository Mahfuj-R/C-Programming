#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c );

    int x = a-b/3+c*2-1 ;
    int y= a-(b/(3+c)*2)-1;
    int z= a-((b/3)+c*2)-1;

    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
}