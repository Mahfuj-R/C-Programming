#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(90<=x||x>=100){
        printf("Grade: A");
    }
    else if(86<=x||x>=89){
        printf("Grade: B");
    }
    else if(82<=x||x>=85){
        printf("Grade: B+");
    }
    else if(78<=x||x>=81){
        printf("Grade: B");
    }
    else if(74<=x||x>=77){
        printf("Grade: B-");
    }
    else if(70<=x||x>=73){
        printf("Grade: C+");
    }
    else if(66<=x||x>=69){
        printf("Grade: C");
    }
    else if(62<=x||x>=65){
        printf("Grade: C-");
    }
    else if(58<=x||x>=61){
        printf("Grade: D+");
    }
    else if(55<=x||x>=57){
        printf("Grade: D");
    }
    else{
        printf("Grade: F");
    }
    return 0;
}