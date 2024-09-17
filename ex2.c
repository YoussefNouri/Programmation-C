#include <stdio.h>
int main(void)
{
    char x;
    x = 107;
    printf("%d \t",x);
    printf("%o \n",x);
    puts("Encore un affichage \r");
    printf("%x ",x);
    printf("\n%c \n",x);
    printf(" %c est converti en %c", x, x - 32);
    return 0;
}