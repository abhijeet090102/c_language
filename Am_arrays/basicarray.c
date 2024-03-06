#include<stdio.h>
int main(){
    int am[5]; // 5 spaces created (dabba)
    for(int i=0; i<=4; i++){
        printf("\nEnter element number %d:",i+1);
        scanf("%d",&am[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d ",am[i]);
    }
        
    // float am[4] = {2.1,4.5,4.8,9.16};
    // printf("%f",am[3]);
    // char am[4] = {'A','M','S','T'};
    // printf("%c",am[3]);
    return 0;
}