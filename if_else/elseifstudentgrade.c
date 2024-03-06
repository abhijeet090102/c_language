#include<stdio.h>
int main(){
    int ma;
    printf("enter percentage");
    scanf("%d",&ma);
    // if(ma>90){
    //     printf("very good");
    // }
    // else if(ma>80){
    //     printf("good");
    // }
    // else if(ma>70){
    //     printf("can do better");
    // }
    // else if(ma>60){
    //     printf("average");
    // }
    // else if(ma>50){
    //     printf("below average");
    // }
    // else if(ma>40){
    //     printf("very poor");
    // }
    // else {
    //     printf("fail");
    // }
    if(ma>80){
        printf("A grade");
    }
    else{
        if(ma>60){
            printf("B grade");
        }
        else{
            if(ma>40){
                printf("C grade");
            }
            else{
                printf("D grade");
            }
        }
    }
    return 0;
}