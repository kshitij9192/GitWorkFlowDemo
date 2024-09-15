#include "stdio.h"

int main()
{
    printf("This is not a dummy executable anymore!");

    int a=0, b=0;
    scanf("Enter the first integer : %d", &a);
    scanf("Enter the second integer : %d", &b);

    printf("Result of adding two integers : %d", (a+b));

    return 0;
}