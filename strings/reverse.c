#include<stdio.h>
#include<string.h>
int main(){
    char am[40];
    puts("Enter a string");
    scanf("%[^\n]s",am);
    // puts("The size of is :"); //automatically gives a \n .
    // size
    int size = 0;
    int k = 0;
    while(am[k]!='\0'){
        size++;
        k++;
    }
    printf("The size is %d\n",size);
    for(int i=0,j=size-1; i<=j; i++,j-- ){
        char temp = am[i];
        am[i] = am[j];
        am[j] = temp;
    }
    puts("The reverse is :");
    puts(am);
    return 0;
}