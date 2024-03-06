#include<stdio.h>
#include<string.h>
int main(){
    typedef struct class{
        char StudentName[30];
        int marksOfmath;
        int marksOfPhy;
        int marksOfChem;
        int marksOfCa;
    }classXII;
    classXII details[4];
    details[0].marksOfmath = 98;
    details[0].marksOfPhy = 92;
    details[0].marksOfChem = 90;
    details[0].marksOfCa = 96;
    strcpy(details[0].StudentName,"Abhijeet");
    details[1].marksOfmath = 90;
    details[1].marksOfPhy = 96;
    details[1].marksOfChem = 89;
    details[1].marksOfCa = 92;
    strcpy(details[1].StudentName,"Priyanshu");
    details[2].marksOfmath = 98;
    details[2].marksOfPhy = 90;
    details[2].marksOfChem = 95;
    details[2].marksOfCa = 90;
    strcpy(details[2].StudentName,"Ram");
    details[3].marksOfmath = 98;
    details[3].marksOfPhy = 92;
    details[3].marksOfChem = 90;
    details[3].marksOfCa = 96;
    strcpy(details[3].StudentName,"Sontu");
    for(int i=0; i<4; i++){
        printf("Name:%s\n",details[i].StudentName);
        printf("Math:%d\n",details[i].marksOfmath);
        printf("Phy:%d\n",details[i].marksOfPhy);
        printf("Chem:%d\n",details[i].marksOfChem);
        printf("CA:%d\n",details[i].marksOfCa);
    }
    return 0;
}