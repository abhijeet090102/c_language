#include<stdio.h>
int factorial(int a){
    int fact =1;
    for(int i=2; i<=a; i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int am, int st){
    int npr = factorial(am)/factorial(am-st);
    return npr;
}
int main(){
    int am;
    printf("Enter am:");
    scanf("%d",&am);
    int st;
    printf("Enter st:");
    scanf("%d",&st);
    int cpc = combination(am,st);
    printf("%d",cpc);
    return 0;
}