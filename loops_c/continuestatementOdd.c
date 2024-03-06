#include<stdio.h>
int main(){
    int m;
    printf("Enter a number :");
    scanf("%d",&m);
    printf("odd number :");
    for(int i=1; i<=100; i++){
        if(i%2==0){// i is a factor of n
            continue;
        }
        printf("%d ",i);
    }
    printf("\n\n even number :");
    for(int i=1; i<=100; i++){
        if(i%2!=0) //odd
        {// i is a factor of n
            continue;
        }
        printf("%d ",i);
    }
    return 0; 
}