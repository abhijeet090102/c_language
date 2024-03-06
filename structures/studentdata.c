#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef struct student{
        int rollNo;
        char name[20];
        char department[20];
        char course[20];
        int yearOfjoin;
    }student;
void check(student s1 ,student s2){
    if(strcmp(s1.department,s2.department)==0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are different");
    }
}
int main(){
    student s1,s2;
    s1.rollNo = 48;
    strcpy(s1.name,"Abhijeet");
    strcpy(s1.department,"Mathematics");
    strcpy(s1.course,"MCA");
    strcpy(s2.department,"Mathematics");
    
    
    check(s1,s2);
    return 0;
}