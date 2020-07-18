#include<stdio.h>

int main(void)
{
    int x;
    printf("Enter Positive Integer : ");
    scanf("%d", &x);
    
    // Reprompting in case of Negative Number
    while(x<0)
    {
        printf("Enter Positive Integer : ");
        scanf("%d", &x);
    }
    
    //Storing individual digits into an array
    int arr[6];
    int length = 0;
    for (int i = 0; x!=0; i++ )
        {
            arr[i] = x % 10;
            x = x/10;
            length++;
        }
    
    // Adding all individual digits previously stored in array    
    int sum = 0;
    for(int i = 0; i<length; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of digits : %d (excluding decimal places)\n",sum);
}
