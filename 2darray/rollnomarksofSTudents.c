#include<stdio.h>
int main(){
    int s;
    printf("Enter no of rows :");
    scanf("%d",&s);
    int am[s][4];
    for(int i=0; i<s; i++){
        printf("Enter roll no and marks in phy , chem and math");
        for(int j=0; j<4; j++){
            scanf("%d",&am[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<s; i++){
        for(int j=0; j<4; j++){
            printf("%d ",am[i][j]);
        }
        printf("\n");
    }
}