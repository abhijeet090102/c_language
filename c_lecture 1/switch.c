#include<stdio.h>

int main()
{
    int age , marks;
    printf("Enter your age\n ");
    scanf("%d", &age);
    printf("Entre your  marks\n");
    scanf("%d", &marks);

    switch (age)
    {
        case 4:
             printf("The age is 4 ");
             switch (marks)
                 {
                     case 45:
                           printf("Your marks are 45");
                      break;
        
                     default:
                          printf("Your marks are not 45 ");
                 }       
        break;
        case 16:
              printf("The age is 16");
        break;
        case 36:
             printf("The age is 36");
        break;

         default:
             printf("Age is not 4 , 16 or 36");
        
    }
}