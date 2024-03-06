#include<stdio.h>
int main(){
    int am;
    printf("Enter the size of array:");
    scanf("%d",&am);
    int amst[am];
    int product = 1;
    for(int i=0; i<=am-1; i++){
        scanf("%d",&amst[i]);
        
    }
    for(int i=0; i<=am-1; i++){
        product = product * amst[i];
    }
    printf("%d ",product);
}