#include<stdio.h>
int main(){
     int am[2][2] ;//= {1,2,3,4};
    int st[2][2] ; //= {5,6,7,8};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&am[i][j]);

        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&st[i][j]);

        }
    }
    
    // int result[2][2];
    // for(int a=0; a<2; a++){
    //     for(int m=0; m<2; m++){
    //         result[a][m] = am[a][m]+st[a][m];
    //     }
    //     printf("\n");
    // }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", am[i][j]+ st[i][j]);
        }
        printf("\n");
    }
    return 0;
}