#include<stdio.h.>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c );

    int x = (a+b)<=80 && b >= 0 ? 1 : 0 ;
    int y = (a-b)== 0 || c!= 0 ? 1 : 0 ;
    int z =  a!=b||(b<a)&&c>0  ? 1 : 0 ;

    printf("1)%d\n",x);
    printf("2)%d\n",y);
    printf("3)%d\n",z);

    return 0;


}