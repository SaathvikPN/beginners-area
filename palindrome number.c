#include<stdio.h>
int ispalindrome(int n);

int main(void)
{
    int num;
    printf("Number: ");
    scanf("%d",&num);
    
    int n;
    n = ispalindrome(num); //To make switch statement look simple
    switch(n)
    {
        case 0:
            printf("Not a palindrome");
            break;
        
        case 1:
            printf("Yes. Palindrome");
            break;
    }
}

// Checking for Palindrome by reversing number and comparing with original number.
int ispalindrome(int num)
{
    int copy = num; //Saving copy of original number
    int reverse_num = 0;
    int remainder;
    while(num>0)
    {
        remainder = num % 10;
        reverse_num = reverse_num * 10 + remainder; //With every iteration remainder shifting 1 position left.
        num = num/10; // Number after cutting off last digit since strictly integer division.int/int = int
    }
    
    return (reverse_num == copy) ? 1 : 0 ; // Using ternary operator        
}
