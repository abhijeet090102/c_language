#include<stdio.h>
#include<limits.h>
int main(){
    int am[8] = {1,2,3,4,5,5,4,3};
    int max = INT_MIN;
    int stmax = INT_MIN;
    // for(int i=0; i<=7; i++){
    //     if(max<am[i]){
    //         max = am[i];
    //     }
    // }
    // for(int i=0; i<=7; i++){
    //     if(am[i] !=max && stmax<am[i] ){
    //         stmax = am[i];
    //     }
    // }
    for(int i=0; i<=7; i++){
        if(max<am[i]){
            stmax = max; //stmax is previous max
            max = am[i]; // max is new max
        }
        else if(stmax<am[i] && max !=am[i] ){ //max > am[i]
            stmax = am[i];
        }
    }
    printf("%d",stmax);
    return 0;
}