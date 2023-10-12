//PROGRAMMING EXERCISE 1-3

/* Consider three numbers a, b, and c.
Write a program that will compute and display
their sum, difference, product, quotients (a/ b/ c) and
the sum of their squares. */

#include <stdio.h>

int main(){

    int a, b, c;
    int sum, difference, product, quotient, sumSquare;

    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    sum = a + b + c;
    difference = a - b - c;
    product = a * b * c;
    quotient = a / b / c;
    sumSquare = a * a + b * b + c * c;

    printf("\nSum: %d", sum);
    printf("\nDifference: %d", difference);
    printf("\nProduct: %d", product);
    printf("\nQuotient: %d", quotient);
    printf("\nSum of their squares: %d", sumSquare);
    printf("\n");

    return 0;

}
