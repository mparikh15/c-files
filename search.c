// holding place for search algorithms

// linear

bool search(int value, int values[], int n)
{
    if (n < 0)
    {
        return false; 
    }
    
    for (int i = 0; i < n; i++)
    { 
        if (values[i] == value)
        {
            return true; 
        }
    }
    return false;
}


//binary

bool search(int value, int values[], int n)
{ 
        int left = 0 
        int right = n 
    
        // Divide in half, set marker 
       
        
        for (int left = 0 ; left < right ;   ) // maybe replace with do while
            
            int marker = floor ((left + right) / 2) ; 
            if (value[marker] == value)
                return true ; 
        
            else if values[marker] < value 
                //left = marker + 1 
                //Look in the larger half 
                for (int i = marker + 1; i < right, i++)
                    or search(value, values[], new n) // to do this, need to transfer the array into a hold and change n to reflect new lenght
            
            
           else if values[marker] > value 
                //right = marker - 1 
                //Look in the lower half 
                for (int i = left, right = marker - 1; i < right, i++)
                
                 
                 
                 
                  //  iterate array into new sub array ??
                  // call search after the if? 
                  
                for(int i = marker, int j = 0; i < n ; i++, j++)
                {    
                    values[j] = values[i] ; 
                }
        
    return false; 



// anohter wrong attempt

bool search(int value, int values[], int n)
{ 
    //if (n < 0)  
    //{
      //  return false; 
    //}
    
    int left = 0 ; 
    int right = n ; 
    int marker ;    
    int length ; 
 
        
    while (n > 0) 
    {
        marker = floor((left + right) / 2) ; 
        
        
        if (value == values[marker])
        { 
            return true ; 
        }     
        
        else if (value > values[marker])
        {
            int hold[n] ;
            for(int i = marker + 1, j = 0; i < right ; i++, j++)
            { 
              hold[j] = values[i]  ;
              length = j + 1 ; 
            }
            
            left = marker + 1 ; 
            search(value, hold, length) ;
        }
        
        else if (value < values[marker])
        {
            int hold[n] ; 
            for(int i = left, j = 0; i  < marker - 1  ; i++, j++)
            { 
                hold[j] = values[i] ; 
                length = j + 1 ; 
            } 
            
            right = marker - 1 ; 
            search(value, hold, length) ; 
        }    
    }
    
    return false ; 
} 


//correct answer


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