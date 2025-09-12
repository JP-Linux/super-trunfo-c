#include "util.h"

int main()
{
    // Inicializando o struct Dados tudo com 0.
    Dados jogador1 = { 0 };
    Dados jogador2 = { 0 };

    // Atribuindo o valor de suas respectivas cartas para o jogador1 e jogador2
    jogador1.carta = 1;
    jogador2.carta = 2;

    // Pega as informações do jogador1 e armazena no struct Dados do jogador 1.
    obterInformacao(&jogador1);
    // Pega as informações do jogador2 e armazena no struct Dados do jogador 2.
    obterInformacao(&jogador2);

    // Mandas as informações do jogador1 e do jogador2 para ser verificada as informações e depois exibida;
    exibirResultados(&jogador1, &jogador2);

    return 0;
}
