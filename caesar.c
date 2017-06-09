// CS 50 Problem Set 2 Caesar problem
// Mayank Parikh, 1-6-2017

#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])

{ 
    if (argc != 2)
    { 
        printf("Please provide an integer for a cipher key,") ; 
        return 1 ; 
    }
    
    else 
    { 
        printf("plaintext:") ; 
        string plain = get_string() ; 
        printf ("ciphertext:") ; 

        
        int key = atoi (argv[1]) ; 
        
        for(int i = 0 , n = strlen(plain); i < n; i++) 
        { 
            if (isalpha(plain[i]) != 0 ) // Need to check if character first. All non-letters should be excluded. 
            { 
                if (isupper(plain[i]) == 0)  // lowercase
                {
                     int output = ((plain[i] - 97 + key ) % 26) + 97 ; 
                     printf ("%c", output) ; 
                
                } 
                
                else // uppercase
                { 
                    
                    int output = ((plain[i] - 65 + key ) % 26) + 65 ; 
                    printf ("%c", output) ; 
                    
                } 
            } 
            
            
            else 
            {
                printf("%c", plain[i]) ; 
            }
        }    

        
        
    } 
    
    printf("\n") ; 
    return 0; 

} 