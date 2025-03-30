#include <stdio.h>

int main()
{
	enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    
    enum Company Var1 = XEROX;
    
    enum Company Var2 = GOOGLE;
    
    enum Company Var3 = EBAY;
    
    printf(" %d \n %d \n %d \n ",Var1,Var2,Var3);
    
	return 0;
}
