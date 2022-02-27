#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void generate_numbers(int tab[]){
    int number;
    for(int i=0;i<30;i++){
        srand(time(0));
        sleep(1);
        number=rand()%201-100;
        tab[i]=number;
        int a=i+1;
        printf("Element tablicy nr. %d wynosi %d \n",a,tab[i]);
    }
    return;
}
int calculate_1(int tab[]){
    int score=0;
    for(int i=0;i<30;i++){
        score=score+tab[i];
    }
    return score;
}
int calculate_2(int score){
    int score2=score/30;
    printf("Srednia wynosi: %d \n",score2);
    return score2;
}
int calculate_3(int score2, int tab[]){
    int score3=0;
    for(int i=0;i<30;i++){
       score3=score3+(tab[i]-score2)*(tab[i]-score2);
    }
    score3=sqrt(score3/30);
    printf("Odchylenie wynosi: %d",score3);
    return score3;
}
int main()
{
    printf("Start programu \n");
    int tab[30];
    generate_numbers(tab);
    int score=calculate_1(tab);
    int score2=calculate_2(score);
    int score3=calculate_3(score2, tab);
}
