#include <stdio.h>

int main() {
    int n;

    printf("Enter Elements: ");
    scanf("%d", &n);

    float arr[n]; 
    float sum = 0 ;
    
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float Avarage = sum / n ;

    printf("%.2f\n", Avarage);
    
    return 0;
}