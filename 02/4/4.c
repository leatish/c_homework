#include <stdio.h>
#define r 5.3
#define PI 3.14159
int main()
{
    float area,circumference;
    area=PI*r*r/2;
    circumference=PI*r;
    printf("Area=%.5f\n",area);
    printf("circumference=%.5f\n",circumference);
    return 0;  
}