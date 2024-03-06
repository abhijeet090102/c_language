#include <stdio.h>
int main()
{
    int am[7] = {1, 2, 3, 4, 5, 6, 7};
    int st[7];
    for (int i = 0; i <= 6; i++)
    {
        st[i] = am[6 - i];
    }
    for (int i = 0; i <= 6; i++)
    {
        am[i] = st[i];
    }
    for (int j = 0; j <= 6; j++)
    {
        printf("%d ", am[j]);
    }
    return 0;
}