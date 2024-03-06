#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
}pokemon;
void change(pokemon* p){
    p->hp = 90;
    // (*p).hp = 90; // (*x).something =  x-> something
    p ->attack = 100;
    p->speed = 120;
    p->tier = 'M';
    strcpy(p->name,"rikachu");
    return;
    }
int main(){
    pokemon pikachu = {60,70,100};

    // pikachu.hp = 80;
    // pikachu.attack = 90;
    // pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    // printf("%p\n",&pikachu.attack);
    
    // // pokemon* x = &pikachu;
    // (*x).hp = 70;
    // printf("%d",pikachu.hp);
    return 0;
}