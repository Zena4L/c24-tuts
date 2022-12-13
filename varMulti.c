#include <stdio.h>
#include <stdarg.h>

// int multi(int x,...)
// {
//     va_list arglist;
//     int i;
//     double result = 0.0;

//     printf("The number of arguement is : %d\n",x);
//     va_start (arglist,x);
//     for (i=0;i<x;i++)
//         result += va_arg(arglist,int);
//     va_end(arglist);

//     return result;
// }


int multi(int x,...)
{
    va_list arglist;
    int i;
    int result = 0;

    printf("The number of arguement is : %d\n",x);

    for(i=0;i<x;i++)
        result = result * va_arg(arglist,int);
    va_end(arglist);
    return result;
}


int main()
{
    int d1=2,d2=4,d3=5,d4=6;
    
    printf("Given an arguement %d\n",d1);
    printf("The result retuened by multi() is : %d\n\n",multi(1,d1));
    printf("Given an arguement %d and %d\n",d1,d2);
    printf("The result retuened by multi() is : %d\n\n",multi(2,d1,d2));
    printf("Given an arguement %d ,%d and %d\n",d1,d2,d3);
    printf("The result retuened by multi() is : %d\n\n",multi(3,d1,d2,d3));
    printf("Given an arguement %d ,%d,%d and %d\n",d1,d2,d3,d4);
    printf("The result retuened by multi() is : %d\n\n",multi(4,d1,d2,d3,d4));

    return 0;
}
