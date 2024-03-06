#include<stdio.h>
int main(){
    int m;
    printf("enter a number:");
    scanf("%d",&m);
    // 1 2 4 8 16 ....
    int a =3;
    for(int i=1; i<=m; i++){
        printf("%d ",a);
        a = a*4;
    }
    return 0;
}