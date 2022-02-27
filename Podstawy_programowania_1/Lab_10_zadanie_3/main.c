#include <stdio.h>
#include <stdlib.h>

struct struktura
{
    int x,y;
};

void funkcja1(struct struktura *ss){
    int a,b;
    puts("Podaj czesc calkowita:");
    scanf("%d",&a);
    puts("Podaj czesc urojona:");
    scanf("%d",&b);
    ss->x=a;
    ss->y=b;
}
void funkcja2(struct struktura *ss2){
    int a,b;
    puts("Podaj czesc calkowita:");
    scanf("%d",&a);
    puts("Podaj czesc urojona:");
    scanf("%d",&b);
    ss2->x=a;
    ss2->y=b;
}

void dodawanie(struct struktura *ss,struct struktura *ss2){
    float wynik, wynik2;
    wynik=ss->x+ss2->x;
    wynik2=ss->y+ss2->y;
    if(wynik2>0)
    printf("Wynik dodawania wynosi: %f +%fj \n",wynik,wynik2);
    else
    printf("Wynik dodawania wynosi: %f %fj \n",wynik,wynik2);
}

void odejmowanie(struct struktura *ss,struct struktura *ss2){
    float wynik, wynik2;
    wynik=ss->x-ss2->x;
    wynik2=ss->y-ss2->y;
    if(wynik2>0)
    printf("Wynik odejmowania wynosi: %f +%fj \n",wynik,wynik2);
    else
    printf("Wynik odejmowania wynosi: %f %fj \n",wynik,wynik2);
}

void mnozenie(struct struktura *ss,struct struktura *ss2){
    float wynik, wynik2, wynik3, wynik4;
    wynik=ss->x*ss2->x;
    wynik2=ss->x*ss2->y;
    wynik3=ss->y*ss2->x;
    wynik4=ss->y*ss2->y;
    wynik4=wynik4*(-1);
    wynik=wynik+wynik4;
    wynik2=wynik2+wynik3;
    if(wynik2>0)
    printf("Wynik mnozenia wynosi: %f +%fj \n",wynik,wynik2);
    else
    printf("Wynik mnozenia wynosi: %f %fj \n",wynik,wynik2);
}

void dzielenie(struct struktura *ss,struct struktura *ss2){
    float wynik, wynik2;
    wynik=ss->x+ss2->x;
    wynik2=ss->y+ss2->y;
    if(wynik2>0)
    printf("Wynik dzielenia wynosi: %f + %fj \n",wynik,wynik2);
    else
    printf("Wynik dzielenia wynosi: %f %fj \n",wynik,wynik2);
}
int main()
{
    //FILE *plik;
    struct struktura ss;
    struct struktura ss2;
    funkcja1(&ss);
    funkcja2(&ss2);
    dodawanie(&ss,&ss2);
    odejmowanie(&ss,&ss2);
    mnozenie(&ss,&ss2);
    system("pause");
}
