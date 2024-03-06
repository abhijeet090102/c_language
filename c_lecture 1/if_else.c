#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf(" you have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("you can vote!");
    }
    else if(age>10)
    {
        printf("you are not a teen ager , you are between 10 to 18 ");
    }

    else{
        printf("You cannot vote!");
    }
    return 0;
}
//maths and science -45 
// science - 15 
// maths - 15 
// print the type of gift you are giving to them 