#include <stdio.h>
#include <math.h>

int main() {
    // Declaration of variables
    float P; // Principal amount
    float r; // Rate of interest
    float n; // Number of times interest is compounded per year
    float t; // Total number of years
    float A; // Amount after interest
    float CI; // Compound Interest

    // User input
    printf("Enter the principal amount: ");
    scanf("%f", &P);
    printf("Enter rate (as a percentage): ");
    scanf("%f", &r);
    printf("Enter number of times interest is compounded per year: ");
    scanf("%f", &n);
    printf("Enter total number of years: ");
    scanf("%f", &t);

    // Convert rate from percentage to decimal
    r = r / 100;

    // Calculate amount
    A = P * pow((1 + r / n), n * t);

    // Calculate compound interest
    CI = A - P;

    // Output results
    printf("The compound interest is: %.2f\n", CI);
    printf("The total amount after interest is: %.2f\n", A);

    return 0;
}
