#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf ("range of sized intiger is: %d to %d ", var1, var2);
    unsigned int var16 = 0;
    unsigned int var18 = UINT_MAX;
    printf ("range of unsigned integer is form : %u to %u\n", var16, var18);
    short int var6 = SHRT_MIN;
    short int var8 = SHRT_MAX;
    printf (" range of short signed int is : %d to %d\n", var6, var8 ); 
    short unsigned int var36 = 0;
    short unsigned int var32 = USHRT_MAX;
    printf ("range of short unsigned integer is : %u to %u\n", var36, var32);
    printf("%li\n", sizeof(unsigned));
    return 0;
}