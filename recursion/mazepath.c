#include<stdio.h>
int maze(int cr , int cc, int er , int ec){
    int righWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){ // only right ways call
        righWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){ // only downwards call
        downWays += maze(cr+1,cc,er,ec);
    } 
    if(cr<er && cc<ec){
        righWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
    }
    int totalWays = righWays + downWays;
    return totalWays;
}
int main(){
    int am;
    printf("Enter no of rows of the maze:");
    scanf("%d",&am);
    int st;
    printf("Enter no of  coloun of the maze:");
    scanf("%d",&st);
    int noOfWays = maze(1,1,am,st);
    printf("%d",noOfWays);
    return 0;
}