#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero1, numero2;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("\n%d  maior que %d.", numero1, numero2);
    }
    else if (numero1 == numero2)
    {
        printf("\n numeros iguais.");
    }
    else
    {
        printf("\n%d menor que %d.", numero1, numero2);
    }
    return 0;
}