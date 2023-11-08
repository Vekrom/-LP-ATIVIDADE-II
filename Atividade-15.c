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
        printf("Selecione uma opção de conversão:\n");
        printf("1. Converter quilômetros => Milhas\n");
        printf("2. Converter Celsius => Fahrenheit\n");
        printf("0. Para sair do programa\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
            printf("Saindo do programa\n");
            case 1:
                printf("Informe a distância em Quilômetros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quilômetros = a %.2f Milhas.\n", valor, resultado);
                break; 
            case 2:
                printf("Informe a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9 / 5) + 32;
                printf("%.2f graus Celsius = a %.2f graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida!\n"); 
                printf("Por gentileza escolha uma opção válida.\n");
                break;    
        }
    }
                return 0;
}