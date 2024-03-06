#include<stdio.h>
int main(){
    // int n;
    // printf("enter a number :");
    // scanf("%d",&n);

    //scope of variables
    int i;
    for(i=1; i<=10; i=i+2){
        printf("hello world\n");
    } 
    printf("%d",i);

    /* for(int i=1;i<=10;){
        printf("%d\n",i); // prints 1 to 10 numbers
        i++;
    }
    int i = 1;// this prints 1 to 10 numbers
    for(;i<=10 ; i++){
        printf("%d\n",i);
    }
    int i = 1;
    for(;i<=10 ;){
        printf("%d\n",i);
        i++;
    }
    int i ;
    for(i= 0;i++<10 ;){
        printf("%d\n",i);
    }
    int i ;
    for(i= 0;++i<=10 ;){
        printf("%d\n",i);
     }*/
    return 0;
}