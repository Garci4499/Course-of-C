#include <stdio.h>

int main()
{
    int primes[100] = {2};
    int numbers[98] = {0};
    int primeCount = 1;
    // You can also use the boolean variable isPrime that changes instead of the break
    
    for (int i=0;i<98;++i){
         numbers[i]=i+3; // Store all numbers from 3 to 100 in array
         //printf("%d",numbers[i]);
         
         for (int j=0;j<primeCount;++j){ // Loop inside prime vector
         
             if (numbers[i] % primes[j]==0){
             break; // If divisible by primes before it is not prime
             } else if (j == primeCount-1 ){
               primes[j+1] =  numbers[i]; // If not divisible by primes before it is prime
               primeCount++; 
               //printf("\nPrime found\n");
             }
          
          
          
         }
         
         
    }
    
    for (int j=0;j<primeCount;++j)
    printf("%d, ",primes[j]);
    
	
	return 0;
}
