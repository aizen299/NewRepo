#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The maximum number is %d\n", a > b ? a : b);
    return 0;
}