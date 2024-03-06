#include<stdio.h>
int main(){
    // int st[4]= {1,2,3,4};
    // // printf("%p\n",&st[0]);
    // // printf("%p\n",&st[1]);
    // // printf("%p\n",&st[2]);
    // // printf("%p\n",&st[3]);
    // char am[4] = {'a','t','m','s'};
    // // printf("%c",am[2]);
    // printf("%p\n",&am[0]);
    // printf("%p\n",&am[1]);
    // printf("%p\n",&am[2]);
    // printf("%p\n",&am[3]);

    char am[] = {'H','e','l','l','o','\0'};
    // char st = '\0';
    // int a = 0;
    // char m = (char)a;
    // printf("%c",m);
    int i = 0;
    while( am[i]!='\0'){
        printf("%c ",am[i]);
        i++;
    }
    return 0;
}