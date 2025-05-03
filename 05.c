#include <stdio.h>

int main() {
    int n;

    printf("Enter Elements: ");
    scanf("%d", &n);

    int arr[n];
    int sum =0; 
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    


    for(int i= 0; i<n;i+=2)
    {
        sum +=arr[i];
    }
    printf("%d",sum);
    return 0;
}
