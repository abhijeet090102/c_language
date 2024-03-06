#include<stdio.h>
void palindrome(int am[]){
for(int i=0 , j=5; i<j; i++ , j--){
        printf("\n%d",am[i]);
        printf("\n%d\n",am[j]);
        if(am[i]==am[j]){
            printf("Array elements has palindrome");
        }
        else{
            printf("\nArray elements not a palindrome");
            break;
        }
    }
    return;
}
int main(){
    int am[6] = {1,2,3,4,5,6};
    palindrome(am);
    return 0;
}