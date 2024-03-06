
#include <stdio.h>
#include <conio.h>
 
void main()
{
    int age;
    char health[10], gen[6], loc[7];
 
    printf("Health: \nAge: \nGender: \nLocation: \n");
    scanf("%s %d %s %s",&health,&age,&gen,&loc);
 
    printf("Health: %s \nAge: %d \nGender: %s \nLocation: %s \n",health,age,gen,loc);
 
    if(age>=25 && age<=35)
    {
        if(health=="excellent")
        {
            if(loc=="city")
            {
                if(gen=="male")
                {
                    printf("The premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs");
                }
                else if(gen=="female")
                {
                    printf("The premium is Rs. 3 per thousand and his policy amount cannot exceed Rs. 1 lakhs");
                }
                else
                {
                    printf("The person is not insured");
                }
            }
            else
            {
                printf("The person is not insured");
            }
 
        }
        else if(health=="poor")
        {
            if(loc=="village")
            {
                if(gen=="male")
                {
                    printf("The premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000");
                }
                else
                {
                    printf("The person is not insured");
                }
            }
 
            else
            {
                printf("The person is not insured");
            }
        }
        else
        {
            printf("The person is not insured");
        }
 
    }
 
    else
    {
        printf("The person is not insured");
    }
 
    getch();
}