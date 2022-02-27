#include <stdio.h>
#include <stdlib.h>

void generate_numbers(double tab1[4][3]){
    double number;
    srand(time(0));
    for(int i=0;i<4;i++)
        for(int j=0;j<3;j++){
            number=-11+rand()%21+rand()/(RAND_MAX+1.0);;
            tab1[i][j]=number;
            // int a=i+1;
            //printf("Element tablicy nr. %d wynosi %d \n",a,tab[i]);
        }
    return;
}

void display_tab1(double tab1[4][3]){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%f ",tab1[i][j]);
        }
        printf("\n");
    }
}

void scalars(double tab1[4][3]){
    puts("Podaj skalar:");
    double scalar1;
    scanf("%lf",&scalar1);
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            tab1[i][j]=tab1[i][j]*scalar1;
            printf("%f ",tab1[i][j]);
        }
        printf("\n");
}
}

int main()
{
  double tab1[4][3];
  generate_numbers(tab1);
  display_tab1(tab1);
  scalars(tab1);
  return 0;
}
