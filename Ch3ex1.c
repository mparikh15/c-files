#include<stdio.h>
int main(void)

{ 
    float gift1, gift2, gift3, gift4, gift5; /* Variables being floated to hold for the time being */
    float total; /* sum variable */
    
// asks for gift amounts 
    printf("How much do you want to spend on your mother?");
        scanf(" %f", &gift1) ;
    printf("How much do you want to spend on your father?");
        scanf(" %f", &gift2) ;
    printf("How much do you want to spend on your sister?");
        scanf(" %f", &gift3) ;
    printf("How much do you want to spend on your brother?");
        scanf(" %f", &gift4) ;
    printf("How much do you want to spend on your girlfriend?"); 
        scanf(" %f", &gift5) ;
        
total = gift1+gift2+gift3+gift4+gift5; /* adds the earlier variables into the new variable */
    printf("\nThe total you will be spending on gifts is $%.2f\n", total) ; 
return 0 ; 
}