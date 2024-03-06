#include<stdio.h>
int main(){
    int am[2][4] = {{1,0,1,1}, {0,1,1,0}};
    // 1 0 1 1
    // 0 1 1 0
    
    int maxCount = 0 ;
    int maxIdx =-1;
    for(int i=0; i<2; i++){
        int count = 0;
        for(int j=0; j<4; j++){
            if(am[i][j]) count++;
        }
        if(maxCount<count){
            maxCount = count ;
            maxIdx = i;
        }
        printf("\n");
    }
    printf("%d\n",maxIdx);
    printf(" the maxmum no of ones %d\n",maxCount);
    return 0;  
}