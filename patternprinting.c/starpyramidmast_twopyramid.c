#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number:");
    scanf("%d",&ma);
    int nsp=1;
    int nst=ma;
    for(int m=1; m<=2*ma+1; m++){ // pahli line
        printf("*");
    }
    printf("\n");
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=nst; j++){ // stars
            printf("*");
        }
        for(int k=1; k<=nsp; k++){ // space
            printf(" ");
        }
        for(int j=1; j<=nst; j++){ // stars
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}