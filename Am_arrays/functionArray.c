#include<stdio.h>
void fun(int am[]){
    int tema = am[0];
    am[0] = am[1];
    am[1] = tema;
    return;
}
int main(){
    int am[2] = {9,16};
    printf("%d %d\n",am[0],am[1]);
    fun(am);
    printf("%d %d\n",am[0],am[1]); 
    return 0;
}