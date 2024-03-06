#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char teir;
        char name[20];
    }pokemon;
    typedef struct legendrypokemon{
        pokemon normal;
        char ability[100];
    }legendrypokemon;
    typedef struct godpokemon{
        legendrypokemon legend;
        int specialattack;
    }godepokemon;

    godepokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "Turn anyone to stone");
    arceus.legend.normal.attack = 500;
    
    legendrypokemon newtwo;
    strcpy(newtwo.ability ,"Pressure");
    newtwo.normal.attack = 100;
    newtwo.normal.hp = 120;
    newtwo.normal.speed = 160;
    newtwo.normal.teir ='s';
    strcpy(newtwo.normal.name,"Mewtwo");
    for()
    return 0;
}