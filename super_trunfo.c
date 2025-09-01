#include <stdio.h>

int main() {
    //vamos declarar variáveis
    char estado1, estado2;
    int numeroCodigo1, numeroCodigo2;
    char codigo1[10], codigo2[10];
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;

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

    //vamos imprimir os dados da Carta 1
    printf("\nCarta 1:\n");
    sprintf(codigo1, "%c%02d", estado1, numeroCodigo1);
    printf("Estado: %c\nCódigo: %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %d\n", nome1, populacao1);
    printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\n", area1, PIB1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    //vamos imprimir os dados da Carta 2
    printf("Carta 2:\n");
    sprintf(codigo2, "%c%02d", estado2, numeroCodigo2);
    printf("Estado: %c\nCódigo: %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %d\n", nome2, populacao2);
    printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\n", area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

