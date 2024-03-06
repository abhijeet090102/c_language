#include<stdio.h>
void sum(int am, int st){
    if(am==0) {
        printf("%d",st);
        return;
    }
    sum(am-1,st+am);
    return;
}
int main(){
    int am; 
    printf("Enfter a number:");
    scanf("%d",&am);
    sum(am,0);
    return 0;
}