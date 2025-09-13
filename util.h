#ifndef UTIL_H
#define UTIL_H

typedef struct {
    int carta;
    char estado[3];
    int numeroCodigo;
    char codigo[10];
    char nome[10];
    unsigned long int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
    float densidade;
    float PIBperCapita;
    float superPoder;
} Dados;

void limparBuffer();
void obterInformacao(Dados* jogador);
int verificaResultado(int jogador1, int jogador2, char* carta1, char* carta2, char* ptrResultado);
void exibirResultados(Dados* jogador1, Dados* jogador2);

#endif
