#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number rows and colum no :");
    scanf("%d",&ma);
    // for(int i=1; i<=2*ma-1; i=i+2){
    //     for( int j=1; j<=2*ma-1; j=j+2){ // j -> 1 to a
    //         printf(" %d ",j);
    //       }
    //     printf("\n");
    // }
     for(int i=1; i<=ma; i++){
        int a =1;
        for( int j=1; j<=i; j++){ // j -> 1 to a
            printf(" %d ",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}