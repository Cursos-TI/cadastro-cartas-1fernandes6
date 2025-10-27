#include <stdio.h>

int main(){

    int atributo1, atributo2;
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
    printf("Digite o primeiro atributo para batalha: ");
    scanf("%d", &atributo1);
    printf("Digite o segundo atributo para batalha: ");
    scanf("%d", &atributo2);

    //confere se os atributos selecionados são diferentes
    if (atributo1 == atributo2){
        printf("Você não pode escolher o mesmo atributo!!!");
    } else {
   
    //compara e printa o resultado da batalha
    printf("\n### %s X %s ### \n", pais1, pais2);

    switch (atributo1)
    {
    case 1:
        printf("\nVocê escolheu o atributo População!!\n");
        printf("População %s: %d \n", pais1, populacao1);
        printf("População %s: %d \n", pais2, populacao2);
        atributo1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("\nVocê escolheu o atributo Atributo Área!!\n");
        printf("Área %s: %.2f \n", pais1, area1);
        printf("Área %s: %.2f \n", pais2, area2);
        atributo1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("\nVocê escolheu o atributo Atributo PIB!!\n");
        printf("PIB %s: %.2f \n", pais1, PIB1);
        printf("PIB %s: %.2f \n", pais2, PIB2);
        atributo1 = PIB1 > PIB2 ? 1 : 0;
        break;
    case 4:
        printf("\nVocê escolheu o atributo Atributo Pontos Turísticos!!\n");
        printf("Pontos Turísticos %s: %d \n", pais1, pontos_turisticos1);
        printf("Pontos Turísticos %s: %d \n", pais2, pontos_turisticos2);
        atributo1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
    case 5:
        printf("\nVocê escolheu o atributo Densidade Populacional!!\n");
        printf("Densidade Populacional %s: %.2f \n", pais1, densidade_populacional1);
        printf("Densidade Populacional %s: %.2f \n", pais2, densidade_populacional2);
        atributo1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;
    case 6:
        printf("\nVocê escolheu o atributo PIB per Capita!!\n");
        printf("PIB per Capita %s: %.2f \n", pais1, PIB_percapita1);
        printf("PIB per Capita %s: %.2f \n", pais2, PIB_percapita2);
        atributo1 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
        break;
    default:
        printf("### Opção Inválida! ###");
        break;
    }

    switch (atributo2)
    {
    case 1:
        printf("Você escolheu o atributo População!!\n");
        printf("População %s: %d \n", pais1, populacao1);
        printf("População %s: %d \n", pais2, populacao2);
        atributo2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo Atributo Área!!\n");
        printf("Área %s: %.2f \n", pais1, area1);
        printf("Área %s: %.2f \n", pais2, area2);
        atributo2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo Atributo PIB!!\n");
        printf("PIB %s: %.2f \n", pais1, PIB1);
        printf("PIB %s: %.2f \n", pais2, PIB2);
        atributo2 = PIB1 > PIB2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo Atributo Pontos Turísticos!!\n");
        printf("Pontos Turísticos %s: %d \n", pais1, pontos_turisticos1);
        printf("Pontos Turísticos %s: %d \n", pais2, pontos_turisticos2);
        atributo2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade Populacional!!\n");
        printf("Densidade Populacional %s: %.2f \n", pais1, densidade_populacional1);
        printf("Densidade Populacional %s: %.2f \n", pais2, densidade_populacional2);
        atributo2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo PIB per Capita!!\n");
        printf("PIB per Capita %s: %.2f \n", pais1, PIB_percapita1);
        printf("PIB per Capita %s: %.2f \n", pais2, PIB_percapita2);
        atributo2 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
        break;
    default:
        printf("### Opção Inválida! ###\n");
        break;
    }
    //apresenta o vencdor da batalha
    if (atributo1 && atributo2 == 1){
        printf("### CARTA 1 (%s) VENCEU!!! ###\n", pais1);
    } else if (atributo1 != atributo2){
        printf("### EMPATOU!!! ###\n");
    } else {
        printf("### CARTA 2 (%s) VENCEU!!! ###\n", pais2);
    }
    }
    return 0;
}