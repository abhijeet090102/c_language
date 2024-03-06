#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    date a,b;
    // a -> 9/01/2002
    // b -> 5/09/2023
    a.date = 9;
    a.month = 01;
    a.year = 2002;

    b.date = 5;
    b.month = 9;
    b.year = 2023;
    // bool flag = true;
    // if(a.date!=b.date)flag = false;
    // if(a.month!= b.month)flag = false;
    // if(a.year!=b.year)flag = false;

    // if(flag==true)printf("The dates are same");
    // else{printf("The dates are different");}
    
    date c;
    c = a;

    bool flag = true;
    if(a.date!=c.date)flag = false;
    if(a.month!= c.month)flag = false;
    if(a.year!=c.year)flag = false;

    if(flag==true)printf("The dates are same");
    else{printf("The dates are different");}
    return 0;
}