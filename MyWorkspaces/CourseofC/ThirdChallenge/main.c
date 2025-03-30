#include <stdio.h>

int main()
{

    double width, height, perimeter, area;
    
    printf("Introduce values of width and height: \n");
    scanf("%lf %lf",&width,&height);
    
    perimeter = 2*(height+width);
    area = width*height;
    
    printf("The value of the perimeter is %lf and the area is %lf",perimeter,area);

return 0;
}
