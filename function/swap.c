#include<stdio.h>
int main(){
    int ma;
    printf("Enter ma :");
    scanf("%d",&ma);
    int st;
    printf("Enter st :");
    scanf("%d",&st);
    ma = ma + st;
    st = ma - st;
    ma = ma - st;
    printf("The value of ma is %d\n",ma);
    printf("The value of st is %d",st);
    
    return 0;
}