#include<stdio.h>
#define PI 3.14159

int main()
{
    double r;
    
    scanf("%lf",&r);
    printf("%.3lf\n", 2 * 3.14159 * r);
    printf("%.3lf", 3.14159 * r * r);
    
    return 0;
}