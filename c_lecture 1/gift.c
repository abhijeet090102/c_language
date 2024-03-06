#include<stdio.h>
int main()
{
    int sub;
    printf("Enter your total pass subject\n");
    scanf("%d", &sub);
    printf("1for maths and science \n");
    printf("2for math\n");
    printf ("3for science \n");
    scanf("%d", &sub);
    if (sub==1)
    {
        printf("Congratulation you can get a gift 45rs");
    }
     else if (sub==2)
    {
       printf("Congratulation you can get a gift of 15rs");
    }
    else if (sub ==3)
    {
        printf("you can get a gift of 16rs");
    }
    
    return 0;
}
