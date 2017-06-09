#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please provide your name\n") ; 
    string name = GetString (); 
    printf("Please think of an integer between 1 and 10\n");
    int n = GetInt() ; 
   

    if (n >= 1 && n <=4)
        {
            printf ("You picked a small number, you're a loser, %s!\n", name) ; 
        }

   else if (n >= 5 && n <= 7)
        {
            printf ("You picked a medium sized number, nice try %s!\n", name); 
        }
    else if (n == 8 || n == 9)
        { 
            printf ("You picked a larger number, nice job %s!\n", name);
        }
    else if (n == 10)
        {
            printf ("You picked the largest number, I like the way you think %s!\n", name);
        }
    else 
        {
            printf ("Fuck you %s, you cheated!\n", name);
        }

}