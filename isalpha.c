#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void) 

{

    char s = get_char() ; 
    
    if (isupper(s) != 0) 
    { 
        printf (" Uppercase\n") ; 
    } 
    
    else 
    {
        printf("lowercase\n") ; 
        
    }
    
    
} 