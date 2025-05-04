#include<stdio.h>
int main()
{
  
    char key;


    for(int i=1;;i++)
    {
        scanf(" %c",&key);
        if(key=='A'){
            break;
        }
        printf("Input %d: %c\n",i,key);
    }
 
    return 0;
    
}