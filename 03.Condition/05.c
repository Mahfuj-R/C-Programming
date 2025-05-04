#include <stdio.h>
#include<math.h>

int main() {
    int num,i;
    scanf("%d", &num);

    for(i=0;pow(2,i)<=num;i++)
{ 
    if(pow(2,i)== num)
    {
        printf("Yes");
        return 0;
    } 
}


printf("No");
    
    return 0;
}