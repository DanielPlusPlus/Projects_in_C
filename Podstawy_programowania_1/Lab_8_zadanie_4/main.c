#include <string.h>
#include <stdio.h>
int main()
{
    char ciag[] = "Ala ma kota";
    /*char znaki_podzialu[] = " .-:()";
    char * token;
    printf( "Podzial tekstu %s na pojedyncze wyrazy:\n", ciag );
    token = strtok( ciag, znaki_podzialu );
    while( token != NULL )
    {
        printf( "%s\n", token );

        token = strtok( NULL, znaki_podzialu );
    }*/
    int liczba=sizeof(ciag)/sizeof(ciag[0]);
    char ciag2[liczba];
    int liczba2;
    int liczba3;
    for(int i=liczba;i>=0;i--){
        if(ciag[liczba]==' '){
            liczba2=liczba-i;
            liczba3-liczba-liczba2;

            ciag2[liczba3]=;

        }
    }
    return 0;
}
