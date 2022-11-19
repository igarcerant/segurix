#include <stdio.h>
#include <stdlib.h>

int main (int argc,char ** argv)
{
    int a, b, c;
    printf("hello, world!\n");
    printf("dime el primer numero: ");
    fflush(stdout);
    scanf("%d",&a);
    printf("dime el segundo numero: ");
    fflush(stdout);
    scanf("%d",&b);
    c = a + b;
    printf("la suma de %d mas %d es igual a %d\n", a, b, c);
    return EXIT_SUCCESS;
}

