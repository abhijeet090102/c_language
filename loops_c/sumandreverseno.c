#include<stdio.h>
int main(){
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    int a = 0;
    int am = m;
    while(m>0){
        a = a*10;
        a = a + (m%10);
        m = m/10;
    }  
    printf(" the sum of no and its reverse is %d",a);
    am = am + a;
    printf("\n%d",am);
    return 0;
}