#include<stdio.h>
float square (float n); //declaring the square function

int main(void)
{
    float a;
    printf("Welcome to Square Calculator. (Precise upto 6 decimal places)\n");
    printf("Enter the number to be squared : ");
    scanf("%f",&a);
    
    printf("%f squared is [%.6f]\n", a, square(a));
}

//Defining Square Function
float square (float n)
{
    return n*n;
}

// End of the Program.
