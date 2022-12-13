//This is a function for processing variable arguements
#include <stdio.h>
#include <stdarg.h>

// double addDouble(int x,...);
//defination of addDouble
double addDouble(int x,...)
{
    va_list arglist;
    int i;
    double result = 0.0;

    printf("The number of arguement is : %d\n",x);
    va_start (arglist,x);
    for (i=0;i<x;i++)
        result += va_arg(arglist,double);
    va_end(arglist);

    return result;
}

int main()
{
    double d1=1.5,d2=2.5,d3=3.5,d4=4.5;
    printf("Given an arguement %2.1f\n",d1);
    printf("The result retuened by addDouble() is : %2.1f\n\n",addDouble(1,d1));
    printf("Given an arguement %2.1f and %2.1f\n",d1,d2);
    printf("The result retuened by addDouble() is : %2.1f\n\n",addDouble(2,d1,d2));
    printf("Given an arguement %2.1f ,%2.1f and %2.1f\n",d1,d2,d3);
    printf("The result retuened by addDouble() is : %2.1f\n\n",addDouble(3,d1,d2,d3));
    printf("Given an arguement %2.1f ,%2.1f,%2.1f and %2.1f\n",d1,d2,d3,d4);
    printf("The result retuened by addDouble() is : %2.1f\n\n",addDouble(4,d1,d2,d3,d4));

    return 0;
}
