#include<stdio.h>
int main(){
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    float a =100;
    for(int i=1; i<=m; i++){
        printf("%f ", a);
        a = a*1/2;
    }
    return 0;
}