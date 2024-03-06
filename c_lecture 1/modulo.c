#include<stdio.h>
int main()
{
    // int a= 2; //a>b
    // int b = 6;
    // int r = a % b;
    // printf ("%d", r);
    float x;
    printf("enter decimal number :");
    scanf("%f", &x);
    int y = x;
    printf("%d\n", y);
    float z = x-y;
    printf(" your fractional part of number is :%f", z);
    return 0;
}