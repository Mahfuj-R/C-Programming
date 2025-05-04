#include <stdio.h>

int main() {
    int n;

    printf("Enter Elements: ");
    scanf("%d", &n);

    char arr[n]; 
    for(int i = 0; i < n; i++) {
        scanf("%c ", &arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
            count++;
        }
    }
    printf("Count: %d",count);
    return 0;
}
