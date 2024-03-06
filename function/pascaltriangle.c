#include<stdio.h>
// int factorial(int a){
//     int fact =1;
//     for(int i=2; i<=a; i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int combination(int am, int st){
//     int ncr = factorial(am)/(factorial(st)*factorial(am-st));
//     return ncr;
// }
int main(){
    int am;
    printf("Enter am:");
    scanf("%d",&am);
    for(int i=0; i<=am; i++){
        int first =1;
        for(int k=0; k<=am-i; k++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("%d ",first);
            first = first * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}