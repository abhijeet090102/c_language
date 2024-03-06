#include<stdio.h>
int powerlog(int am , int st){
    if(st==0) return 1;
    int amst = powerlog(am,st/2) ;
    if(st%2==0){
        return amst * amst;
    }
    else{
        return amst * amst * am;
    }
}
int main(){
    int am;
    printf("Enter base:");
    scanf("%d",&am);
    int st;
    printf("Enter power:");
    scanf("%d",&st);
    int p = powerlog(am,st);
    printf("%d raised to the power %d is : %d",am,st,p);
    return 0;
}