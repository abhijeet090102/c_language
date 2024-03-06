#include<stdio.h>
int factorial(int a  ){
    int fact =1;
    for(int i=2; i<=a; i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int am, int st){
    int ncr = factorial(am)/(factorial(st)*factorial(am-st));
    return ncr;
}
int main(){
    int am;
    printf("Enter am:");
    scanf("%d",&am);
    int st;
    printf("Enter st:");
    scanf("%d",&st);
    // int nfact= factorial(am); // n!
    // int rfact= factorial(st);  //r!
    // int nrfact= factorial(am-st); //n-r!
    //int ncr = factorial(am)/(factorial(st)*factorial(am-st));
    int ncr = combination(am,st);
    printf("%d",ncr);
    return 0;
}