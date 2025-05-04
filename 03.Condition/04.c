#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    if((0<((x+y+z))<=180) && x>0 && y>0 && z>0 )
    {
        printf("Yes");
    }else{
        printf("No");
    }

    
    return 0;

}