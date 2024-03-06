#include<stdio.h>
int main(){
    int a,m;
    printf("Enter a row no:");
    scanf("%d",&a);
    printf("Enter a colum no:");
    scanf("%d",&m);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=m; j++){
            if( i==1 || i==a || j==1 || j==m ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}