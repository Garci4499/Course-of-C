#include <stdio.h>

int main()
{
    int numbHours;
    double grossPay =0,tax=0,netPay=0,payRate=12,overTime=1.5;
    
    printf("Introduce the number of hours worked in the week: \n");
    scanf("%d",&numbHours);
    
    // Compute gross pay
    
    if (numbHours>40){
        double exceedhour = numbHours-40;
        
        grossPay = (exceedhour)*payRate*overTime + (numbHours-exceedhour)*payRate;
        }
    else {
        grossPay = numbHours*payRate;
        }
    
    // Compute taxes
    
    if (grossPay<=300){
         tax = 0.15*grossPay;
        }
    else if (grossPay<=450) {
         tax = 0.20*(grossPay-300)+0.15*300;
        }
    else {
        tax  = 0.25*(grossPay-450)+0.15*300+0.2*150;
        }
    
    netPay = grossPay - tax;
    
    
	printf("Gross pay = %.2lf , Taxes = %.2lf  and Net pay = %.2lf  \n",grossPay,tax,netPay);
	return 0;
}
