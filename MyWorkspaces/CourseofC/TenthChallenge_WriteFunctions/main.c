#include <stdio.h>

int gdc(int x, int y ){
    
    int divisor = 0;
    
    if(x>y){
        
        divisor = y;
        
        while((x % divisor != 0)||(y % divisor != 0)){
          
        --divisor;
  
        }
        
        
    }
        
    else{
        
        divisor = x;
        
        while((x % divisor != 0)||(y % divisor != 0)){
          
        --divisor;
        }
    
    
    }
    
    return divisor;
}
    
float absol(float x){
    
    float absValue = 0;
    
    if (x<0){
        absValue = -x;
    }else{
        absValue = x;
    }  
        return absValue;
    }


int main()
{
    int x;
    int y;
    
    int divisor;
    float absValue;
    
    printf("Introduce two numbers: ");
    scanf("%d %d",&x,&y);
    
    divisor = gdc(x, y );
    
    absValue = absol(x);
    
    printf("Divisor = %d, Abs of first number = %f",divisor,absValue);
    
    return 0;
}
