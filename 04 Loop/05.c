#include<stdio.h>
int main()
{
    /*
    #include <stdio.h>
    int main() {
    int x, y;
    scanf("%d%d",&x,&y);

    while (x!=y) {
        printf("%d, ",x*x);     
        if (x<y)
            x++;
        else
            x--;
    }
    printf("Reached!\n"); 
    return 0;
}
    */
    int x,y;
    scanf("%d %d",&x,&y);

    if(x<y)
    {
        for(int i=y;i>x;i--)
        {
            printf("%d ",i*i);
            
        }
    }
    else if(x>y)
    {
        for(int i=x;i>y;i--)
        {
            printf("%d ",i*i);
            
        }   
    }
    printf("Reached!");
    return 0;
}