#include<stdio.h>
int main(){
    int am[4];
    for(int i=0; i<=3; i++){
        printf("Enter element no %d :",i+1);
        scanf("%d",&am[i]);
    }
    for(int i=3; i>=0; i--){
        printf("%d ",am[i]);
    }
}