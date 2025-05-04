#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
for(int i=1;i<=N;i++)
{
    int A,HW,CT,MT,TF;
    scanf("%d %d %d %d %d",&A,&HW,&CT,&MT,&TF);
    int total=(A+HW+CT+MT+TF);
    //printf("Student %d : ",i);
    if(90<=total && total <=100){
        printf("Stuent %d:A\n",i);
    }
    else if(86<=total && total<=89)
    {
        printf("Stuent %d:A-\n",i);
    }
    else if(82<=total && total<=85)
    {
        printf("Stuent %d:B+\n",i);
    }
    else if(78<=total && total<=81)
    {
        printf("Stuent %d:B\n",i);
    }
    else if(74<=total && total<=77)
    {
        printf("Stuent %d:D\n",i);
    }
    else if(70<=total && total<=73)
    {
        printf("Stuent %d:C+\n",i);
    }
    else if(66<=total && total<=69)
    {
        printf("Stuent %d:C\n",i);
    }
    else if(62<=total && total<=65)
    {
        printf("Stuent %d:C-\n",i);
    }
    else if(58<=total && total<=61)
    {
        printf("Stuent %d:D+\n",i);
    }
    else if(55<=total && total<=57)
    {
        printf("Stuent %d:D\n",i);
    }
    else{
        printf("Stuent %d:F\n",i);
    }
    




}

return 0;

}

//istiaque code 
// #include <stdio.h>
// int main() {
//     int N;
//     float A,HW,CT,MT,TF,total;
//     scanf("%d", &N);
    
//     for (int i=1;i<=N;i++) {
//         scanf("%f%f%f%f%f",&A,&HW,&CT,&MT,&TF);
        
//         total = A+HW+CT+MT+TF;

//         printf("Student %d : ",i);
//         if (total >= 90) {
//         printf("A\n");
//         }
//         else if (total >= 86) {
//         printf("A-\n");
//         }
//         else if (total >= 82){ 
//         printf("B+\n");
//         }
//         else if (total >= 78){
//         printf("B\n");
//         }
//         else if (total >= 74){ 
//         printf("B-\n");
//         }
//         else if (total >= 70){
//         printf("C+\n");
//         }
//         else if (total >= 66){ 
//         printf("C\n");
//         }
//         else if (total >= 62){ 
//         printf("C-\n");
//         }
//         else if (total >= 58){ 
//         printf("D+\n");
//         }
//         else if (total >= 55){ 
//         printf("D\n");
//         }
//         else {
//             printf("F\n");
//         }
//     }
    
//     return 0;
// }