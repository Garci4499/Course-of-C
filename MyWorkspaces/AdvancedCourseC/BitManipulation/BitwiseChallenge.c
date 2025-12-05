/* Read two integers from the user (i,j) and outputs ~i, ~j, i & j , i|j , i << 1 , j>> 1  output as binary string */



#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int n);

int main(){

    short int i = 0;
    short int j = 0;
    short int result = 0;

    long long BinaryResult = 0;

   /* Scan input */
   printf("Enter a integer: ");
   scanf("%hd", &i);
   printf("\n Enter another integer: ");
   scanf("%hd", &j);
    
   // 1s compliment 
   result = ~i;
   BinaryResult = convertDecimalToBinary(result);
   printf("\n The 1s compliment of %d is %lld: ",i, BinaryResult);
   result = ~j;
   BinaryResult = convertDecimalToBinary(result);
   printf("\n The 1s compliment of %d is %lld: ",j, BinaryResult);
   
   // & | 
   result = i & j;
   BinaryResult = convertDecimalToBinary(result);
   printf("\n %d & %d is %lld: ",i,j, BinaryResult);
   result = i | j;
   BinaryResult = convertDecimalToBinary(result);
   printf("\n %d | %d is %lld: ",i,j, BinaryResult);

   // << >>
   result = i << 1;
   BinaryResult = convertDecimalToBinary(result);
   printf("\n %d << 1 is %lld: ",i, BinaryResult);
   result = j >> 1;
   BinaryResult = convertDecimalToBinary(result);
   printf("\n %d >> 1 is %lld: ",j, BinaryResult);

    return 0;
}

long long convertDecimalToBinary(int n){
   long long binaryNumber = 0;
   int remainder, i=1;

   while(n != 0) {
     remainder = n%2;
     n = n / 2;
     binaryNumber += remainder * i;
     i = i * 10;
   }

   return binaryNumber;

}
