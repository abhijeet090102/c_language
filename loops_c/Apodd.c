#include<stdio.h>
int main(){
    int  m;
    printf("Enter a number :");
    scanf("%d",&m);
    for(int i=1; i<=(2*m-1); i=i+2){
        printf("%d ",i);
    }
    return 0;
}