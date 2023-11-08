#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2, calc, resultado;

 printf("Digite um número: ");
 scanf("%d",&num1);
 printf("Digite um número: ");
 scanf("%d",&num2);
 printf("Digite a operação\n+ | 1\n- | 2\n");
 scanf("%d",&calc);

 switch (calc)
 {
 case 1:
 resultado = num1 + num2;
     break;
 case 2:
 resultado = num1 + num2;     
 
 default:
    break;
 }
    printf("Resultado: %d", resultado);
    return 0;
}

