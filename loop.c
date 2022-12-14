#include <stdio.h>

int main(void)
{
    int c;
    c = ' ';
    printf("Please enter a character of (enter X to exit)\n");

    while (c != 'x'){
        c = getchar();
        putchar(c);
    }
    printf(" You enetered X ..bye bye\n");

    return (0);
}