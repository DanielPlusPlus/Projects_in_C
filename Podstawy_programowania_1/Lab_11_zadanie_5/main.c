#include <stdio.h>
#include <stdlib.h>

void funkcja(FILE *plik){
    puts("Nacisnij 1 aby dodac nowy rekord, 2 aby odczytac lub 0 w przypadku zamkniecia programu.");
    int liczba;
    scanf("%d",&liczba);
    switch(liczba)
    {
        case 1:
            dopisz(plik);
            break;

        case 2:
            //odczyt();
            break;
        case 0:
            return;
            break;
    }
    return;
}

void dopisz(FILE *plik){
    char imie[50];
    char nazwisko[50];
    char wiek[50];
    char wzrost[50];
    char waga[50];
    printf("Podaj imie, nazwisko, wiek, wzrost i wage. \n");
    scanf("%s",&imie);
    fprintf(plik,"%s ",imie);
    scanf("%s",&nazwisko);
    fprintf(plik,"%s ",nazwisko);
    scanf("%s",&wiek);
    fprintf(plik,"%s ",wiek);
    scanf("%s",&waga);
    fprintf(plik,"%s ",waga);
    scanf("%s",&wzrost);
    fprintf(plik,"%s ",wzrost);
    fprintf(plik,"\n");
    return;
}

int main()
{
    FILE *plik;
    plik=fopen("plik.txt","a+");
    funkcja(plik);
    return 0;
}
