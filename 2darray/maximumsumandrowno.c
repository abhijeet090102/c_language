#include<stdio.h>
#include<limits.h>
int main(){
    int s;
    printf("Enter the row no:");
    scanf("%d",&s);
    int t;
    printf("Enter the colum no:");
    scanf("%d",&t);
    printf("Enter all elements:");
    int am[s][t];
    for(int i=0; i<s; i++){
        for(int j=0; j<t; j++){
            scanf("%d",&am[i][j]);
        }
    }
    int idx =0;
    int maxsum=INT_MIN;
    printf("\n");
    for(int i=0; i<s; i++){
    int suma=0;
        for(int j=0; j<t; j++){
            suma += am[i][j];
        }
        if(suma>maxsum){
            maxsum=suma;
            idx= i;
        }

        printf("%d\n",suma);
    }
    printf("%d\n",idx);
    return 0;       
}