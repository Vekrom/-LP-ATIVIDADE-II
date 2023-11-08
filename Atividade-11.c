#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

  // setando acentos

  setlocale(LC_ALL, "portuguese");

  // variaveis

  char senhaSalva[200] = "123456";
  char senha[200];

  printf("Digite a senha do edificio:");
  gets(senha);
  if (strcmp(senha, senhaSalva) == 0)
  {
    printf("Bem vindo!");
  }
  else
  {

    do
    {
      printf("Senha errada digite outra senha:");
      gets(senha);
      if (strcmp(senha, senhaSalva) == 0)
      {
        printf("Bem vindo!");
      }

    } while (senha == senhaSalva);
  }

  return 0;
}