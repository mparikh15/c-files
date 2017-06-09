#include <stdio.h>
#include <cs50.h>

int main(void)
{

int height;

    do 
        {
            printf("Give me a postive number: "); 
            height = GetInt();
        }
    while (height < 0 || height > 23);

    for (int row = 0; row < height; row++) 
        {
            for (int spaces = 1; spaces < height - row; spaces++)
            {
                printf(" ");
            }
            
            for (int hash = 0; hash < row + 2; hash++)
            {
                printf("#"); 
            }
            printf ( "\n"); 
        }
}