#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number:");
    scanf("%d",&ma);
    for(int i=1; i<=ma; i++){
        for(int j=1; j<=ma-i; j++){
            printf(" ");
        }
            int a=1;
        for(int k=1; k<=i; k++){
            int m = a+64;
            char ch= (char)m;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}