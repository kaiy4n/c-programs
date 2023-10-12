//PROGRAMMING EXERCISE 1-5

/* Hypothetically speaking,
on Mars a 100-pound person on Earth would weigh 38 pounds.
On Jupiter, the same person weight is 264 pounds.
Write a program that will input the weight of a person in pound
on Earth and displays the corresponding weight
when the man is on Mars and on Jupiter. */

#include <stdio.h>

int main(){

    float weightE, weightM, weightJ;

    printf("\nEnter your weight in pounds(lbs): ");
    scanf("%f", &weightE);

    weightM = weightE * 0.38;
    weightJ = weightE * 2.64;

    printf("\nWeight on Earth: %.2f lbs", weightE);
    printf("\nWeight on Mars: %.2f lbs", weightM);
    printf("\nWeight on Jupiter: %.2f lbs", weightJ);
    printf("\n");

    return 0;

}
