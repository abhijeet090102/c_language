#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number:");
    scanf("%d",&ma);
    int a=1;
    int m =1;
    int sum= 1;
    for( int i=1; i<=ma-2; i++){
        sum = a+m;
        a=m;
        m=sum;
    }
    printf("The %d fibonacci is %d",ma,sum);
    return 0;
}