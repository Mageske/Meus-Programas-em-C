#include <stdio.h>
int main() {
    // Jogador 1 //
    char codigo1[50], estado1[50], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;
    // Jogador 2 //
    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;
    //Leitura Jogador 1 //
    printf("            Jogador 1 \n");
    printf("Estado: "); scanf(" %s", estado1);
    printf("Código: "); scanf(" %s", codigo1);
    printf("Cidade: "); scanf(" %s", cidade1);
    printf("População: "); scanf(" %d", &populacao1);
    printf("Área: "); scanf(" %f", &area1);
    printf("Pib: "); scanf(" %f", &pib1);
    printf("Pontos Turísticos: "); scanf(" %d", &pontos1);
    //Leitura Jogador 2 //
    printf("             Jogador 2  \n");
    printf("Estado: "); scanf(" %s", estado2);
    printf("Código: "); scanf(" %s", codigo2);
    printf("Cidade: "); scanf(" %s", cidade2);
    printf("População: "); scanf(" %d", &populacao2);
    printf("Área: "); scanf(" %f", &area2);
    printf("Pib: "); scanf(" %f", &pib2);
    printf("Pontos Turísticos: "); scanf(" %d", &pontos2);
    //Informações dos Jogadores//
    printf("\nCarta 1:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2f km2\n Pib: %.2f bilhões de reais\n Pontos Turisticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);
     printf("\nCarta 2:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2f km2\n Pib: %.2f bilhões de reais\n Pontos Turisticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);
     
     return 0;
    
}