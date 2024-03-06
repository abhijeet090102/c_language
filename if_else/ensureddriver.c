#include<stdio.h>
int main(){
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    char maried , sex;
    printf("Enter maried ");
    scanf("%c",&maried );
    printf("Enter sex ");
    scanf("%c", &sex);
    // if(maried == 'M'){
    //     printf("Driver is insured");
    // }
    // else{
    //     if(sex == 'M'){
    //         if(age>30){
    //             printf("Driver is insured");
    //         }
    //         else{
    //             printf("Driver is not insured");
    //         }
    //     }
    //     else{
    //         if(age>25){
    //             printf("Driver is insured");
    //         }
    //         else{
    //             printf("Driver is not insured");
    //         }
    //     }
    // }
    if((maried == 'M')|| (maried == 'U' && sex == 'M'&& age>30)|| (maried == 'U' && sex == 'F'&& age>25)){
        printf("Driver is insured");
    }
    else{
        printf("Driver is not insured");
    }
    return 0;
}