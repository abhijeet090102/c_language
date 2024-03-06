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
    pokemon arr[3]; // arr[0],arr[1],arr[2]
    arr[0].attack = 60;
    arr[0].hp = 100;
    arr[0].speed = 120;
    arr[0].teir = 'S';
    strcpy(arr[0].name,"Charizard");

    arr[1].attack = 80;
    arr[1].hp = 120;
    arr[1].speed = 160;
    arr[1].teir = 'T';
    strcpy(arr[1].name, "Pikachu");

    arr[2].attack = 90;
    arr[2].hp = 160;
    arr[2].speed = 220;
    arr[2].teir = 'A';
    strcpy(arr[2].name, "Mewto");

    for(int i=0; i<3; i++){
        printf("Name:%s\n",arr[i].name);
        printf("Attack:%d\n",arr[i].attack);
        printf("Hp:%d\n",arr[i].hp);
        printf("Speed:%d\n",arr[i].speed);
        printf("Teir:%c\n",arr[i].teir);
    }
    return 0;
}