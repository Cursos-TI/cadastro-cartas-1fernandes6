#include <stdio.h>

int main(){

    int atributo;
    char pais1[50], pais2[50];
    int pontos_turisticos1, pontos_turisticos2, populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    float densidade_populacional1, densidade_populacional2, PIB_percapita1, PIB_percapita2;

    printf("Olá bem vindo ao jogo Super trunfo \nVamos começar!!!\n");
    printf("\nDigite o país da primeira carta: ");
    scanf(" %s", &pais1);
    printf("Digite o país da segunda carta: ");
    scanf(" %s", &pais2);

    printf("\nDigite o número de habitantes do %s: ", pais1);
    scanf("%d", &populacao1);
    printf("Digite o número de habitantes do %s: ", pais2);
    scanf("%d", &populacao2);

    printf("\nDigte a Área do %s em Km²: ", pais1);
    scanf("%f", &area1);
    printf("Digte a Área do %s em Km²: ", pais2);
    scanf("%f", &area2);

    printf("\nDigite o PIB do %s: ", pais1);
    scanf("%f", &PIB1);
    printf("Digite o PIB do %s: ", pais2);
    scanf("%f", &PIB2);

    printf("\nDigite o número de pontos turisticos do %s: ", pais1);
    scanf("%d", &pontos_turisticos1);
    printf("Digite o número de pontos turisticos do %s: ", pais2);
    scanf("%d", &pontos_turisticos2);

    
    //calculos de váriaveis
    densidade_populacional1 = (float)(populacao1 / area1);
    densidade_populacional2 = (float)(populacao2 / area2);

    PIB_percapita1 = (float)(PIB1 / populacao1)*1000000000000;
    PIB_percapita2 = (float)(PIB2 / populacao2)*1000000000000;

   
    //Printa as cartas criadas
    printf("\nCartas criadas com sucesso!!!\n");

    printf("\nCarta 1: \nPaís: %s \nPopulação: %d \nÁrea: %.2f Km² \nPIB: %.2f Trilhões de reais \nNúmero de Pontos Turísticos: %d "\
        "\nDensidade Populacional: %.2f hab/Km² \nPIB per Capita: %.2f Reais\n", pais1, populacao1, area1, PIB1, pontos_turisticos1, densidade_populacional1, PIB_percapita1);

    printf("\nCarta 2: \nPaís: %s \nPopulação: %d \nÁrea: %.2f Km² \nPIB: %.2f Trilhões de reais \nNúmero de Pontos Turísticos: %d "\
        "\nDensidade Populacional: %.2f hab/Km² \nPIB per Capita: %.2f Reais \n", pais2, populacao2, area2, PIB2, pontos_turisticos2, densidade_populacional2, PIB_percapita2);
    
    //menu interativo para batalha
    printf("\n### SELEÇÃO DE ATRIBUTOS ###\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6.PIB per Capita\n");
    printf("Digite qual atributo das cartas você deseja comparar: ");
    scanf("%d", &atributo);

    //compara e printa o resultado da batalha
    printf("\n### %s X %s ### \n", pais1, pais2);

    switch (atributo)
    {
    case 1:
        printf("Atributo População\n");
        printf("População %s: %d \n", pais1, populacao1);
        printf("População %s: %d \n", pais2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Carta 1 (%s) Venceu!!!", pais1);

        } else if (populacao1 == populacao2){
            printf("EMPATE!");

        } else {
            printf("Carta 2 (%s) Venceu!!!", pais2);
        }
        break;
    case 2:
        printf("Atributo Área\n");
        printf("Área %s: %.2f \n", pais1, area1);
        printf("Área %s: %.2f \n", pais2, area2);
        if (area1 > area1)
        {
            printf("Carta 1 (%s) Venceu!!!", pais1);

        } else if (area1 == area2){
            printf("EMPATE!");
            
        } else {
            printf("Carta 2 (%s) Venceu!!!", pais2);
        }
        break;
    case 3:
        printf("Atributo PIB\n");
        printf("PIB %s: %.2f Trilhões de reais\n", pais1, PIB1);
        printf("PIB %s: %.2f Trilhões de reais\n", pais2, PIB2);
        if (PIB1 > PIB2)
        {
            printf("Carta 1 (%s) Venceu!!!", pais1);

        } else if (PIB1 == PIB2){
            printf("EMPATE!");
            
        } else {
            printf("Carta 2 (%s) Venceu!!!", pais2);
        }
        break;
    case 4:
        printf("Atributo Pontos Turísticos\n");
        printf("Pontos Turísticos %s: %d \n", pais1, pontos_turisticos1);
        printf("Pontos Turísticos %s: %d \n", pais2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Carta 1 (%s) Venceu!!!", pais1);

        } else if (pontos_turisticos1 == pontos_turisticos2){
            printf("EMPATE!");
            
        } else {
            printf("Carta 2 (%s) Venceu!!!", pais2);
        }
        break;
    case 5:
        printf("Densidade Populacional\n");
        printf("Densidade Populacional %s: %.2f \n", pais1, densidade_populacional1);
        printf("Densidade Populacional %s: %.2f \n", pais2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("Carta 1 (%s) Venceu!!!", pais1);

        } else if (densidade_populacional1 == densidade_populacional2){
            printf("EMPATE!");
            
        } else {
            printf("Carta 2 (%s) Venceu!!!", pais2);
        }
        break;
    case 6:
        printf("PIB per Capita\n");
        printf("PIB per Capita %s: %.2f \n", pais1, PIB_percapita1);
        printf("PIB per Capita %s: %.2f \n", pais2, PIB_percapita2);
        if (PIB_percapita1 > PIB_percapita2)
        {
            printf("Carta 1 (%s) Venceu!!!", pais1);

        } else if (PIB_percapita1 == PIB_percapita2){
            printf("EMPATE!");
            
        } else {
            printf("Carta 2 (%s) Venceu!!!", pais2);
        }
        break;
    default:
        printf("### Opção Inválida! ###");
        break;
    }

    return 0;
}