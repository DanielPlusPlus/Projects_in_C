#include <stdio.h>
#include <stdlib.h>

void generate_numbers(int tab1[4][3]){
    int number;
    srand(time(0));
    for(int i=0;i<4;i++)
        for(int j=0;j<3;j++){
            number=((rand()%11)-5);
            tab1[i][j]=number;
            // int a=i+1;
            //printf("Element tablicy nr. %d wynosi %d \n",a,tab[i]);
        }
    return;
}

void display_tab1(int tab1[4][3]){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%2d ",tab1[i][j]);
        }
        printf("\n");
    }
}

void max(int tab1[4][3]){
    int max1=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(tab1[i][j]>max1){
                max1=tab1[i][j];
            }
        }
    }
    printf("Max wynosi: %d",max1);
}

void min(int tab1[4][3]){
    int min1=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(tab1[i][j]<min1){
                min1=tab1[i][j];
            }
        }
    }
    printf("\nMin wynosi: %d",min1);
}

int main()
{
  int tab1[4][3];
  generate_numbers(tab1);
  display_tab1(tab1);
  max(tab1);
  min(tab1);
}
