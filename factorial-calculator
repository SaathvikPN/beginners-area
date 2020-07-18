// C program to calculate the factorial of number
#include<stdio.h>
int factorial (int i);
int main(void)
{
    int n;
    printf("Enter number into Factorial Calculator :  ");
    scanf("%d",&n);

    //Reprompting User in case of Negative Numbers.
    while (n<0)
    {
        printf("Negative number Error. Factorials exist only for Positive Numbers.\n");
        printf("Please enter Non-negative number : ");
        scanf("%d",&n);
    };

    //Printing Result
    printf("Factorial of %d is [ %d ]\n", n, factorial(n));
}

// Factorial Calculating Function
int factorial (int i)
{
   if (i == 0) //Because 0! = 1
   {
       return 1;
   }

   return i * factorial(i-1);
}

//End of Program. From Saathvik with ❤
