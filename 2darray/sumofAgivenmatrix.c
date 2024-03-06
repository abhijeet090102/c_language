#include<stdio.h>
int main(){
    int s;
    printf("Enter no of rows :");
    scanf("%d",&s);
    int t;
    printf("Enter no of columas :");
    scanf("%d",&t);
    printf("Enter all the elements");
    int am[s][t];
    for (int i = 0; i < s; i++){
        for(int j=0; j<t; j++){
            scanf("%d",&am[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<s; i++){
        for(int j=0; j<t; j++){
            printf("%d ",am[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0; i<s; i++){
        for(int j=0; j<t; j++ ){
            sum += am[i][j];
        }
    }
    printf("the sum of the given matrix is %d", sum);
}