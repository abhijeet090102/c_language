#include<stdio.h>
int main(){
    int st;
    printf("Enter the no of rows/colum :");
    scanf("%d",&st);
    printf("Enter all the elements\n");
    int am[st][st];
    for(int i=0; i<st; i++){
        for(int j=0; j<st; j++){
            scanf("%d",&am[i][j]);
        }
    }
    for(int i=0; i<st; i++){
        for(int j=i; j<st; j++){
            int temp = am[i][j];
            am[i][j] = am[j][i];
            am[j][i] = temp;
        }
    }
    printf("\n");
    for(int i=0; i<st; i++){
        for(int j=0; j<st; j++){
            printf("%d ",am[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<st; i++){
        int j = 0;
        int k = st - 1;
        while(j<k){
            int temp = am[i][j];
            am[i][j] = am[i][k];
            am[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\n");
    for(int i=0; i<st; i++){
        for(int j=0; j<st; j++){
            printf("%d ",am[i][j]);
        }
        printf("\n");
    }
    return 0;
}