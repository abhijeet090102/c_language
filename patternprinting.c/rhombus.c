#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number:");
    scanf("%d",&ma);
    int a = ma;
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=a; j++){
            printf(" ");
        }
        for(int k=1; k<=ma; k++){
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}