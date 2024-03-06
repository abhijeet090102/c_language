#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int am[5] = {5,4,3,2,1};
    int n =5;
    for(int i=0; i<n; i++){
        printf("%d ",am[i]);
    }
    //bubble sort
    for(int i=0; i<n-1; i++){
        bool flag = true; // array is not sorted yet
        for(int j=0; j<n-1-i; j++ ){
            if(am[j]>am[j+1]){
                int temp = am[j];
                am[j] = am[j+1];
                am[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true){
            break;
            }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ",am[i]);
    }
    return 0;
}