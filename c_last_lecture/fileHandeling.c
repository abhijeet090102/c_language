#include<stdio.h>
int main(){
    // FILE* ptr = fopen("abhijeet.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL){
    //     printf("%s",str);
    // }
    //creating a file
    FILE* ptr = fopen("manisha.txt","w");
    char str[] = "Hello , I am Manisha ";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}