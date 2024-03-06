#include<stdio.h>
int main(){
    void fun(); //
    fun();
    return 0;
}
void fun(){
    printf("Hello\n");
    void am();
    am();
}
void am(){
    printf("love you");
}