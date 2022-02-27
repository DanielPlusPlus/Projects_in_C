#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int generate_numbers(){
    int number;
    srand(time(0));
    sleep(1);
    number=rand()%201-100;
    return number;
}

int main()
{
    printf("Start programu \n");
    int tab[30];
    for(int i=0;i<30;i++){
        tab[i]=generate_numbers();
        int a=i+1;
        printf("Element tablicy nr. %d wynosi %d \n",a,tab[i]);
    }
    int score=0;
    for(int i=0;i<30;i++){
        score=score+tab[i];
    }
    int score2=score/30;
    printf("Srednia wynosi: %d",score2);
}
