#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number:");
    scanf("%d",&ma);
    int nsp =ma;
    int nst=ma;
    for(int i=1; i<=ma+1; i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1; i<=ma; i++){
        int m=1;
        for(int a=1; a<=nst; a++){
            printf("%d",m);
            m++;
        }
        for(int am=1; am<=nsp; am++){
            printf(" ");
        }
        for(int a=ma; a<=nsp; a++){
            printf("%d",a);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}