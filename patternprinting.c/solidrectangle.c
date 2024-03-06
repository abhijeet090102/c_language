#include<stdio.h>
int main(){
    int m,a;
    printf("Enter number of rows:");
    scanf("%d",&a);
    printf("Enter number colums:");
    scanf("%d",&m);
    //********....... upto n no of stars
    for(int i=1; i<=a; i++){ // outer loop -> no of lines
        for(int i=1; i<=m; i++){ // inner loop -> no of stars in each line
             printf("* ");
     }
     printf("\n");//har line ke baad ek enter ke liye 
   }
    return 0;
}