#include<stdio.h>
int prime(int st){
    int a = 0;
    for(int i=2; i<=st-1; i++){
        if(st%i==0){     //i is a factor of n
            a = 1;
            break;
        }
    }
    if(st==1){
        printf("1 is neither prime nor composite");
    }
    else if(a==0){
        printf("the given number is prime \n");
    }
     else{
        printf("the given number is composite\n");
        }
    return 0;
}
int main(){
    int am;
    printf("Enter am:");
    scanf("%d",&am);
    prime(am);
    return 0;
}