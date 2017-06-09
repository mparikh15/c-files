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
        printf("Please provide one word for a cipher key\n") ; 
        return 1 ; 
    }
    
    
    string key = argv[1] ; 
    
    for(int i = 0, n = strlen(argv[1]); i < n; i++)  // check if all the pieces of the cipher are alphabet pieces
    { 
        if (isalpha(argv[1][i]) == 0)
        {
            printf("No numbers allowed in the passphrase, sorry!\n") ; 
            return 1 ; 
        }
        
    } 
        
        printf("plaintext:") ; 
        string plain = get_string() ; 
        printf ("ciphertext:") ; 
        int a = 0 ; // have to declare use counter outside of iteration
        
        for(int i = 0, n = strlen(plain); i < n; i++) 
        { 
            if (isalpha(plain[i]) != 0 ) // Need to check if character first. All non-letters should be excluded. 
            { 
                
                int m = a % strlen(argv[1]) ; // uses modulus to calculate m, which is the placeholder for the correct variable
                int num ; 
                
                if (isupper(key[m]) == 0) 
                {    
                    num = key[m] - 97 ; // lowercase adjustment to numeric
                } 
                if (isupper(key[m]) != 0)
                {
                    num = key[m] - 65 ; // uppercase adjustment to numeric
                } 
                
                if (isupper(plain[i]) == 0)  // handles the lowercase
                {
                     int output = ((plain[i] - 97 + num ) % 26) + 97 ; 
                     printf ("%c", output) ; 
                
                } 
                
                else // handles the uppercase
                { 
                    
                    int output = ((plain[i] - 65 + num ) % 26) + 65 ; 
                    printf ("%c", output) ; 
                    
                }
                
                a++ ; // adds one to the counter only if the adjusted part of the string is a letter 
            } 
            
            
            else 
            {
                printf("%c", plain[i]) ;  // prints character as is if it isn't a letter 
            }
        }    
    
    printf("\n") ; 
    return 0; 

} 