#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[4];
    char codigo2[4];
    int pontos_turisticos1, pontos_turisticos2, populacao1, populacao2;
    char cidade1[50];
    char cidade2[50];
    float area1, area2, PIB1, PIB2;

    printf("Olá bem vindo ao jogo Super trunfo \nVamos começar!!!\n");
    printf("\nDigite uma letra de A a H para a carta1: ");
    scanf(" %c", &estado1);
    printf("Digite uma letra de A a H para a carta2: ");
    scanf(" %c", &estado2);

    printf("\nDigite o código da carta1 com a letra que digitou anteriormente de 01 a 04 (Ex:A01, B02): ");
    scanf("%s", &codigo1);
    printf("Digite o código da carta2 com a letra que digitou anteriormente de 01 a 04 (Ex:A01, B02): ");
    scanf("%s", &codigo2);

    printf("\nDigite o nome da cidade para carta1: ");
    scanf("%s", &cidade1);
    printf("Digite o nome da cidade para carta2: ");
    scanf("%s", &cidade2);

    printf("\nDigite o número de habitantes de %s: ", cidade1);
    scanf("%d", &populacao1);
    printf("Digite o número de habitantes de %s: ", cidade2);
    scanf("%d", &populacao2);

    printf("\nDigte a Área de %s em Km²: ", cidade1);
    scanf("%f", &area1);
    printf("Digte a Área da %s em Km²: ", cidade2);
    scanf("%f", &area2);

    printf("\nDigite o PIB de %s: ", cidade1);
    scanf("%f", &PIB1);
    printf("Digite o PIB da %s: ", cidade2);
    scanf("%f", &PIB2);

    printf("\nDigite o número de pontos turisticos de %s: ", cidade1);
    scanf("%d", &pontos_turisticos1);
    printf("Digite o número de pontos turisticos de %s: ", cidade2);
    scanf("%d", &pontos_turisticos2);

    printf("\nCartas criadas com sucesso!!!\n");

    printf("\nCarta 1: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f Km² \nPIB: %.2f Bilhões de reais "\
    "\nNúmero de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, pontos_turisticos1);

    printf("\nCarta 2: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f Km² \nPIB: %.2f Bilhões de reais "\
    "\nNúmero de Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, pontos_turisticos2);

    return 0;
}