#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printf("%d,",i*2-1);
    }
    return 0;
}