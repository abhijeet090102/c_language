#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int a = 1;
    int m = 1;
    int sum = 0;
    for(int i=1; i<=ma; i++){
        sum = a+m;
        printf("the %d fibonacci is %d\n",i,a);
        a=m;
        m=sum;
    }
    return 0;
}