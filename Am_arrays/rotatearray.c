#include<stdio.h>
void reverse(int am[], int si, int ei ){ // reversing part of array
    for(int i=si,j=ei; i<=j; i++,j--){
        int temp = am[i];
        am[i] = am[j];
        am[j] = temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int am[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter elements :");
        scanf("%d",&am[i]);
    }
    int k;
    printf("Enter size of array :");
    scanf("%d",&k);
    k = k%n;
    reverse(am , 0,n-1);
    reverse(am,0,k-1);
    reverse(am,k,n-1);
    for(int j=0; j<=n-1; j++){
        printf("%d ",am[j]);
    }
    return 0;
}