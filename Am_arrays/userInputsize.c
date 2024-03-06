#include<stdio.h>
int main(){
    int am;
    printf("Enter the size of array :");
    scanf("%d",&am);
    int amst[am];
    for(int i=0; i<=am-1; i++){
        scanf("%d",&amst[i]);
    }
    for(int i=0; i<=am-1; i++){
        printf("%d ",amst[i]);
    }
    return 0;
}