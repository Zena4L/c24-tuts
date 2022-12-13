#include <stdio.h>

/**
    Description - This is to practise various I/O
    - Using getc(stdin)
    - Using getchar() which is equivalent to getc(stdin)
    - Using putc()
    - Using putchar()
*/
int main()
{
    printf("Input first and Second intials\n");
    int firstIni = getc(stdin);
    int secondIni = getchar();
    printf("First initial : %c\n",firstIni);
    printf("Second initial : %c\n",secondIni);

    int ch = 65;
    printf("The Character that has the numeric value of 65 is:\n");
    putc(ch,stdout);

    putchar(65);
        putchar(10);
            putchar(66);
                putchar(10);
            putchar(10);
        putchar(65);

   

   

    return (0);
}