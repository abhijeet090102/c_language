#include<stdio.h>
#include<string.h>
int main(){
    // char am[] = {"College Wallah"};
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


    char am[] = "College Wallah";
    // char* st = am;
    // am = "Physics Wallah";
    char* p = am;
    *p = 'P';
    printf("%s",am);
     return 0;
}