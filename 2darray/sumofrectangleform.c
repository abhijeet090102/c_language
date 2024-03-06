#include<stdio.h>
int main(){
    int s;
    printf("Enter no of rows :");
    scanf("%d",&s);
    int t;
    printf("Enter no of columas :");
    scanf("%d",&t);

    // int am;
    // printf("Enter cordinates :");
    // scanf("%d",&am);
    // int ma;
    // printf("Enter cordinates :");
    // scanf("%d",&ma);

// l1,r1=0,2 l2,r2=3,4
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
    for(int i=0; i<4; i++){
        for(int j=2; j<5; j++ ){
            sum += am[i][j];
        }
    }
    printf("the sum of the given matrix is %d", sum);
}