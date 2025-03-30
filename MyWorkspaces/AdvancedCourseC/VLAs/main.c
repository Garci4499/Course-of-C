#include <stdio.h>

int main(void)
{
    size_t size;
    float sum = 0;
     printf("Enter array lenght\n");
    scanf("%zd",&size); // Input size of array
    float values[size]; // Create array of size "size"
    
    printf("Enter %zd elements: \n",size);
    
    
    
    for (int i=1; i<=size; ++i){
        
        scanf("%f",&values[i]);
        
        sum = sum + values[i];
        
        }
    
	printf("Sum is %f\n",sum);
	return 0;
}
