#include<stdio.h>
int stair(int am){
    if(am<=3) {return am;}
    int totalWays = stair(am-1) + stair(am-2) + stair(am-2);
    return totalWays;
}
int main(){
    int am;
    printf("Enter a number of stair:");
    scanf("%d",&am);
    int ways = stair(am);
    printf("%d",ways);
    return 0;
}