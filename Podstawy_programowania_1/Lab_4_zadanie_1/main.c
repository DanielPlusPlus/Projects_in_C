#include <stdio.h>
#include <stdlib.h>

void f1(int a, int b, int c){
    if((a>=b)&&(a>=c))
       printf("Najwieksza liczba jest %d",a);
    if((b>=a)&&(b>=c))
       printf("Najwieksza liczba jest %d",b);
    if((c>=a)&&(c>=b))
       printf("Najwieksza liczba jest %d",c);
    return 0;
}

int main()
{
    int a=0,  b=0, c=0;
    printf("Podaj a,b,c \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    f1(a,b,c);
}
