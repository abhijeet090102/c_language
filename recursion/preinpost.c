#include<stdio.h>
void preInPost(int am){
    if(am==0) return;
    printf("Pre %d\n",am);
    preInPost(am-1);
    printf("In %d\n",am);
    preInPost(am-1);
    printf("Post %d\n",am);
    return;
}
int main(){
    int am;
    printf("Enter a number:");
    scanf("%d",&am);
    preInPost(am);
    return 0;
}