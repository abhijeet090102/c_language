#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int nsp=0;
    int nst=ma;
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}