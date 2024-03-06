#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number 'a'");
    scanf("%d", &a);
    int m;
    printf("Enter a number 'm'");
    scanf("%d", &m);
    int st;
    printf("Enter a number 'st'");
    scanf("%d", &st);
    int am;
    printf("Enter a number 'am'");
    scanf("%d", &am);
    if (a > m && a > st  && a>am)
    {
        printf("%d is greatest", a);
    }
    if (m > a && m > st && m>am)
    {
        printf("%d is greatest", m);
    }
    if (st > a && st > m && st>am)
    {
        printf("%d is greatest", st);
    }
    if (am > a && am > m && am>st)
    {
        printf("%d is greatest", am);
    }
    else
    {
        printf("no number is greatest");
    }
    return 0;
}