#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    float a2=0;
    printf("Podaj liczbe \n");
    scanf("%d",&a);
    a2=a;
    if(a>0)
        if(a2/2>a/2)
            printf("Liczba jest nieparzysta");
        else
            printf("Liczba jest parzysta");
    else
            if(a2/2<a/2)
            printf("Liczba jest nieparzysta");
        else
            printf("Liczba jest parzysta");
    return 0;

}
