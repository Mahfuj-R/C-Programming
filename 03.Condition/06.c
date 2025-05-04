#include <stdio.h>
#include<math.h>

int main() {
    int num,i;
    scanf("%d", &num);

    if(num ==0)
    {
        printf("Zero is not a valid input");
    }
    else if(num<0)
    {
        printf("Negative input is not valid ");
    }
    else if(num>0){
        for(i=0;pow(2,i)<=num;i++)
{ 
    if(pow(2,i)== num)
    {
        printf("Yes");
        return 0;
    }

    }
}else{
    printf("No");
}   
    return 0;
}