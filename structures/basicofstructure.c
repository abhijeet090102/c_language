#include<stdio.h>
int main(){
    struct pokemon{ // user defined data
        int hp;
        int speed;
        int attack;
        char tier; //S,A,B,C,D
    }pikachu , charizard, mewtwo;
    
    printf("Enter attack of pikachu :");
    scanf("%d",&pikachu.attack);
    //pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    charizard.attack = 120;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';
    printf("%d",pikachu.attack);

    return 0;
}