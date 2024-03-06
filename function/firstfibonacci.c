#include<stdio.h>
int fibonacci(int am){
    int a=1;
    int m =1;
    int sum =0;
    for(int i=1; i<=am; i++){
        sum = a + m;
        printf("The %d fibonnaci is %d\n",i,a);
        a=m;
        m=sum;
    }
    return a;
}
int main(){
    int am;
    printf("Enter a number :");
    scanf("%d",&am);
    fibonacci(am);
    return 0;
}