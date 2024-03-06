#include<stdio.h>
int main(){
    int am;
    printf("Enter the size of array :");
    scanf("%d",&am);
    int amst[am];
    for(int i=0; i<=am-1; i++){
        printf("Enter elements no :");
        scanf("%d",&amst[i]);
    }
    int count = 0;
    int st ;
    printf("Enter a number :");
    scanf("%d",&st);
    for(int i=0; i<=am-1; i++){
        if(amst[i]>st){
            count ++;
            printf("%d ",amst[i]);
        }
    }
    printf("\n%d ",count);
    return 0;
}