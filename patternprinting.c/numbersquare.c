#include<stdio.h>
int main(){
    int ma;
    printf("Enter number of rows:");
    scanf("%d",&ma);
    for(int i=1; i<=ma; i++){ //no of lines / rows -> i
        for(int j=1; j<=ma; j++){ // no of colums -> j
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}