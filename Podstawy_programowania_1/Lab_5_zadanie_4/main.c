#include <stdio.h>
#include <stdlib.h>

float f1(float a, float b, float c){
    float pole1=a*b;
    float pole2=a*c;
    float pole3=b*c;
    float wynik=2*pole1+pole2*2+pole3*2;
    return wynik;
}
int main()
{
    float a,b,c;
    puts("Podaj szerokosc: ");
    scanf("%f",&a);
    puts("Podaj wysokosc: ");
    scanf("%f",&b);
    puts("Podaj glebokosc: ");
    scanf("%f",&c);
    float wynik=f1(a,b,c);
    printf("Wynik wynosi %f",wynik);
}
//Napisz program, kt�ry policzy pole powierzchni prostopad�o�cianu o podanej przez u�ytkownika
//wysoko�ci, szeroko�ci i g��bi
