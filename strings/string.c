#include<stdio.h>
#include<string.h>
int main(){
    char am[40];
    // scanf("%[^\n]s",am); // only the first word will be considered
    //gets(am); // entire sentence can be input 
    printf("Your input was :%s",am);
    // puts(am);
    // puts("Hello Everyone");
    return 0;
}