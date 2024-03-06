#include<stdio.h>
int main(){
    int year;
   // year = 2022;
     printf("Enter a year" );
     scanf("%d", &year);
    if((year%4 ==0) & (year%100 !=0) || (year%400 ==0))
      {  printf("this is a leap year");
    }
    else{
        printf("this is a common year");
    }
    return 0;
}
