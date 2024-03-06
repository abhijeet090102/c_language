#include<stdio.h>
int main(){
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    int a = 0;
    for(int i=2; i<=m-1; i++){
        if(m%i==0){     //i is a factor of n
            a = 1;
            break;
        }
    }
    if(m==1){
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