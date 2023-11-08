#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main() {
   setlocale(LC_ALL, "portuquese"); 
    
    int quantidadenotas, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas:");
    scanf("%d", &quantidadenotas);

    for (i = 0; i < quantidadenotas; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    if (quantidadenotas != 0) {
        media = soma / quantidadenotas;
        printf("A media das notas é: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi inserida.\n");
    }

    return 0;
}