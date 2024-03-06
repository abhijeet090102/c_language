#include<stdio.h>
int main(){
    int ram;
    printf("enter your age ram");
    scanf("%d",&ram);
    int shyam;
    printf("enter your age shyam");
    scanf("%d",&shyam);
    int ajay;
    printf("enter your age ajay");
    scanf("%d", &ajay);
    if(ram>shyam){
        if(ram>ajay){
        printf("ram is youngest");
        }
        else{
            printf("ajay is youngest");
        }
    }
    else{
        if(shyam>ajay){
            printf("shyam is youngest");
        }
        else{
            printf("ajay is youngest");
        }
    }
    return 0;
}