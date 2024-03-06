#include<stdio.h>
int main(){
    int am[8] = {1,2,3,4,5,6,7,8};
    int totalPairs = 0;
    int x = 12;
    for(int i=0; i<=7; i++){
        for(int j=i+1; j<=7; j++){
            if(am[i]+ am[j] == x){
                totalPairs++;
                printf("(%d,%d)\n",am[i],am[j]);
            }
        }
    }
    printf("%d",totalPairs);
    return 0;
}