#include <stdio.h>
#include <stdlib.h>

void zapis(FILE *f,int macierz[2][2])
{
    srand(time(NULL));
    int liczba;
    for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                    liczba=rand()%21-10;
               fprintf(f,"%3d ",liczba);
               macierz[i][j]=liczba;
            }
            fprintf(f,"\n");
}
}
void odczyt(FILE *f,int macierz[2][2]){
    for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                    printf("%3d ",macierz[i][j]);
            }
           printf("\n");
    }
}

int main()
{
    int macierz[4][4];
    FILE *plik;
    plik=fopen("plik.txt","w+");
    zapis(plik,macierz);
    odczyt(plik,macierz);
    fclose(plik);
    return 0;
}
