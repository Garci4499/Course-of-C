#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct s {
    int size;
    int array[];
    
    };


int main(void)
{
    struct s *pepe = NULL;
    int size = 0;
    
    printf("Specify length of array\n");
    scanf("%d",&size);
    
    pepe = malloc(sizeof(struct s)+size*sizeof(int));
    
    pepe->size = size;
    	printf("The array is:\n");
        
    for(int i=0; i<size;++i){
    pepe->array[i] = i;
    printf("%d",pepe->array[i]);
    }
    
	return 0;
}
