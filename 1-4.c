//PROGRAMMING EXERCISE 1-4

/* A supermarket sells bags of mixed candies.
Four types of candies are offered.
Candy a costs Php. 35.00/kg; Candy B cost Php. 45.00/ kg;
candy C cost Php. 56.00/kg and Candy D cost Php. 57.50 kg.
Write a program that will calculate and
print the amount of bag of candies
in terms of the weight of each type of candy as
provided by the program user.*/

#include <stdio.h>

int main(){

    float priceA = 35.00;
    float priceB = 45.00;
    float priceC = 56.00;
    float priceD = 57.50;
    float weightA, weightB, weightC, weightD;
    float total;

    printf("\n[SOUR SOUL CANDIES]");
    printf("\nCandy A: %.2f/kg", priceA);
    printf("\nCandy B: %.2f/kg", priceB);
    printf("\nCandy C: %.2f/kg", priceC);
    printf("\nCandy D: %.2f/kg", priceD);
    printf("\n");

    printf("\nHow many kilo/s do you want to buy?\n");
    printf("Candy A: ");
    scanf("%f", &weightA);
    printf("Candy B: ");
    scanf("%f", &weightB);
    printf("Candy C: ");
    scanf("%f", &weightC);
    printf("Candy D: ");
    scanf("%f", &weightD);

    total = weightA*priceA + weightB*priceB + weightC*priceC + weightD*priceD;

    printf("\n[ITEMS CHECK-OUT SUMMARY]");
    printf("\nCandy A: %.2f kg", weightA);
    printf("\nCandy B: %.2f kg", weightB);
    printf("\nCandy C: %.2f kg", weightC);
    printf("\nCandy D: %.2f kg", weightD);
    printf("\nTOTAL: Php %.2f", total);
    printf("\n");

    return 0;

}
