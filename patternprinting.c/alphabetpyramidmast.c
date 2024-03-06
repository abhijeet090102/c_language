#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int nsp=ma-1;
        for(int i=1; i<=ma; i++){
        for(int j= 1; j<=nsp; j++){
            printf(" ");
        }
        nsp--;
        for(int k=1; k<=i; k++){
            int m=k+64;
            char ch = (char)m;
            printf("%c",ch);
        }
        int a=i-1;
        for(int am=1; am<=i-1; am++){
            char ch=(char)(am+64);
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}