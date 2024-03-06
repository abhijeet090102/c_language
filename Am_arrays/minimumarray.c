#include<stdio.h>
#include<limits.h>
int main(){
    int am[8] = {-1,4,6,8,98,47,51,-4};
    int maini = INT_MAX;
    for(int i=0; i<=7; i++){
        if(maini>am[i]){
            maini = am[i];
        }
    }
    printf("%d",maini);
    return 0;
}