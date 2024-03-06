#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number rows and colum no :");
    scanf("%d",&ma);
    int a= ma;
    for(int i=1; i<=ma; i++){
        for( int j=1; j<=a; j++){ // j -> 1 to a
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}