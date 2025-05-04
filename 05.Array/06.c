#include <stdio.h>

int main() {
    int n;

    printf("Enter Elements: ");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int arr3[n];
    
    for(int i= 0; i<n;i++)
    {
        arr3[i]= arr1[i] + arr2[i];
        printf("%d ",arr3[i]);
    }

    

    return 0;
}
