#include<stdio.h>
void reverse(int am[]){
    // int i = 0;
    // int j = 6;
    // while(i<j){
    //     // am[i] and am[j];
    //     int temp = am[i];
    //     am[i] = am[j];
    //     am[j] = temp;
    //     i++;
    //     j--;
    // }
    for(int i=0,j=6; i<j; i++,j--){
        int temp = am[i];
        am[i] = am[j];
        am[j] = temp;
    }
    return;
}
int main(){
    int am[7] = {1,2,3,4,5,6,7};
    reverse(am);
    for(int j=0; j<=6; j++){
        printf("%d ",am[j]);
    }
    return 0;
}