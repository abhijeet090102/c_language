#include<stdio.h>
int sum(int am){
    if(am==1 || am==0) return 1;
    int recans = am+sum(am-1);
    return recans;
}
int main(){
    int am;
    printf("Enter a number:");
    scanf("%d",&am);
    int sum_number = sum(am);
    printf("%d",sum_number);
    return 0;
}