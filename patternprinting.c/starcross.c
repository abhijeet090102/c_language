#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=ma; j++){
            if(i==j || i+j==ma+1){
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