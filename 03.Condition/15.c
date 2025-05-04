#include<stdio.h>
int main()
{
    int x, n1,n2,n3;
    int flag =0;
    scanf("%d",&x);

    scanf("%d",&n1);

    if(flag==0)
    {
        if(n1==x)
    {
        printf("Right, Player-2 wins!\n");
        flag =1;
    }else{
        printf("Wrong, 2 Chance(s) Left!\n");
    }
    }

    scanf("%d",&n2);


    if(flag==0)
    {
        if(n2==x)
    {
        printf("Right, Player-2 wins!\n");
        flag =1;
    }else{
        printf("Wrong, 1 Chance(s) Left!\n");
    }
    }

    scanf("%d",&n3);



    if(flag==0)
    {
        if(n3==x)
    {
        printf("Right, Player-2 wins!\n");
        flag =1;
    }else{
        printf("Wrong, 0 Chance(s) Left!\n");
        printf("Right, Player-1 wins!\n");
    }
    }



}
/*
#include <stdio.h>

int main() {
    int X,n1,n2,n3;
    int flag = 0;
    scanf("%d", &X); 
    scanf("%d", &n1);
    
    if (n1 == X) {
        printf("Right, Player-2 wins!\n");
        flag = 1;
    } else {
        printf("Wrong, 2 Chance(s) Left!\n");
        scanf("%d", &n2);
        
        if (n2 == X) {
            printf("Right, Player2 wins!\n");
            flag = 1;
        } else {
            printf("Wrong, 1 Chance(s) Left!\n");
            scanf("%d", &n3);
            
            if (n3 == X) {
                printf("Right, Player-2 wins!\n");
                flag = 1;
            } else {
                printf("Wrong, 0 Chance(s) Left!\n");
            }
        }
    }
    if (flag == 0) {
        printf("Player-1 wins!\n");
    }
    return 0;
}

*/