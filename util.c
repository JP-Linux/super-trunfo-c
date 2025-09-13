#include "util.h"
#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada
void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}
void obterInformacao(Dados* jogador)
{
    printf("\nCarta %d:\nDigite Estado (ex: BA): ", jogador->carta);
    scanf("%s", jogador->estado);
    limparBuffer();

    printf("Digite Código da Carta (número): ");
    scanf("%d", &jogador->numeroCodigo);
    limparBuffer();

    printf("Digite Nome da Cidade: ");
    scanf(" %[^\n]", jogador->nome);
    limparBuffer();

    printf("Digite População: ");
    scanf("%ld", &jogador->populacao);
    limparBuffer();

    printf("Digite Área (em km²): ");
    scanf("%f", &jogador->area);
    limparBuffer();

    printf("Digite PIB: ");
    scanf("%f", &jogador->PIB);
    limparBuffer();

    printf("Digite Número de Pontos Turísticos: ");
    scanf("%d", &jogador->pontosTuristicos);
    limparBuffer();

    // vamos calcular Densidade populacional e PIB per capita em reias Super Poder:
    jogador->densidade = (float)jogador->populacao / jogador->area;
    jogador->PIBperCapita = (float)(jogador->PIB * 1000000000) / jogador->populacao;
    jogador->superPoder = (float)(jogador->populacao + jogador->area + jogador->PIB + jogador->pontosTuristicos + jogador->PIBperCapita + 1 / jogador->densidade);
}

int verificaResultado(int jogador1, int jogador2, char* carta1, char* carta2, char* ptrResultado)
{
    /*
     * Usando o strcpy para copiarmos o segundo parametro para o primeiro
     * o resultado da condicional vai ser direcionada para o ponteiro resultado (ptrResultado).
     */
    strcpy(ptrResultado, (jogador1 > jogador2) ? carta1 : carta2);

    // Aqui irá retornar 1 se for verdadeiro e 0 se for Falso.
    return (jogador1 > jogador2);
}

void exibirResultados(Dados* jogador1, Dados* jogador2)
{
    char carta1[15] = "Carta 1 venceu";
    char carta2[15] = "Carta 2 venceu";

    /*
     * Criando aqui a cadeia de caracteres resultadoCarta, para que o ponteiro (ptrResultado) possa usar
     * o seu endereço posteriormente, sem o resultadoCarta o valor se perde quando a função verificaResultado encerrar.
     * a cadeia de caracteres resultadoCarta, vai ser responsável para receber qual carta venceu.
     */
    char resultadoCarta[15];
    char* ptrResultado = resultadoCarta;

    // a variável booleano, é responsável por receber o 0 ou 1 da função verificaResultado.
    int booleano;

    booleano = verificaResultado(jogador1->populacao, jogador2->populacao, carta1, carta2, ptrResultado);
    printf("\nPopulação: %s (%d)\n", resultadoCarta, booleano);

    booleano = verificaResultado(jogador1->area, jogador2->area, carta1, carta2, ptrResultado);
    printf("Área: %s (%d)\n", resultadoCarta, booleano);

    booleano = verificaResultado(jogador1->PIB, jogador2->PIB, carta1, carta2, ptrResultado);
    printf("PIB: %s (%d)\n", resultadoCarta, booleano);

    booleano = verificaResultado(jogador1->pontosTuristicos, jogador2->pontosTuristicos, carta1, carta2, ptrResultado);
    printf("Pontos Turísticos: %s (%d)\n", resultadoCarta, booleano);

    booleano = verificaResultado(jogador1->densidade, jogador2->densidade, carta1, carta2, ptrResultado);
    printf("Densidade Populacional: %s (%d)\n", resultadoCarta, booleano);

    booleano = verificaResultado(jogador1->PIBperCapita, jogador2->PIBperCapita, carta1, carta2, ptrResultado);
    printf("PIB per Capita: %s (%d)\n", resultadoCarta, booleano);

    booleano = verificaResultado(jogador1->superPoder, jogador2->superPoder, carta1, carta2, ptrResultado);
    printf("Super Poder: %s (%d)\n", resultadoCarta, booleano);
}
