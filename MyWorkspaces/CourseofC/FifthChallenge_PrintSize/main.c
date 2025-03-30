#include <stdio.h>

int main()
{
    int Integer=0;
    float Float=0;
    double Double=0;
    char Character='a';
    long Long =0;
    long long LongLong=0;
    long double LongDouble=0;
    
    
    
	printf("The integer size is %zd \n",sizeof(Integer));
    printf("The float size is %zd \n",sizeof(Float));
    printf("The Double size is %zd \n",sizeof(Double));
    printf("The Character size is %zd \n",sizeof(Character));
    printf("The Long size is %zd \n",sizeof(Long));
    printf("The Long Long size is %zd \n",sizeof(LongLong));
    printf("The Long Double size is %zd \n",sizeof(LongDouble));
	return 0;
}
