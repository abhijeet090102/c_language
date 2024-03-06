#include<stdio.h>
int main(){
    int ma;
    printf("Enter number of rows and colums :");
    scanf("%d",&ma);
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=ma; j++){
            int a = ma/2+1;
           if(j==a || i==a){
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