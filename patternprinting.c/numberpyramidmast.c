#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int nst=ma;
    int nsp=1;
    for(int i=1; i<=2*ma+1; i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1; i<=ma; i++){
        int m=1;
        for(int a=1; a<=nst; a++){
            printf("%d",m);
            m++;
        }
        for(int k=1; k<=nsp; k++){
            printf(" ");
            m++;
        }
        for(int a=1; a<=nst; a++){
            printf("%d",m);
            m++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}