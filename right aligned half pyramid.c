// Prints out right aligned half Pyramid instead of left alignment.

#include<stdio.h>
int main(void)
{
    int high=0;
    while (!(high > 0 && high < 23))
    {
        printf("how high : ");
        scanf("%d", &high);
    }

    for (int i=1; i<= high; i++) // i represents height of pyramid
    {
        for(int j = high-i; j>0; j-- ) // j represents blocks in a row
        {
            printf(" ");
        }

        for(int k=0; k<i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
