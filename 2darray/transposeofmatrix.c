#include<stdio.h>
int main(){
    int s;
    printf("Enter the no of rows :");
    scanf("%d",&s);
    int t;
    printf("Enter the no of colums :");
    scanf("%d",&t);
    printf("Enter all the elements\n");
    int am[s][t];
    for(int i=0; i<s; i++){
        for(int j=0; j<t; j++){
            scanf("%d",&am[i][j]);
        }
    }
    int amst[t][s];
    for(int i=0; i<t; i++){
        for(int j=0; j<s; j++){
            // printf("%d ",am[j][i]);
            amst[i][j]=am[j][i];
        }
    }
    for(int i=0; i<t; i++){
        for(int j=0; j<s; j++){
            printf("%d ",amst[i][j]);
        }
        printf("\n");
    }
    return 0;
}