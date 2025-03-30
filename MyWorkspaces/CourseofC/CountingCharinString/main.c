#include <stdio.h>

int strLength(const char *string){
    
    int counter = 0;
    
    while(*string){
        
        counter++;
        string++;
        }
    
    return counter;
    
    }



int main()
{
    
    char pepe[100] = "";
    printf("Write a word: \n");
    scanf("%[^\n]s",pepe);
    
    
    const char *Ppepe = pepe;
    int length = 0;
    
    length =  strLength(Ppepe);
    
	printf("The length of \"%s\" is %d\n",pepe,length);
	return 0;
}
