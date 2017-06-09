#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("What is your name, please\n") ; 
    
    string s = get_string() ; 

    printf ("%c %c", s[0], s[6]) ;

} 