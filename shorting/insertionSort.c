#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    int am[] = {1,4,3,2,0};
    int n = 5;
    printf("Unsorted Array:\n");
    for(int i=0; i<=n-1; i++){
        printf("%d ",am[i]);
    }
    printf("Sorted Array:\n");
    for(int i=1; i<=n-1; i++){
        int j = i;
        while( am[j]<am[j-1] && j>=1 ){
            int temp = am[j];
            am[j] = am[j-1];
            am[j-1] = temp;
            j--;
        }
    }
    for(int i=0; i<=n-1; i++){
        printf("%d ",am[i]);
    }
    return 0;
}