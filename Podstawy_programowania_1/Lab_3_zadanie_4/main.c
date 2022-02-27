#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, ak, q, s;
    printf("Program obliczajacy sume ciagu geometrycznego. \n");
    printf("Podaj pierwszy wyraz ciagu. \n");
    scanf("%f",&a);
    printf("Podaj ostatni wyraz ciagu. \n");
    scanf("%f",&ak);
    printf("Podaj iloraz ciagu. \n");
    scanf("%f",&q);
    if((q>0)&&(q>ak)){
       printf("Zle dane");
    }
    else if((q<0)&&(q<ak)){
        printf("Zle dane");
    }
    else{
        s=a;
        printf("%f \n",a);
        if(ak>0){
            while(a<ak){
                    a*=q;
                    s+=a;
                    printf("%f \n",a);
                }
        }
        else{
            while(a>ak){
                    a*=q;
                    s+=a;
                    printf("%f \n",a);
                }
        }
        printf("Suma wynosi %f \n",s);
    }
    return 0;
}
