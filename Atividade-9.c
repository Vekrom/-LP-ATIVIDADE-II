#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, num = 0, cont = 0;
    printf("Digite um nÃºmero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
      
    }
      if (cont == 2)
        {
            printf("É primo\n");
        }
        else
        {
            printf("Não é primo\n");
        }
    return 0;
}