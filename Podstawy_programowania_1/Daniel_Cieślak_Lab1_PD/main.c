#include <stdio.h>
#define PI 3.1415
double calculate_area(double r)
{
return PI*r*r;
}
double radius;
int main()
{
puts("Podaj d�ugo�� promienia ko�a");
scanf("%lf",&radius);
//Program sprawdza, czy promie� ma warto�� wi�ksz� lub r�wn� zero.
if(radius>0.0)
printf("Pole ko�a o promieniu %lf cm wynosi %lf cm^2.\n"
,radius,calculate_area(radius));
else
puts("Podana d�ugo�� promienia jest nieprawid�owa.");
return 0;
}
