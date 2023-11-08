#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int produto;

    printf ("1- Camiseta\n");

    printf ("2- Calça\n");

    printf ("3- Sapato\n");

    printf ("Digite o codigo do produto:");
    scanf ("%d", &produto);

    switch (produto)
    {
    case 1:
        printf("Camiseta\n");
        printf("R$ 40.00");
        break;
    case 2:
        printf("Calça\n");
        printf("R$ 90.00");
        break;
    case 3:
        printf("Sapato\n");
        printf("R$ 90.00");
        break;
    }
    return 0;
}