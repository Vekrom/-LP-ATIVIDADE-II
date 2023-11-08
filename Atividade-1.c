#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuquese");

  int temperatura;

  printf("Qual temperatura:");
  scanf("%d", &temperatura);

  if (temperatura >= 25){
    printf("Clima ensolarado!\n");
  }else if (temperatura < 15)
  {
   printf("Clima chuvoso!\n");
  }else{
   printf("Clima nublado!\n"); 

  }
  

 return 0;

}