#include<stdio.h>
#include<limits.h>
int main(){
    int am[8] = {1,2,6,45,6,9,16,1};
    int max = INT_MIN;
    for(int i=0; i<=7; i++){
        if(max<am[i]){
            max = am[i];
        }
    }
    printf("%d",max);
    return 0;
}