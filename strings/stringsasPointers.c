#include<stdio.h>
#include<string.h>
int main(){
    // char am[] = {"ABHIJEET KARMAKAR"};
    // char* poits = am; // poits now points to am[0]
    // printf("%p\n",&am[9]);
    // printf("%p",am);
    
    // kisi v pointer ka add uske zero th index ke elemnt ka address hota hai 
    // int i = 0;
    // while(*poits!='\0'){
    //     printf("%c",*poits);
    //     poits++;
    //     i++;
    // }


    char am[] = "ABHIJEET KARMAKAR";
    // char* st = am;
    // am = "ABHIJEET KARMAKAR";
    char* p = am;
    *p = 'A';
    printf("%s",am);
     return 0;
}