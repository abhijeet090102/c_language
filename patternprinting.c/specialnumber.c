#include<stdio.h>
int minimum(int a, int m){
    int min =a;
    if(m<a) min = m;
    return min;
}
int main(){
    int ma;
    printf("Enter a number of lines :");
    scanf("%d",&ma);
    int man = 0;
    for(int i=1; i<=2*ma-1; i++){
        for(int j=1; j<=2*ma-1; j++){
            int a=i;
            if(i>ma) a = 2*ma - i;
            int m=j;
            if(m>ma)m = 2*ma -j;
            man = minimum(a,m);
            printf("%d",ma+1-man);
        }
        printf("\n");
    }
    return 0;
}