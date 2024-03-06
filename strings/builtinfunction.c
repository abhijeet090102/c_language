#include<stdio.h>
#include<string.h>
int main(){
    // char s1[] = "Abhijeet";
    // char s2[]= "Karmakar";
    // strcat(s1,s2);
    // // s2[0]= 'M';
    // // int x = strlen(str);
    // printf("%s",s1);


    char str[20] = "College";
    printf("%s\n",str);
    // 2 nd index me 'l'
    for(int i=6; i>=2; i--){
        str[i+1] = str[i];
    }
    str[2]= 'k';
    printf("%s",str);
    return 0;
}