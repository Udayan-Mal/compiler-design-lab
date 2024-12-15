// Program 2 - C Program to check whether a lexeme is identifier

// or

// Write a C program to check whether a given lexeme is a valid identifier in the C programming language.



#include<stdio.h> 
#include<ctype.h>

void main()
{
    int flag = 1, i = 0;
    char str[80];
    
    printf("Enter a lexeme: "); 
    scanf("%s", str);
    
    // Check if the first character is valid
    if(isalpha(str[0]) || str[0] == '_')
    {
        // Check the rest of the string
        while(str[i] != '\0')
        {
            if(isalpha(str[i]) || isdigit(str[i]) || str[i] == '_')
            {
                i++;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    else
    {
        flag = 0;
    }

    if(flag == 1)
        printf("Identifier");
    else
        printf("Not identifier");
}
