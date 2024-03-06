#include<stdio.h>
int main(){
    // int x=1;
    // printf("%d",i);
    // while(i<=10){ // condition likhi hoti hai , jab hume jyada cheeze na pata ho
    //     printf("\n%d", i);
    //     i++;
    // }
    // while(x==1){
    //     x=x-1;
    //     printf("\n%d",x);
    // }
    // int x=4, y=3,z;
    // z=x-- -y;
    // printf("\n%d %d %d", x,y,z);
    int x=4, y=0 ,z;
    while(x>=0){
        if(x==y) {
            break;}
        else{
            printf("\n%d %d",x,y);
            x--;
        y++;
        }
    }
    return 0;
}