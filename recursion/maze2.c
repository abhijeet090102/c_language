#include<stdio.h>
int maze2(int am, int st){
    int rightways =0;
    int downways =0;
    if(am==1 && st==1) return 1;
    if(am==1){ //cannot go down
        rightways += maze2(am,st-1);
    }
    if(st==1){// cannot go right 
        downways += maze2(am-1,st);
    }
    if(am>1 && st>1){
        rightways += maze2(am,st-1);
        downways += maze2(am-1,st);
    }
    int totalWays = rightways + downways;
    return totalWays;
}
int main(){
    int am;
    printf("Enter no of rows of the maze:");
    scanf("%d",&am);
    int st;
    printf("Enter no of  coloum of the maze:");
    scanf("%d",&st);
    int noOfWays = maze2(am,st);
    printf("%d",noOfWays);
    return 0;
}