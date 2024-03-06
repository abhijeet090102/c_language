#include<stdio.h>
void zigzag(int am){
    if(am==0) return;
    printf("%d ",am);
    zigzag(am-1);
    printf("%d ",am);
    zigzag(am-1);
    printf("%d ",am);
    return;
}
int main(){
    int am;
    printf("Enter a number:");
    scanf("%d",&am);
    zigzag(am);
    return 0;
}