#include<stdio.h>
int main()
{
    float r = 7;
    float pi = 3.1415;
    float v = 4*pi*r*r*r/3;
    printf("The volume of sphare : %f", v);
    //are of a circle
    int radius = 9;
    float area = 3.1415*radius*radius;
    printf ("\nThe area of circle : %f",area);
    //percentage of all 5 subjects 
    float m1 = 94;
    float m2 = 84;
    float m3 = 74;
    float m4 = 86;
    float m5 = 89;
    float a = (m1+ m2 + m3+m4 +m5)/5;
    printf("\nPercentage of all 5 subject is :%f",a);
    //print percentage of 4 subjects out of 40 
    float math = 36;
    float science = 36;
    float english = 38;
    float bengali = 36;
    float percentage = (math + science+ english+ bengali)/4;
    printf("\npercentage of 4 subjects marks : %f", percentage);
    return 0;
}