#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[40];
        float price;
        int noofpages;
    }am;
    am a;
    am b;
    am c;
    a.noofpages = 100;
    a.price = 612.4;
    strcpy(a.name,"Bhagwat Gita");

    b.noofpages = 400;
    b.price = 800.4;
    strcpy(b.name,"Shiv Puran");

    printf("%s\n",a.name);
    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);

    printf("%s\n",b.name);
    printf("%d\n",b.noofpages);
    printf("%f\n",b.price);
    return 0;
}