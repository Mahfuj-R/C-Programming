#include <stdio.h>

int main() {
    int n;

    printf("Enter Elements: ");
    scanf("%d", &n);

    int arr[n]; 
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sn ;
    printf("Searching Elements: ");
    scanf("%d", &sn);


    int first = 1; 

    for(int i = 0; i < n; i++) {
        if(arr[i] == sn) {
            if(first) {
                printf("FOUND at index position: %d", i);
                first = 0;
            } else {
                printf(", %d", i);
            }
        }
    }

    if(first) {
        // If 'first' is still 1, then nothing was found
        printf("NOT FOUND\n");
    } else {
        printf("\n");
        
    }

    return 0;
}
