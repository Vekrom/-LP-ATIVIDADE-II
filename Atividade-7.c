#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int escolha;

     printf ("1- Novo \n");
    printf ("2- Carregar jogo\n");
    printf ("3- configuracoes\n");
     printf("escolha uma opcao\n");
    scanf ("%d",&escolha);

    switch (escolha) {
    case 1:
    printf ("Iniciando novo jogo...");
    break;
    case 2:
    printf ("Carregando jogo...");
    break;
    case 3:
    printf ("Abrindo configuracoes...");
    break;
    }
    return 0;
}
