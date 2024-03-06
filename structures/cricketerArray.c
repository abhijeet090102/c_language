#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char FirstName[20];
        char LastName[20];
        int Age;
        int noofTestMAtch;
        float Averagescore;
    } cricketer;
    cricketer am[2];
    for(int i=0; i<2; i++){
        scanf("%s",am[i].FirstName);
        scanf("%s",am[i].LastName);
        scanf("%d",&am[i].Age);
        scanf("%d",&am[i].noofTestMAtch);
        scanf("%f",&am[i].Averagescore);
    }
    for(int i=0; i<2; i++){
        printf("Name :%s %s\n",am[i].FirstName ,am[i].LastName);
        printf("Age :%d\n",am[i].Age);
        printf("NoOfTest:%d\n",am[i].noofTestMAtch);
        printf("Average :%f\n",am[i].Averagescore);
        printf("\n");
    }
    return 0;
}