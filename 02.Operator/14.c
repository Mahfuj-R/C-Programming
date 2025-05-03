#include<stdio.h>
int main()
{
    float x ;
    scanf("%f",&x);

    int A = (int)x+1;
    int B = x;
    float C =x;

    printf("A=%d, B=%d, C=%.1f",A,B,C);
}