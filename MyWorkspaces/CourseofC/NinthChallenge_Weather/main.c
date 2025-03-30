#include <stdio.h>

int main()
{
	float  rainfall[5][12] = {
        {32.3,44.5,55.6,33.4,44.8,88.9,32.3,44.5,55.6,33.4,44.8,88.9},
        {55.6,33.4,44.8,88.9,55.6,33.4,44.8,88.9,32.3,44.5,55.6,100},
        {55.6,33.4,44.8,88.9,55.6,33.4,44.8,33.4,44.8,88.9,32.3,100},
        {32.3,44.5,55.6,33.4,44.8,88.9,32.3,44.5,55.6,33.4,44.8,88.9},
        {33.4,44.8,88.9,32.3,44.5,88.9,32.3,44.5,55.6,33.4,44.8,88.9},
        };
    float averageY = 0;
    float averageM[12] = {0};
    
    printf("YEAR     RAINFALL\n");
    
    for (int i=0;i<5;++i){
        
        averageY = 0;
        
        for (int j=0;j<12;++j){
        
        averageY +=  rainfall[i][j] ; 
        
        averageM[j] +=  rainfall[i][j];
        
        }
    
        averageY = averageY / 12;
        printf("%d    %f\n",2010+i,averageY);
        
        
        
    }
    
        printf("\nJan    Feb    Mar    Apr    May    Jun    Jul    Aug    Sep    Oct    Nov    Dec\n");
    
           for (int j=0;j<12;++j){
        
        averageM[j] = averageM[j]/5;
        
        printf("%.2f  ",averageM[j] );
        
        }
    
    
}
