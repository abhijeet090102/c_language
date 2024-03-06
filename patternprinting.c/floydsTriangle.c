#include<stdio.h>
int main(){
    int ma;
    printf("Enter a no:");
    scanf("%d",&ma);
    int a=1;
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}