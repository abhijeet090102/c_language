#include<stdio.h>
int add(int am, int st){
    return am+st;
}
int main(){
    int a ;
    printf("Enter 1st number:");
    scanf("%d",&a);
    int m;
    printf("Enter 2nd number:");
    scanf("%d",&m);
    int sum = add(a,m) ;
    printf("%d",sum);
    return 0;
}