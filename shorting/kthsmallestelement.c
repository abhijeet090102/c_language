#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    int am[] = {4,5,6,1,2,3};
    int n = 6;
    int k = 4;
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i; j<=n-1; j++){
            if(min>am[j]){
                min = am[j];
                minidx = j;
            } 
        }
        int temp = am[minidx];
        am[minidx] = am[i];
        am[i] = temp;        
    }
    printf("\nSorted Array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",am[i]);
    }
    printf("THE Kth smallest element is%d ", am[k]);
}