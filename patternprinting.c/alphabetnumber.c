#include<stdio.h>
int main(){
    int ma;
    printf("Enter number of rows and colums :");
    scanf("%d",&ma);
    for(int i=1; i<=ma; i++){
        int a=1;
        for(int j=1; j<=i; j++){
            if(i%2==0){
            int m = a+ 64; // m=65;
            char ch = (char)m; // ch = (char)65;
             printf("%c ",ch);
            a++;
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}