#include<stdio.h>
int min(int a, int m){
    if(a<m) {
        return a;
    }
    else{
        return m;
    }

}
int gcd(int a , int m){
    int hcf;
    for(int i=min(a,m); i>=1; i--){
        if(a%i==0 && m%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter 1st number :");
    scanf("%d",&a);
    int m;
    printf("Enter 2nd number :");
    scanf("%d",&m);
    int hcf = gcd(a,m);
    printf("The HCF/GCD of %d and %d is : %d",a,m,hcf);
    return 0;
}