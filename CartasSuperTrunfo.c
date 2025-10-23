#include <stdio.h>

int main(){

    char estado1[50], estado2[50];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int pontos_turisticos1, pontos_turisticos2, populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    float densidade_populacional1, densidade_populacional2, PIB_percapita1, PIB_percapita2;
    float superPoder1, superPoder2;

    printf("Olá bem vindo ao jogo Super trunfo \nVamos começar!!!\n");
    printf("\nDigite a sigla para o primeiro estado: ");
    scanf(" %s", &estado1);
    printf("Digite a sigla para o segundo estado: ");
    scanf(" %s", &estado2);

    printf("\nDigite o código da carta1 com a letra de A a H e o número de 01 a 04 (Ex:A01, B02): ");
    scanf("%s", &codigo1);
    printf("Digite o código da carta2 com a letra de A a H e o número de 01 a 04 (Ex:A01, B02): ");
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
    printf("Digite o PIB de %s: ", cidade2);
    scanf("%f", &PIB2);

    printf("\nDigite o número de pontos turisticos de %s: ", cidade1);
    scanf("%d", &pontos_turisticos1);
    printf("Digite o número de pontos turisticos de %s: ", cidade2);
    scanf("%d", &pontos_turisticos2);

    
    //calculos de váriaveis
    densidade_populacional1 = (float)(populacao1 / area1);
    densidade_populacional2 = (float)(populacao2 / area2);

    PIB_percapita1 = (float)(PIB1 / populacao1)*1000000000;
    PIB_percapita2 = (float)(PIB2 / populacao2)*1000000000;

   
    //Printa as cartas criadas
    printf("\nCartas criadas com sucesso!!!\n");

    printf("\nCarta 1: \nEstado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f Km² \nPIB: %.2f Bilhões de reais \nNúmero de Pontos Turísticos: %d "\
        "\nDensidade Populacional: %.2f hab/Km² \nPIB per Capita: %.2f Reais\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, pontos_turisticos1, densidade_populacional1, PIB_percapita1);

    printf("\nCarta 2: \nEstado: %s \nCódigo: %s \nNome da Cidade: %s \nPopulação: %d \nÁrea: %.2f Km² \nPIB: %.2f Bilhões de reais \nNúmero de Pontos Turísticos: %d "\
        "\nDensidade Populacional: %.2f hab/Km² \nPIB per Capita: %.2f Reais \n", estado2, codigo2, cidade2, populacao2, area2, PIB2, pontos_turisticos2, densidade_populacional2, PIB_percapita2);
    
   
    //printa a comparação do atributo escolhido e a carta vencedra
    printf("\n***BATALHA ENCERRADA*** \n");

    printf("Comparação de cartas (Atributo População): \n");
    printf("Carta 1 - %s-%s: %d \n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s-%s: %d \n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) Venceu! \n", cidade1);

    } else{
        printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
    }

    return 0;
}