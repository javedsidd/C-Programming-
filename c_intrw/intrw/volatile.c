
int y;
#include<stdio.h>
volatile int x;
int main()
{
    x = 0;
    if (x == 0) {
        printf("x = 0 \n");
    } else {                        /*else part will never be optimized because the variable is declared as volatile*/
        printf("x != 0 \n");
    }
}
