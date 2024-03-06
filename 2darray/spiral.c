#include<stdio.h>
int main(){
    int m ;
    printf("Enter no of rows of matrix: ");
    scanf("%d",&m);
    int t ;
    printf("Enter no of column of  matrix: ");
    scanf("%d",&t);
    printf("\n Enter element of  matrix :");
    int am[m][t];
    for(int i=0; i<m; i++){
        for(int j=0; j<t; j++){
            scanf("%d",&am[i][j]);
        }
    }
    printf("\n");
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = t-1;
    int tne = m*t;
    int count = 0;
    while(count<tne){
        // print the minimum row 
        for( int j=minc; j<=maxc && count<tne ; j++){
            printf("%d ",am[minr][j]);
            count++;
        }
        minr++;
        // if(count>=tne) break; we also use this .
        // print the maximum column
        for(int i=minr; i<=maxr && count<tne; i++){
            printf("%d ",am[i][maxc]);
            count++;
        }
        maxc--;
        // print the maximum row
        for(int j= maxc; j>=minc && count<tne; j--){
            printf("%d ",am[maxr][j]);
            count++;
        }
        maxr--;
        
        // print the minimum column
        for(int i=maxr; i>=minr && count<tne; i--){
            printf("%d ",am[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}   