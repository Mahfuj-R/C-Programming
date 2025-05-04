#include<stdio.h>
int main()
{
  
    int x,N;
    scanf("%d%d",&x,&N);
    int number;

    for(int i=1;i<=N;i++)
    {
        scanf("%d",&number);
        if(number==x){
            printf("Right, Player-2 wins!");
            return 0;
        }else{
            printf("Wrong, %d Choice(s) Left!\n",N-i);
        }
    }

    printf("Player-1 wins!");

    
   
     
    return 0;
    
}