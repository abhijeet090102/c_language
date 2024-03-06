#include<stdio.h>
void decreasing(int am){
    if(am==0) return;
    printf("%d\n",am);
    decreasing(am-1);
    return;
}
int main(){
    int am;
    printf("Enter a number :");
    scanf("%d",&am);
    decreasing(am);
    return 0;
}