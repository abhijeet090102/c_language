#include<stdio.h>
int main(){
    int x,y;
    printf("enter the cordinates:");
    scanf("%d %d", &x,&y);
    if(x==0 && y==0){
        printf(" The point on origin");
    }
    else if(x==0) {
        printf(" Lies on y-axis");
    }
    else if (y==0){
        printf("Lies on x axis");
    }
    else{
        printf("The point does not lies on x or y axis ");
    }
    return 0;
}