#include <stdio.h>

int main(){

    int i = 1; /* 00000 x 31 ... 1 total of 32 bits */

    int w1 = 3; // 0000 0000 0000 0000 0000 0000 0000 0011
    int w2 = 138; // 0000 0000 0000 0000 0000 0000 1000 1010
    unsigned int w3 = 4151832098; // 1111 0111 0111 0111 1110 1110 0010 0010
    signed int w4 = 138; // 0000 0000 0000 0000 0000 0000 1000 1010
    int result = 0;

    // Left shifting
    result = w1 << 1; // left shift 1 place
    
    printf("%d \n" , result); // 0000 0000 0000 0000 0000 0000 0000 0110 so 6
    
    result = w2 << 2; // left shift 2 place

    printf("%d \n" , result); // 0000 0000 0000 0000 0000 0010 0010 1000 = 552

    // Rigth shifting
    result = w3 >> 1; // right shift 1 place

    printf("%d \n" , result); // 0111 1011 1011 1011 1111 0111 0001 0001 = 2075916049

    result = w4 >> 2; // signed right shift 2 places

    printf("%d \n" , result); // 

    return 0;
}