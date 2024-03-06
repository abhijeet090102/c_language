#include<stdio.h>
int increasing(int st , int am){
    if(st>am) return 0;
    printf("%d\n",st);
    increasing(st+1,am);
    return st;
}
int main(){
    int am;
    printf("Enter a number:");
    scanf("%d",&am);
    increasing(1,am);
    return 0;
}