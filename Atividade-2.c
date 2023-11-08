#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float precofinal, desconto, precodacompra;
    int dia;
  

    printf("Dia da semana: ");
    printf("Digite o Dia: ");
    scanf("%d",&dia);
    printf("Digite o preço da compra: ");
    scanf("%f", &precodacompra);
    fflush(stdin);

   
    if (precodacompra > 100)
    {

        switch (dia)
        {
        case 1:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 2:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 3:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 4:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 5:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 6:
            desconto = precodacompra * 0.15;
            precofinal = precodacompra - desconto;
            break;
        case 7:
            desconto = precodacompra * 0.15;
            precofinal = precodacompra - desconto;
            break;

        default:
            break;
        }
    }
    else
    {
        precofinal = precodacompra;
    }
    printf("\nPreço final R$:%.2f",precofinal);
    return 0;
}