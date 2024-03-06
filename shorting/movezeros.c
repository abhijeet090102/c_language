#include<stdio.h>
#include<string.h>
int main(){
    int ma[9] = {4,0,6,1,0,4,7,0,0};
    int n = 9;
    //int am[9];
    //int idx =0;
    // for(int i=0; i<9; i++){
    //     if(ma[i]!=0){
    //         am[idx] = ma[i];
    //         idx++;
    //     }
    // }
    // while(idx!=9){
    //         am[idx] = 0;
    //         idx++;
    // }
    for(int i=0; i<9; i++){
        printf("%d ",ma[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(ma[j]==0){
                int temp = ma[j];
                ma[j] = ma[j+1];
                ma[j+1] = temp;
            }
        }
    }
    printf("\n");
    for(int i=0; i<9; i++){
        printf("%d ",ma[i]);
    }
    return 0;
}