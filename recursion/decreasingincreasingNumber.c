#include<stdio.h>
void increasing(int am){
    if(am==0) return; //base case
    printf("%d\n",am); // code
    increasing(am-1); // call
    printf("%d\n",am); // code
    return;
}
int main(){
    int am;
    printf("Enter a number :");
    scanf("%d",&am);
    increasing(am);
    return 0;
}