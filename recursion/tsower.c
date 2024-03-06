#include<stdio.h>
void tower(int am , char st , char hl , char d){
    if(am==0) return;
    tower(am-1,st,d,hl);
    printf("%c -> %c\n",st,d);
    tower(am-1,hl,st,d);
    return;
}
int main(){
    int am;
    printf("Enter number of disk:");
    scanf("%d",&am);
    tower(am ,'A','M','S');
    return 0;
}