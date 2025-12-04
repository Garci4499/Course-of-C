#include <stdio.h>

int main(){

    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0 ; 

    w3 = w1 & w2;

    /* 25 in binary is 0011001 and 77 is 1001101 so the result is 0001001 so 9*/

    printf("%d \n" , w3);

    w3 = ~ w1;
    
    /* With 2s complement of w1 (negative of number) is ~w1 + 1 so this prints -26 */
    
    printf("%d \n" , w3);
    
    return 0;
}