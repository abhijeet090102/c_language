#include<stdio.h>
int main(){
    int ram;
    printf("Enter age of ram");
    scanf("%d", &ram);
    int shyam;
    printf("Enter age of shyam");
    scanf("%d", &shyam);
    int ajay;
    printf(" Enter age of ajay");
    scanf("%d", &ajay);
    if(ram < shyam && ram < ajay){
        printf("ram is youngest");
    }
    if(shyam< ram && shyam < ajay ){
        printf("shyam is youngest");
    }
    if(ajay < ram && ajay < shyam ){
        printf("ajay is youngest");
    }
    return 0;
}