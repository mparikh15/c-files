// CS 50 Problem Set 2 Caesar problem
// Mayank Parikh, 1-6-2017

#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])

{ 
    if (argc != 2) // check for the number of arguments 
    { 
        printf("Please provide an integer for a cipher key\n") ; 
        return 1 ; 
    }
    
    
    string key = argv[1] ; 
    
    for(int i = 0, n = strlen(argv[1]); i < n; i++)  // check if all the pieces of the cipher are alphabet pieces
    { 
        if (isalpha(argv[1][i]) == 0)
        {
            printf("You fuked up\n") ; 
            return 1 ; 
        }
        
    } 
        
        printf("plaintext:") ; 
        string plain = get_string() ; 
        printf ("ciphertext:") ; 
        
        
        for(int i = 0, n = strlen(plain); i < n; i++) 
        { 
            if (isalpha(plain[i]) != 0 ) // Need to check if character first. All non-letters should be excluded. 
            { 
                
                int m = i % strlen(argv[1]) ; // uses modulus to calculate m, which is the placeholder for the correct variable
                int num ; 
                
                if (isupper(key[m]) == 0)
                {    
                    num = key[m] - 97 ; // lowercase
                } 
                if (isupper(key[m]) != 0)
                {
                    num = key[m] - 65 ; // uppercase
                } 
                
                if (isupper(plain[i]) == 0)  // lowercase
                {
                     int output = ((plain[i] - 97 + num ) % 26) + 97 ; 
                     printf ("%c", output) ; 
                
                } 
                
                else // uppercase
                { 
                    
                    int output = ((plain[i] - 65 + num ) % 26) + 65 ; 
                    printf ("%c", output) ; 
                    
                }
                
                a++ ; 
            } 
            
            
            else 
            {
                printf("%c", plain[i]) ;  
            }
        }    
    
    printf("\n") ; 
    return 0; 

} 