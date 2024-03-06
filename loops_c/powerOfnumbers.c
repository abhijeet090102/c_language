#include<stdio.h>
int main(){
    int m,a=2;
    printf("Enter a power",m);
    scanf("%d",&m);
    printf("Enter a base ",a);
    scanf("%d",&a);
    int power = 1;
    for(int i=1; i<=m; i++ ){
        power = power *a;
    }
    printf("%d raised to the power %d is %d",a,m,power);
    return 0;
}

// for(int i=1; i<=m; i++ ){
//         power = power *a;
//         printf("%d raised to the power %d is %d\n",a,i,power);
//     }
    