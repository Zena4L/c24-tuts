#include <stdio.h>
#include <time.h>

void GetTimeNow(void);

int main()
{
    printf("Before the GetTimeNow() function is called\n");
    GetTimeNow();
    printf("After the GetTimeNow() funciton is called\n");
    return 0;
}
// GetTimeNow declaraton
void GetTimeNow(void)
{
    time_t now;
    printf("Within GetTimeNow() \n");
    time(&now);
    printf("The current date and time is: %s\n",asctime(localtime(&now)));
}