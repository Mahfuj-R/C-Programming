//surrrender 
#include <stdio.h>
int main() {
    int n, r;
    long long nFact = 1, rFact = 1, nrFact = 1, nCr;

    // Input values
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    // Ensure n >= r

    if (n < r) {
        printf("Invalid input! n should be greater than or equal to r.\n");
        return 0;
    }

    // Compute n!, r!, and (n-r)!
    for (int i = 1; i <= n; i++) {
        nFact *= i;
        if (i == r) rFact = nFact;      // Store r!
        if (i == (n - r)) nrFact = nFact; // Store (n-r)!
    }

    // Compute nCr = n! / (r! * (n-r)!)
    nCr = nFact / (rFact * nrFact);

    // Output result
    printf("%lld\n", nCr);

    return 0;
}

