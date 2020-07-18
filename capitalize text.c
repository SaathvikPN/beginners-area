// Capitalises all letters of input text
#include <stdio.h>
#include <string.h>
#include <ctype.h> // to use islower and toupper

#define Max_limit 30  //Upper limit for Maximum Characters to be read

int main(void)
{
    // See footnote at the end for reading string in C language
    
    char str[Max_limit]; 
    printf("Enter your text : ");
    scanf("%[^\n]%*c", str); 
    printf("Your text is: [%s] \n", str);


    //Capitalizing the letters
    printf("\nAfter Capitalizing your text: \n");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c ", toupper(str[i]));
    }
    printf("\n");
}

/*  
Footnote :
Here, [] is the scanset character. 
^\n tells to take input until newline doesn’t get encountered. 
Then, with this %*c, it reads newline character and 
here used * indicates that this newline character is discarded.
    */
