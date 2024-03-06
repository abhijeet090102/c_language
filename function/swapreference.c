#include<stdio.h>
void swap(int* a , int* m){ // a = am , m = st
    int temp ;
    temp = *a; // temp = a
    *a = *m; // am = st
    *m = temp; // st = am
    return;
}
int main(){
    int am;
    printf("Enter am:");
    scanf("%d",&am);
    int st;
    printf("Enter st:");
    scanf("%d",&st);
    swap(&am,&st);
    printf("The value of am is %d\n",am);
    printf("The value of st is %d",st);
    return 0;
}