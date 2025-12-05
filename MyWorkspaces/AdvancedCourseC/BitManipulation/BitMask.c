#include <stdio.h>

int main(){

    int flags = 15; // 0000 1111
    int mask = 182; // 1011 0110
    int result = 0;

    result = flags | mask; // 1011 1111 = 191

    printf("\n Flags | mask are %d ",result); 

    result = flags & ~ mask; // 0000 1001 = 9

    printf("\n Flags & ~ mask are %d ",result); 

    result = flags ^ mask; // 1011 1001 = 185

    printf("\n Flags ^ mask are %d ",result); 
    
    return 0;
}