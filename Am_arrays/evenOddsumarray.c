#include<stdio.h>
int main(){
    int am;
    printf("Enter the size of array :");
    scanf("%d",&am);
    int amst[am];
    for(int i=0; i<=am-1; i++){
        printf("Enter elements no :");
        scanf("%d",&amst[i]);
    }
    int sumevenInd = 0;
    int sumoddInd =0;
    // int st ;
    // printf("Enter a number :");
    // scanf("%d",&st);
    for(int i=0; i<=am-1; i++){
        if(i%2==0){
            sumevenInd+=amst[i];
        }
        else{
            sumoddInd+=amst[i];
        }
    }
    printf("%d\n",sumevenInd);
    printf("%d\n",sumoddInd);
    printf("%d",sumevenInd-sumoddInd);
    return 0;
}