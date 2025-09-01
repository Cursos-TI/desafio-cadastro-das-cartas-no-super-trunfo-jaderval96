#include <stdio.h>
/* Este é um programa que permite ao usuario o cadastro das cartas que seram usadas
 no jogo Super Trunfo*/
int main() {


    char estado, codigocarta[50], nomecidade[50];
    int populacao, pontosturisticos;
    float area, pib; // Declaração e inicialização das variaveis a serem usadas
    
    printf("Carta 1\n");
    printf("digite uma letra de A a H:\n");
    scanf("%c", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigocarta);

    printf("digite o nome da cidade: \n");
    scanf("%s", nomecidade);

    printf("digite a populaçao: \n");
    scanf("%d", &populacao);

    printf("digite quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("digite a area do estado: \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);


     // Segunda carta

     printf("Carta 2 \n");
      printf("digite uma letra de A a H:\n");
    scanf("%c", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigocarta);

    printf("digite o nome da cidade: \n");
    scanf("%s", nomecidade);

    printf("digite a populaçao: \n");
    scanf("%d", &populacao);

    printf("digite quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("digite a area do estado: \n");
    scanf("%f", &area);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);

   return 0;
}