#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char teir;
        char name[20];
    }pokemon;
    pokemon a,b,c;
    a.attack = 100;
    a.hp = 80;
    a.speed = 160;
    a.teir ='s';
    strcpy(a.name,"Pikachu");

    // b.attack =a.attack;
    // b.hp = a.hp;
    // b.speed= b.speed;
    // b.teir = a.teir;
    // strcpy(b.name,a.name);

    b = a; // deep copy
    b.attack = 200;
    printf("%d",a.attack);
    return 0;
}