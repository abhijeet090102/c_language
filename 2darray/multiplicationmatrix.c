#include<stdio.h>
int main(){
    int am[3][2]={{1,2},{3,4},{5,6}};
    int st[2][4] = {{1,2,3,4},{5,6,7,8} };
    int amst[3][4];
    //multiplication
    int t = 2;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            //i row of am[][] and j column of st[][]
            // (am[i][0],a[i][1].....)* (st[[0][j] , st[1][j]....)
            amst[i][j] = 0;
            for(int k=0; k<t; k++ ){
                amst[i][j] += am[i][k] * st[k][j];
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",amst[i][j]);
        }
        printf("\n");
    }
    return 0;
}