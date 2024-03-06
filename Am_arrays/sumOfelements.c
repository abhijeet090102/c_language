#include<stdio.h>
int main(){
    int am[4] = {1,2,3,4};
    int stma =0;
    for(int i=0; i<=3; i++){
        stma = stma + am[i];
    }
    printf("%d",stma);
    return 0;
}