#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    int am[7] = {7,4,5,9,8,2,1};
    int n =7;
    printf("Unsorted Array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",am[i]);
    }
    // selection sort
    for(int i=0; i<n-1; i++){ // n-1 passes
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i; j<=n-1; j++){
            if(min>am[j]){
                min = am[j];
                minidx = j;
            }
        }
        // swap the min and first element of unsorted part
        // swap minidx and i
        int temp = am[minidx];
        am[minidx] = am[i];
        am[i] = temp;
    }
    printf("\nSorted Array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",am[i]);
    }
    return 0;
}