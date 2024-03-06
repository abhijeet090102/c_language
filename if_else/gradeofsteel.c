#include<stdio.h>
int main()
{
    int hardness;
    printf("Enter hardness level  :");
    scanf("%d",&hardness);
    float carbon;
    printf("Enter carbon level  :");
    scanf("%f",&carbon);
    int tensile;
    printf("Enter tensile strength  :");
    scanf("%d",&tensile);
    if(hardness>50 && carbon<0.7 && tensile>5600){
        printf("Grade is 10 for steel strength ");
    }
    else if(hardness>50 && carbon<0.7){
        printf("Grade is 9 for steel strength ");
    }
    else if(carbon<0.7 && tensile>5600){
        printf("Grade is 8 for steel strength");
    }
    else if(hardness>50 && tensile>5600){
        printf("Grade is 7 for steel strength ");
    }
    else if(hardness>50 || carbon<0.7 || tensile>5600){
        printf("Grade is 6 for steel strength ");
    }
    else if(hardness<50 && carbon>0.7 && tensile<5600){
        printf("Grade is 5 for steel strength ");
    }
    return 0;
}