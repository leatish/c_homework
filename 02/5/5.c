#include <stdio.h>

int main()
{
    double volume;
    const double length=1.2;
    const double width=4.3;
    const double heighth=6.4;
    volume=length*width*heighth;
    printf("volume=%.3f\n",volume);
    return 0;
}