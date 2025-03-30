#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int Guess = 0,Tries = 5;
    
    // Create random number
    time_t t;
    srand((unsigned) time(&t));
    int Sol = rand() % 21;
    
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 that you must guess.");   
        
    
    while((Guess!=Sol)&&(Tries>0)){
        
        printf("\nYou have %d tries left.\n",Tries);
        printf("Enter a guess: ");
        
        scanf("%d",&Guess);
        
        if ((Guess>20)||(Guess<0)){
            // Value outside bonds
            printf("Sorry, you entered a value outside the bounds");
            --Tries;
        } else if(Guess>Sol) {
            // Value higher
            printf("Sorry, your guess is higher than my number.\n");
            --Tries;
            // Value lower
        } else if(Guess<Sol){
            
             printf("Sorry, your guess is lower than my number.\n");
            --Tries;
            
            }else 
             printf("\nCONGRATULATIONS YOU SOLVE IT !!!!!!\n");   
                
        
        
    }
    
    if (Tries==0)
    printf("\nGAME OVER !!!\nThe number was %d.\n",Sol); 
    
    
	return 0;
}
