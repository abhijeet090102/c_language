#include<stdio.h>
int main(){
    int a;
    printf("Enter a number 'a'");
    scanf("%d", &a);
    int m;
    printf("Enter a number 'm'");
    scanf("%d", &m);
    int st;
    printf("Enter a number 'st'");
    scanf("%d", &st);
    if((a+m)>st && (a+st)>m && (st+m)>a){
        printf("Valid triangle");
    }
     else{
        printf("They can't perform triangle");
    }
    return 0;
}