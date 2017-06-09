#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string() ; 
    
    printf("%c", toupper (s[0])) ; // printing first character in string 
    
    for(int i = 0, n = strlen(s); i < n; i++)  // iterating over string

    {
        if(s[i] == 32)  // ASCII character for space in number
        {
            printf("%c", toupper (s[i+1])) ; // print character after the space
        }
    }

    printf("\n") ; 
} 