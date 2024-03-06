#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number rows and colum no :");
    scanf("%d",&ma);
    for(int i=1; i<=ma; i++){
        for( int j=1; j<=ma+1-i; j++){ // j -> 1 to a
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}