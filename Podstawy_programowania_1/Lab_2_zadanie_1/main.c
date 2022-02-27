#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
int main(void) {
    int a;
    srand(time(0));
    a=rand()%10;
    printf("%d\n",a);
    system("pause");
    printf("%d\n",a);
}
