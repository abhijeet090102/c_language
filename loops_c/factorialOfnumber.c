#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int factor = 1;
    for(int i=1; i<=ma; i++){
        factor = factor*i;
        printf(" the factor of %d is :%d\n", i,factor);
    }
    return 0;
}