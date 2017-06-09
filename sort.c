//holding file for sort algorithms

// Selection 

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