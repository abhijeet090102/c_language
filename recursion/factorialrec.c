#include<stdio.h>
int factorial(int am){
    if(am==1 || am==0) return 1; // base case 
    int recAns = am*factorial(am-1);
    return recAns;
}
int main(){
    int am;
    printf("Enter a number :");
    scanf("%d",&am);
    int fact = factorial(am);
    printf("%d", fact);
    return 0;
}