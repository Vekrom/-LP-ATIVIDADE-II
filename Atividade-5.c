#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf ("1- ingles\n");

    printf ("2- Espanhol\n");

    printf ("3- Frances\n");

    printf ("Escolha seu idioma de preferencia:");
    scanf ("%d", &idioma);

    switch (idioma)
    {
    case 1:
        printf("Welcome!");
        break;
    case 2:
        printf("Bienvenido!");
        break;
    case 3:
        printf("Accueillir!");
        break;
    }
    return 0;
}