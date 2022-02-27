#include <stdio.h>
#define PI 3.1415
double calculate_area(double r)
{
return PI*r*r;
}
double radius;
int main()
{
puts("Podaj d³ugoœæ promienia ko³a");
scanf("%lf",&radius);
//Program sprawdza, czy promieñ ma wartoœæ wiêksz¹ lub równ¹ zero.
if(radius>0.0)
printf("Pole ko³a o promieniu %lf cm wynosi %lf cm^2.\n"
,radius,calculate_area(radius));
else
puts("Podana d³ugoœæ promienia jest nieprawid³owa.");
return 0;
}
