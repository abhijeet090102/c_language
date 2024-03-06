#include<stdio.h>
int main(){
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    int asum=0;
    int odd_Digit=0;
    while(m!=0){
        odd_Digit =m%10;
        if(odd_Digit%2!=0){
         asum =asum+odd_Digit;   
        }
        m=m/10;
    }
    printf(" the sum of digits are %d",asum );
    return 0;
}