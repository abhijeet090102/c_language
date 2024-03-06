#include<stdio.h>
#include<stdbool.h>
int main(){
    int am[7] = {16,9,34,40,54,6,7};
    int x = 16;
    int idx = 0;
    bool flag = false; // not present 
    // int check = 0; // 0 means the element is not preseent 
    for(int i=0; i<=6; i++){
        if(am[i]==x){
            // check = 1;
            flag = true; // present 
            idx = i;
            break;
        }
    }
    if(flag == false){
        printf("%d is not present in the array ",x);
    }
    else{
        printf("%d is present in the array and its index is %d ",x,idx);
    }
    return 0;
}