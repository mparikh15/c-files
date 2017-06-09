// CBAG pg 55
#include <stdio.h> 
#include <string.h> 

int main(void)

{

    char Kid1[12];
    char Kid2[] = "Maddie" ; 
        // 7 characters, 6 and the null zero
    char Kid3[7] = "Andrew" ; 
        //Will also be 7 characters, as defined. 
    char Hero1[] = "Batman" ; 
        // Will be 7 characters with the null zero
    char Hero2[34] = "Superman" ; 
        //Leaving some extra room for both Hero 2 and 3
    char Hero3[25] ;
    
            Kid1[0] = 'K' ; //unfortunately CBAG wants me to test this out line by line to show it works...ugh
            Kid1[1] = 'A';
            Kid1[2] = 'T';
            Kid1[3] = 'I';
            Kid1[4] = 'E'; 
            Kid1[5] = '\0'; // Null zero
            
    strcpy(Hero3, "The Iron Man mark 2");
    
    printf("%s\'s favorite super hero is %s. \n", Kid1, Hero1);
    printf("%s\'s favorite super hero is %s. \n", Kid2, Hero2);
    printf("%s\'s favorite super hero is %s. \n", Kid3, Hero3); 
    
    return 0;
}
