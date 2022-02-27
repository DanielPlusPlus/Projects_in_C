#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f1(int tab[]){
    srand(time(0));
    printf("Kolejne elementy tablicy: \n");
    for(int i=0;i<30;i++){
        tab[i]=rand()%11;
        printf("%d ",tab[i]);
    }
    printf("\n");
}
void f2(int tab[]){
    int liczba=0;
    int j=0;
    int i=0;
    for(j;j<11;j++){
        for(i;i<30;i++){
            if(tab[i]==j){
                liczba++;
            }
        }
        printf("Ilosc liczby %d: %d \n",j,liczba);
        liczba=0;
        i=0;
    }

}
int main()
{
    int tab[30];
    f1(tab);
    f2(tab);
}
