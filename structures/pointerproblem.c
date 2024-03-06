#include<stdio.h>
typedef int* pointer;
int main(){
    int x = 4 , y = 6;
    // int* a,b; // int* x and int y
    pointer a = &x , b = &y; 
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}