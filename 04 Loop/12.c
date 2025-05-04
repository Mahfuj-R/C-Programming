#include <stdio.h>

int main() {
    int n, first = 1, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        if (n >= 1) {
            printf("1");
        }
        if (n >= 2) {
            printf(", 1");
        }
        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf(", %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
    return 0;
}