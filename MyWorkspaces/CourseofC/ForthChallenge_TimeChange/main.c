#include <stdio.h>

int main()
{
	double min=0,years=0,days=0;
    
    printf("Introduce number of minutes\n");
    scanf("%lf",&min);
    
    years = ((min/60)/24)/365;
    
    days = ((min/60)/24);
    
    printf("The number of years are %lf and days are %lf",years,days);
    
	return 0;
}
