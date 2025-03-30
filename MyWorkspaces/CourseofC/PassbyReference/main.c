#include <stdio.h>


void square(int *number){
    
    *number = (*number)*(*number); // The value of the var that the pointer is pointing changes
    
    
    }

int main()
{
    int a = 5;
    
    square(&a);
    
    
	printf("The number squared is %d\n",a);
	return 0;
}
