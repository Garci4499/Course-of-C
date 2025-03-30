#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char string[100] ;
    
    printf("Introduce a word: ");
    scanf("%s",string);
    
    int strLength = strlen(string);
    int count = 0;
    char aux = '\0';
    float strLengthHalf = strLength/2;
    
    printf("%d",strLength);
    
    while (strLength>strLengthHalf){
        
        aux = string[count];
        string[count] = string[strLength-1];
        string[strLength-1]  = aux;
        ++count;
        --strLength;
        }
    
    printf("The reverse word is: %s\n",string);
}
