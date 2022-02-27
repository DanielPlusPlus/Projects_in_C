#include <stdio.h>
#include <stdlib.h>

void f1(char string1[50]){
    puts("Podaj slowo: ");
    scanf("%s",string1);
    int leng=strlen(string1)-1;
    int i=0;
    while((string1[leng-i]==string1[i]) && i<leng)
        i++;
    if (leng==i)
    printf("Slowo jest palindromem", string1);
    else
    printf("Slowo nie jest palindromem", string1);
}

int main()
{
    char string1[50];
    char string2[50];
    f1(string1);
}
