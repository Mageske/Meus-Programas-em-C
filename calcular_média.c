#include <stdio.h>
int main() {
    float prova1, prova2, prova3, prova4;
    float media;

    printf("Prova 1: "); scanf(" %f", &prova1);
    printf("Prova 2: "); scanf(" %f", &prova2);
    printf("Prova 3: "); scanf(" %f", &prova3);
    printf("Prova 4: "); scanf(" %f", &prova4);

    media = prova1 + prova2 + prova3 + prova4;
    media /= 4;

    printf("A Média do Aluno é: %.2f", media);

    return 0;
}