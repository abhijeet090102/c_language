#include<stdio.h>
int power(int am , int st){
    if(st==0) return 1 ;
    int recans = am*power(am,st-1);
    return recans;
}
int main(){
    int am;
    printf("Enter  base am:");
    scanf("%d",&am);
    int st;
    printf("Enter power st:");
    scanf("%d",&st);
    int power_am = power(am,st);
    printf("%d raised to the power %d is :%d",am,st,power_am);
    return 0;
}