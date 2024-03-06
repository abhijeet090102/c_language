#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number:");
    scanf("%d",&ma);
    int noof_st = 1;
    int noofspace =3;
    for(int i=1; i<=ma; i++){
        for(int k=1; k<=noofspace; k++){ //scope
            printf(" ");
        }
        noofspace = noofspace-1;
        for(int j=1; j<=noof_st; j++){
            printf("*");
        }
        noof_st = noof_st+2;
        printf("\n");
    }
    return 0;
}