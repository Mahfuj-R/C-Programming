#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double number;
    double sum=0;

    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&number);
        sum+=number;

    }
    double Avarage = sum /n;
    printf("AVG of %d inputs:  %lf",n ,Avarage);

    return 0;
}