#include<stdio.h>
#include<stdbool.h>
int main(){
    int am[7] = {1,3,2,4,1,3,2};
    for(int i=0; i<=6; i++){
        bool flag = false;
        for(int j=i+1; j<=6; j++){
            if(am[i] == am[j]){
                flag = true;
            }
        }
        if(flag == false){
            printf("%d",am[i]);
            break;
        }
    }
    return 0;
}