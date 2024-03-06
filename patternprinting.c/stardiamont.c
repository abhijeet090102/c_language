#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number of lines:");
    scanf("%d",&ma);
    int nsp = ma/2;
    int nst = 1;
    int st=ma/2+1;//middle line
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        if(i<st){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}