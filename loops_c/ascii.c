#include<stdio.h>
int main(){
    //what is typecasting
    for(int i =65; i<=90; i++){
    char ch = (char)i;
    printf("%c ->",ch);
    printf("%d\n ",i);
    }
    // char ch = 'M';
    // printf("%c\n",ch);
    // int am = (int)ch;
    // printf("%d\n",am);
    return 0;
}