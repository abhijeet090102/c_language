#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    int am[6] = {4,5,7,1,2,3};
    int n =6;
    
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
        int temp = am[minidx];
        am[minidx] = am[i];
        am[i] = temp;
    }
    printf("\n");
    //printing 
     for(int i=0; i<n; i++){
        printf("%d ",am[i]);
    }
    printf("\n");
    // array to int digit 
    int nos = 0;
    for(int i=0; i<n; i++){
        nos = (nos*10) + am[i];
    }
    printf("%d \n", nos);
    //swaping last two digits
    for(int i = 0; i<n; i++ ){
        int temp = am[i];
        if(i==n-2){
            temp = am[i+1];
            am[i+1]= am[i];
        }
    }

    // for(int i = 0 ; i<n; i++){
    //     printf("%d ",am[i]);
    // }

    // create a digit into this array
        int no = 0;
    for(int i=0; i<n; i++){
        no = (no*10) + am[i];
    }
    printf("%d ",no);

    printf(" \nAdding two int array is: %d ",no+nos);

    return 0;
}