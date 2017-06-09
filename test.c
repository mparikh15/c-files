#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string test[] = { "Mayank", "Padmesh", "Parikh" } ; 

    for (int i = 0; i < 3; i++)
    {
        printf ("%c", test[i][0]) ; 
    }

} 