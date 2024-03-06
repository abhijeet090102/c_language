#include<stdio.h>
#include<limits.h>
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
    int idxs=0;
    int idxt=0;
    int max = INT_MIN;
    for(int i=0; i<s; i++){
        for(int j=0; j<t; j++){
            if(max<am[i][j]){
                max = am[i][j];
                idxs = i;
                idxt = j;
                break;
            }
        }
    }
    printf("%d \n",max);
    printf("The maximum no of index is %d %d\n",idxs,idxt);
    int min = INT_MAX;
    int idxa=0;
    int idxm=0;
    for(int i=0; i<s; i++){
        for(int j=0; j<t; j++){
            if(min>am[i][j]){
                min = am[i][j];
                idxa=i;
                idxm=j;
                break;
            }
        }
    }
    printf("%d \n",min);
    printf("The min no of index is %d %d\n",idxa,idxm);
    return 0;
}