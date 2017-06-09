/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <math.h> 
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if ( n < 0)
    { 
        return false ;  // returns false if n is negative
    }
    
    int left = 0 ;  
    int right = n - 1 ; 
    int marker = ((left + right) / 2 ) ;   // setting the marker 
    
    while( left <= right)  // condition for the end
    { 
        if (value == values[marker])
        {
            return true ; 
        }
        
        else if (value > values[marker])  // if the value is greater than the marker do this
        {
            left = marker + 1 ;   // Shift the left towards the middle 
            marker = ((left + right) / 2 ) ;
        }
        
        else if (value < values[marker]) // if the value is smaller than the marker, do this
        {
            right = marker - 1 ;  // shift the right towards the middle 
            marker = ((left + right) / 2 ) ;
            
        }
    
    }    
    return false ; 
} 



/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mindex = i ; 
        for (int j = i + 1; j < n; j++)
        { 
            if (values[j] < values[mindex]) 
            { 
            mindex = j ; 
            }    
        }
        
        int hold = values[i] ; 
        values[i] = values[mindex] ; 
        values[mindex] = hold ; 
    } 
    return;
}
