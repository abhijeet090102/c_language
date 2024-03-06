#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    int nsp = ma-1;
    for(int i=1; i<=ma; i++){
        for(int q=1; q<=nsp; q++ ){
            printf(" ");
        }
        nsp--;
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        int a=i-1;
        for(int m=1; m<=i-1; m++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}