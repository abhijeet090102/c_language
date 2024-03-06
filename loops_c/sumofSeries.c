#include<stdio.h>
int main(){
    int ma;
    printf("Enter a number :");
    scanf("%d",&ma);
    // 1-2+3-4 +5 -6 +......n terms
    // odd numbers -> add
    // even numbers -> subtract  
    int st=0; 
    if(ma%2==0){
        st = -ma/2;
    }
    else{
        st= -ma/2 + ma;
    }
    printf("The sum is : %d", st);
    return 0;
}