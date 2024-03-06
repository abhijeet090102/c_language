#include<stdio.h>
int fact(int am){
    int factorial = 1;
    for(int i=1; i<=am; i++){
        factorial = factorial*i;
        printf("The factorial of %d is : %d\n",i,factorial);
    }
    return factorial;
}
int main(){
    int am;
    printf("Enter a number:");
    scanf("%d",&am);
    int first_fact = fact(am);
    return 0;
}