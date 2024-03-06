#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int nst=ma;
    int nsp=1;
    for(int i=1; i<=2*ma+1; i++){
        char ch = (char)(i+64);
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1; i<=ma; i++){
        int am=64;
        for(int a=1; a<=nst; a++){
            char ch=(char)(am+1);
            printf("%c",ch);
            am++;
        }
        for(int k=1; k<=nsp; k++){
            printf(" ");
            am++;
        }
        for(int a=1; a<=nst; a++){
            char ch= (char)(am+1);
            printf("%c",ch);
            am++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}