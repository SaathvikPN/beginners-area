// Prints a wall of size specified by user
#include<stdio.h>

int main(void)
{
    int i, j;
    
    // Reprompting user until positive size provided
    do
    {
        printf("Note: only Positive Integers allowed ^_^\n");
        printf("Width in number of units : ");
        scanf("%d",&i);
        printf("Height in number of units : ");
        scanf("%d",&j);
    }
    while (i <= 0 || j <= 0);

    // Creating wall of specified size using Nested for loop
    for (int a = 0; a < j; a++)
    {
        for (int b = 0; b < i; b++)
        {
            printf("#");
        }
        printf("\n");
    }

}
