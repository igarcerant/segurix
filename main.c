#include <stdio.h>
#include <stdlib.h>

int prompt(char*mensaje)
{
    int a;
    printf("%s ", mensaje);
    fflush(stdout);
    scanf("%d", &a);
    return a;
}

int main (int argc,char ** argv)
{
    int a, b, c;
    printf("hello, world!\n");
    a = prompt("Ingresar el primer numero:");
    b = prompt("Ingresar el segundo numero:");
    c = a + b;
    printf("la suma de %d mas %d es igual a %d\n", a, b, c);
    return EXIT_SUCCESS;
}

