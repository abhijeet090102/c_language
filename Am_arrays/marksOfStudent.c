#include<stdio.h>
int main(){
    //int size =10,b[size];   also right
    int am[10];
    for(int i=0; i<=9; i++){
        printf("Enter marks :");
        scanf("%d",&am[i]);
    }
    for(int i=0; i<=9; i++){
        if(am[i]<35){
            printf("%d ",i);
        }
    }
}
