#include <stdio.h>

void display_message(void) 
{
    int num = 0;
    printf("Enter a number:\n--> ");
    scanf("%d", &num);

    printf("Your number is: %d\n", num);
}
