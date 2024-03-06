#include<stdio.h>
#include<string.h>
int main(){
    char am[] = "ABHIJEET KARMAKAR";
    int size = 0;
    int k = 0;
    while(am[k]!='\0'){
        size++;
        k++;
    }
    printf("%d\n",size);
    char st[size];
    for(int i=0; i<size; i++){
            int tema = am[i];
            st[i] = tema;
        }
    printf("%s",st);
   return 0; 
}