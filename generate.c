/**
 * generate.c
 *
 * Generates pseudorandom numbers in [0,MAX), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// upper limit on range of integers that can be generated
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: checking the number of arguments, and showing use case if not correct
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // TODO: turning the input from a string into an int n 
    int n = atoi(argv[1]);

    // TODO: if else brance, using the optional s value into srand48 (converting from string to int first)
    if (argc == 3)
    {
        srand48((long) atoi(argv[2]));
    }
    else
    {
        srand48((long) time(NULL));
    }

    // TODO: Iterating over the print function. drand48 is a decimal, limit multiplies it to a fuller value and they use type casts to ensure that value is stored as an int. 
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
