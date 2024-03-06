#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int n; // 4 bytes
    printf("Enter the size of array:");
    scanf("%d",&n);
    int am[n]; // n*4 
    printf("Enter array:");
    for(int i=0; i<n; i++){
        scanf("%d",&am[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",am[i]);
    }
     return 0;

}