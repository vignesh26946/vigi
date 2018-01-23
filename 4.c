#include <stdio.h>

int main()
{
    char y;
    
    /* Input a character from user */
    printf("Enter any character: ");
    scanf("%c", &y);
    

    if((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

    return 0;
}
