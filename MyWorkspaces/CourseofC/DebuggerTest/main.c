#include <stdio.h>
#include <stddef.h>

int main()
{

    int variable = 5;
    int *pvariable = NULL;
    
    pvariable = &variable;
    
    printf("The address of the pointer is %p\n",(void*)&pvariable);
    printf("The value of the pointer is %p\n",pvariable);
    printf("The value of what the pointer is pointing is %d\n",*pvariable);
    
    
}
