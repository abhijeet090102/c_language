#include<stdio.h>
int main(){
    int s;
    printf("Enter no of rows :");
    scanf("%d",&s);
    int t;
    printf("Enter no of columas :");
    scanf("%d",&t);
    int am[s][t];
    for(int i=0; i<s; i++){
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
    // am[0][0] = 1;
    // am[0][1] = 2;
    // am[1][0] = 3;
    // am[1][1] = 4;
    
    return 0;
}