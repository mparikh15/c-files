#include <stdio.h>
#include <cs50.h>

int main(void)

    { 
        printf ("How long was your shower? : ") ; 
        int length = GetInt(); 
        int water = 12 * length; 
        printf ("Your shower was %i minutes long\n", water); 
    } 
    