#include<stdio.h>
int main(){
    int am[4] = {1,2,3,4};
    printf("%p\n",&am[0]);
    printf("%p\n",&am[1]);
    printf("%p\n",&am[2]);
    printf("%p\n",&am[3]);
    return 0;
}