#include <stdio.h>

int main() {
    //vamos declarar variáveis
    char estado1, estado2;
    int numeroCodigo1, numeroCodigo2;
    char codigo1[10], codigo2[10];
    char nome1[30], nome2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float PIBperCapita1, PIBperCapita2;
    float superPoder1, superPoder2;


    //vamos inserir os dados da Carta 1
    printf("Carta 1:\nDigite Estado (ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite Código da Carta (número): ");
    scanf("%d", &numeroCodigo1);

    printf("Digite Nome da Cidade: ");
    scanf(" %[^\n]", nome1); 

    printf("Digite População: ");
    scanf("%d", &populacao1);

    printf("Digite Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite PIB: ");
    scanf("%f", &PIB1);

    printf("Digite Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //vamos calcular Densidade populacional e PIB per capita em reias Super Poder:
    densidade1 = (float) populacao1 / area1;
    PIBperCapita1 = (float) (PIB1 *1000000000)/ populacao1;
    superPoder1 = (float) (populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBperCapita1 + 1/densidade1);

    //vamos inserir os dados da Carta 2
    printf("\nCarta 2:\nDigite Estado (ex: A): ");
    scanf(" %c", &estado2);

    printf("Digite Código da Carta (número): ");
    scanf("%d", &numeroCodigo2);

    printf("Digite Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite População: ");
    scanf("%d", &populacao2);

    printf("Digite Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite PIB: ");
    scanf("%f", &PIB2);

    printf("Digite Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //vamos calcular Densidade populacional e PIB per capita em reias e Super Poder
    densidade2 = (float) populacao2 / area2;
    PIBperCapita2 = (float) (PIB2 *1000000000)/ populacao2;
    superPoder2 = (float) (populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapita2 + 1/densidade2);

    //Exibir os Resultados com Comparações
    printf("População: %s (%lu)\n", (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu", (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %s (%.0f)\n", (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu", (area1 > area2) ? 1 : 0);
    printf("PIB: %s (%.0f)\n", (PIB1 > PIB2) ? "Carta 1 venceu" : "Carta 2 venceu", (PIB1 > PIB2) ? 1 : 0);
    printf("Pontos Turísticos: %s (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 venceu" : "Carta 2 venceu", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
    printf("Densidade Populacional: %s (%.0f)\n", (densidade1 < densidade2) ? "Carta 1 venceu" : "Carta 2 venceu", (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: %s (%.0f)\n", (PIBperCapita1 > PIBperCapita2) ? "Carta 1 venceu" : "Carta 2 venceu", (PIBperCapita1 > PIBperCapita2) ? 1 : 0);
    printf("Super Poder: %s (%.0f)\n", (superPoder1 > superPoder2) ? "Carta 1 venceu" : "Carta 2 venceu", (superPoder1 > superPoder2) ? 1 : 0);
    

    //vamos imprimir os dados da Carta 1
   /* printf("\nCarta 1:\n");
    sprintf(codigo1, "%c%02d", estado1, numeroCodigo1);
    printf("Estado: %c\nCódigo: %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %lu\n", nome1, populacao1);
    printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\n", area1, PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", PIBperCapita1); */


    //vamos imprimir os dados da Carta 2
    /* printf("Carta 2:\n");
    sprintf(codigo2, "%c%02d", estado2, numeroCodigo2);
    printf("Estado: %c\nCódigo: %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %lu\n", nome2, populacao2);
    printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\n", area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);  */

    return 0;
}

