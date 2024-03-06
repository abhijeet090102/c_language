#include<stdio.h>
#include<string.h>
int main(){
    // char am[] = "Physics Wallah";
    // // char* st = am; // st is a shallow copy
    // // am[0] = 'R';
    // // printf("%s",st);
    // char am2[] = "Physics Wallah";
    // am2[0] = 'M';
    // printf("%p\n",am);
    // printf("%p",am2);
    char* st = "ABHIJEET KARMAKAR";
    char* am;
    am = st;
    am ="MBHIJEET KARMAKAR";
    printf("%s\n",am);
    printf("%s",st);
    return 0;
}