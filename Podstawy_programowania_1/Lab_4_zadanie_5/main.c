#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dlugoscPodstawy=0, wysokoscOstroslupa=0, polePodstawy=0, wysokoscBoku=0, poleBoku=0, poleCalkowite=0, a=0;

void poleCalkowiteF(float dlugoscPodstawy, float wysokoscOstroslupa){
    polePodstawy=dlugoscPodstawy*dlugoscPodstawy;
    wysokoscBoku=sqrt(dlugoscPodstawy/2*dlugoscPodstawy/2+wysokoscOstroslupa*wysokoscOstroslupa);
    poleBoku=(dlugoscPodstawy/2*wysokoscBoku);
    poleCalkowite=polePodstawy+4*poleBoku;
    printf("Pole calkowite wynosi: %f",poleCalkowite);
}

int main()
{
    printf("Podaj dlugosc podstawy\n");
    scanf("%f",&dlugoscPodstawy);
    printf("Podaj wysokosc ostroslupa\n");
    scanf("%f",&wysokoscOstroslupa);
    poleCalkowiteF(dlugoscPodstawy, wysokoscOstroslupa);
}
