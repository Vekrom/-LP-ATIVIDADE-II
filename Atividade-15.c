#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main() {
    int opcao;
    float valor; 
    float resultado;

setlocale(LC_ALL,"portugues");

    while (1) {
        printf("Selecione uma op��o de convers�o:\n");
        printf("1. Converter quil�metros => Milhas\n");
        printf("2. Converter Celsius => Fahrenheit\n");
        printf("0. Para sair do programa\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
            printf("Saindo do programa\n");
            case 1:
                printf("Informe a dist�ncia em Quil�metros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quil�metros = a %.2f Milhas.\n", valor, resultado);
                break; 
            case 2:
                printf("Informe a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9 / 5) + 32;
                printf("%.2f graus Celsius = a %.2f graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Op��o inv�lida!\n"); 
                printf("Por gentileza escolha uma op��o v�lida.\n");
                break;    
        }
    }
                return 0;
}