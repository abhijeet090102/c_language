#include<stdio.h>
int main(){
    int m ;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d",&m);
    int t ;
    printf("Enter no of column of 1st matrix: ");
    scanf("%d",&t);
    printf("\n Enter element of 1st matrix :");
    int am[m][t];
    for(int i=0; i<m; i++){
        for(int j=0; j<t; j++){
            scanf("%d",&am[i][j]);
        }
    }
    printf("\n");
        for(int i=0; i<t; i++){

            if(i%2==0){
                for(int j=m-1; j>=0; j--){
                    printf("%d ",am[j][i]);
                }
                printf("\n");
            }
            else{
                for(int j=0; j<m; j++){
                    printf("%d ",am[j][i]);
                }
                printf("\n");
            }
        }
    return 0;
}