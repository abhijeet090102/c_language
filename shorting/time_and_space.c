#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int target = 9;
    // int n = 8;
    int am[8] = {1,2,3,4,5,8,9,10};
    int i = 0;
    int j = 7;
    while(i<j){
        if(am[i]+am[j]==target){
            printf(" %d+%d -> %d Found specific target number",am[i], am[j], target);
            break;
        }
        else if(am[i]+am[j]>target){
            j++;
        }
        else{i++;}
    }
}