#include<stdio.h>
int main(){
    int am[8] = {1,2,3,4,5,6,7,8};
    for(int i=0; i<=7; i++){
        if(i%2!=0){
            am[i]*=2;
        }
        else{
            am[i]+=10;
        }
    }
    for(int i=0; i<=7; i++){
        printf("%d ",am[i]);
    }
    return 0;
}