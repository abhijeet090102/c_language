#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number:");
    scanf("%d",&ma);
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=ma-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}