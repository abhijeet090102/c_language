#include<stdio.h>
int main(){
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    for(int i=4; i<=3*m+1; i=i+3){
        printf("%d ",i);
    }
    return 0;
}