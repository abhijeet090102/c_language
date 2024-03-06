#include<stdio.h>
int main(){
    int a = 5;
    int* m = &a; // int * -> int ka address store karta hai
    // VVIP -> *m = &a // a is changed
    int** st = &m; // int ** -> int* ka address store karta hai
    printf("%d\n",*m); // %p se address print hota hai
    printf("%d",**st);
    return 0;
}