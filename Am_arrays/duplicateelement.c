#include<stdio.h>
int main(){
    int am[7] = {1,2,3,4,5,6,4};
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=6; j++){
            if(am[i]==am[j]){
                printf("%d is the duplicate element",am[i]);
            }
        }
    }
    return 0;
}