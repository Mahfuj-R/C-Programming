#include <stdio.h>


int main() 
{
    double x,y;
    char ch;
    scanf("%lf %c %lf",&x,&ch,&y);
    if(ch=='+')
    {
       printf("Addition=%.lf",x+y);
    }
    else if(ch=='-')
    {
        printf("Substraction=%.lf",x-y);
    }
    else if(ch=='*')
    {
        printf("Multiplication=%.lf",x*y);
    }
    else if(ch=='/')
    {
        if(y==0)
        {
            printf("Division: Zero as divisor is not valid!");
        }
        else{
            printf("Division=%.lf",x/y);
        }
    }    
return 0;
}

/*#include <stdio.h>


int main() 
{
    double x,y;
    char ch;
    scanf("%lf %c %lf",&x,&ch,&y);
    if(ch=='+')
    {
        //double Addition = x+y ;
       // printf("Addition:%.lf",Addition);
       printf("Addition=%.lf",x+y);
    }
    else if(ch=='-')
    {
        double Substraction = x-y ;
        printf("Substraction:%.lf",Substraction);
    }
    else if(ch=='*')
    {
        double  Multiplication = x*y ;
        printf("Multiplication:%.lf",Multiplication);
    }
    else if(ch=='/')
    {
        if(y==0)
        {
            printf("Division: Zero as divisor is not valid!");
        }
        else{
            double Division=x/y;
            printf("Division:%lf",Division);
        }
    }    
return 0;
}
*/