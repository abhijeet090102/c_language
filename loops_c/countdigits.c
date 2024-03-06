#include<stdio.h>
int main(){
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    int count=0;
    while(m!=0){
        m=m/10;
        count++;
    }
    printf("The no of digits are %d",count);
    return 0;
} 