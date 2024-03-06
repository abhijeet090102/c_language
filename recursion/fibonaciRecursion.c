#include<stdio.h>
int fibo(int am){
    if(am==1 || am==2) return 1;
    return fibo(am-1) + fibo(am-2);
}
int main(){
    int am;
    printf("Enter a number:");
    scanf("%d",&am);
    //int fibonaciNo = fibo(am);
    printf("%d",fibo(am));
    return 0;
}