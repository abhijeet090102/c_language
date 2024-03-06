#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int nst=1;
    int nsp=ma-1;
    for(int i=1; i<=ma; i++){
        for(int k=1; k<=nsp; k++){
            printf(" ");
        }
        int a=1;
        nsp--;
        for(int j=1; j<=nst; j++){
            int m =a+64;
            char ch = (char)m;
            printf("%c",ch);
            a++;
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}