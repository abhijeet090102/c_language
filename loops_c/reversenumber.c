#include<stdio.h>
int main(){
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    int a=0;
    while(m!=0){
          a=a*10;
          a=a+(m%10);
          m = m/10;
        }
    printf(" the reverse no is %d",a);
    return 0;
}