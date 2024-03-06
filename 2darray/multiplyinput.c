#include<stdio.h>
int main(){
    // 1st matrix order details 
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
    //2nd matrix order 
    int a ;
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d",&a);
    int s ;
    printf("Enter no of column of 2nd matrix: ");
    scanf("%d",&s);
    printf("Enter element of 2nd matrix:");
    int st[a][s];
    for(int i=0; i<a; i++){
        for(int j=0; j<s; j++){
            scanf("%d",&st[i][j]);
        }
    }
    if(t!=a){
        printf("The matrices cannot be multiplyed");
    }
    else{
        //multiplication 
        int amst[m][s];
        for(int i=0; i<m; i++){
            for(int j=0; j<s; j++){
                amst[i][j] =0;
                for(int k=0; k<a; k++){
                    amst[i][j] += am[i][k]*st[k][j];
                }
            }
        }
        printf("The resultant matrix is:\n");
        for(int i=0; i<m; i++){
            for(int j=0; j<s; j++){
                printf("%d ",amst[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}