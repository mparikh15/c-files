#include <stdio.h>
#include <cs50.h>
#include <math.h> 

int main(void)

{ 
    float change; // Getting a float to take monetary value
    int counter = 0; 
    
    do 
        {
            printf("Howdy, how much change is owed?\n"); // Getting change
            change = GetFloat();
        }
    while (change <= 0);
    
    change = round (change * 100); // Turning change into cents owed, as an integer
    
    while (change >= 25) 
        {
            change = change - 25; 
            counter++; 
        } 
    
    while (change >= 10)
        { 
            change = change - 10;
            counter++; 
        } 
    
    while (change >= 5)
        {
            change = change - 5; 
            counter++; 
        }
    
    while (change >= 1)
        {
            change = change - 1; 
            counter++;
        }
    
printf ("%i\n", counter); // Returning value of total counters

}