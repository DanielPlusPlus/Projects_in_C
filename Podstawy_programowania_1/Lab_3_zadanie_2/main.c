#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, ak, r, s=0;
    printf("Program obliczajacy sume ciagu arytmetycznego. \n");
    printf("Podaj pierwszy wyraz ciagu. \n");
    scanf("%f",&a);
    printf("Podaj ostatni wyraz ciagu. \n");
    scanf("%f",&ak);
    printf("Podaj roznice ciagu. \n");
    scanf("%f",&r);
    if((ak>=0)&&(r>=0)){
        while(a<=ak){
            printf("%f \n",a);
            s+=a;
            a+=r;
        }
    }
    else{
        while(a>=ak){
            printf("%f \n",a);
            s+=a;
            a+=r;
        }
    }
    printf("Suma wynosi %f \n",s);
    return 0;
}
