#include<stdio.h>
int main(){
    int a;
    printf("Enter 1st number:");
    scanf("%d",&a);
    int m;
    printf("Enter 2nd number:");
    scanf("%d",&m);
    int am;
    printf("Enter 3rd number");
    scanf("%d", &am);
    if(a>m){ //
        if(a>am){
            printf("%d is greatest",a);
        }
        else{ //a<am   =>  m<a<am
            printf("%d is greatest",am);
        }
    }
    else{ //m>am => am ab sabse bada to nahi hai 
        if(m>am){
            printf("%d is greatest",m);
        }
        else{ //am>m  =>   a<
            printf("%d is greatest",am);
        }
    }
    return 0;
}