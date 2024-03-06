#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*) malloc(10*4); // 00AF1430
    printf("%p\n",ptr);
    ptr = realloc(ptr,20*4); // 00AF0E70
    printf("%p",ptr);

}