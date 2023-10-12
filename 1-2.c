//PROGRAMMING EXERCISE 1-2

/* Prepare a program that converts hours
to minutes only. A typical conversion
should write the message 3 hours is equal to 180 minutes */

#include <stdio.h>

int main(){

    int Hours, Minutes;

    printf("\nEnter number of hours: ");
    scanf("%d", &Hours);

    Minutes = Hours * 60;

    printf("\n%d hours is equal to %d minutes!\n", Hours, Minutes);

    return 0;

}
