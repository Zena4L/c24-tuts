#include <stdio.h>

int multTwo(int x,int y)
{ 
    int result = x * y;
    return result;
}

int main()
{
    int x,y;
    printf("Enter Two numbers to multiply : \n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("The result of %d * %d = %d\n",x,y,multTwo(x,y));

    return 0;
}
