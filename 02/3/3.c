#include <stdio.h>
int main()
{
    char ch;
    printf("Input a Lowercase letters:");
    ch=getchar()-32;
    printf("Captial letter is:");
    putchar(ch);
    putchar(getchar()-32);
    putchar('\n');
    return 0;
}