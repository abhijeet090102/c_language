#include<stdio.h>
int main()
{
 /*printf("hello world\nhello dear \n ");
  int a ,m ;
  scanf("%d", &a);
  printf(" The number you entered %d",a);
  scanf(" %d ", &m);
  printf("The number you entered %d",m);*/
  // sum of two given numbers 
  int a ;
  printf("Enter first number \n");
  scanf("%d", &a);
  int m ;
  printf("enter second number \n");
  scanf("%d", &m);
  int suam = a+m;
  printf(" sum of two numbers : %d\n", suam);
  int abhijeet , manisha ;
  printf("enter date of birth abhijeet and manisha :" );
  scanf("%d%d" ,&abhijeet,&manisha );
  printf("abhijeet=%d manisha=%d", abhijeet,manisha);
  return 0;
}