#include<stdio.h>
int main()
{
  /* float p,t;
    float r, si;
    printf ("p, t, r\n");
    scanf ("%f %f %f", &p,&t, &r);
    si= p*t*r/100;
    printf ("%f", si);*/
    float principle,rate,time ,si ;
    printf ("Enter principle:");
    scanf("%f", &principle);
    printf ("Enter rate :");
    scanf("%f", &rate);
    printf ("Enter time :");
    scanf("%f", &time);
    si = (principle*rate*time)/100;
    printf ("%f",si);
    return 0 ;
}
