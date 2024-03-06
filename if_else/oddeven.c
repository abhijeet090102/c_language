#include<stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d", &a); // dabbe me value store
    if(a%2==0){ //even
        printf("even number");
    }
   else{
    printf("Odd number");
   }
    return 0;
}