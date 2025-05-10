#include <stdio.h>

int main()
{
    // Declaracao de variaveis
    int populacao[2], pontos[2];
    float area[2], pib[2], densidadep[2], pibper[2];
    char estado[2][10], CDcarta[2][10], Ncidade[2][10];

    // Cadastramento carta 1
    printf("Cadastramento de Cartas \n Numero: 1 \n Digite o Estado da Cartas uma letra de 'A' a 'H' (Maiusculo) \n");
    scanf(" %s", &estado[0]);

    printf("Digite o Codigo da Carta  com Letra do estado (Maiusculo) seguida de um numero de 01 a 04 \n");
    scanf(" %s", &CDcarta[0]);

    printf("Digite o nome da cidade \n");
    scanf(" %s", &Ncidade[0]);

    printf("Digite o numero de Papulacao \n");
    scanf(" %i", &populacao[0]);

    printf("Digite a area da cidade em quilometros quadrados \n");
    scanf(" %f", &area[0]);

    printf("Digite o PIB \n");
    scanf(" %f", &pib[0]);

    printf("Digite o Numero de Pontos Turisticos \n");
    scanf(" %i", &pontos[0]);

    // Cadastramento carta 2
    printf("Cadastramento de Cartas \n Numero: 2 \n Digite o Estado da Cartas uma letra de 'A' a 'H' (Maiusculo) \n");
    scanf(" %s", &estado[1]);

    printf("Digite o Codigo da Carta  com Letra do estado (Maiusculo) seguida de um numero de 01 a 04 \n");
    scanf(" %s", &CDcarta[1]);

    printf("Digite o nome da cidade \n");
    scanf(" %s", &Ncidade[1]);

    printf("Digite o numero de Papulacao \n");
    scanf(" %i", &populacao[1]);

    printf("Digite a area da cidade em quilometros quadrados \n");
    scanf(" %f", &area[1]);

    printf("Digite o PIB \n");
    scanf(" %f", &pib[1]);

    printf("Digite o Numero de Pontos Turisticos \n");
    scanf(" %i", &pontos[1]);
   
    //Calculo PIB per Capita
    pibper[0] = (float) pib[0]/populacao[0];
    pibper[1] = (float) pib[1]/populacao[1];
   
    //Calculo Densidade Populacional
    densidadep[0] = (float) populacao[0]/area[0];
    densidadep[1] = (float) populacao[1]/area[1];

    // Imprimir na tela Carta 1
    printf(" Carta : 1\n Estado : %s\n Codigo : %s\n Nome da Cidade : %s\n Populacao : %i\n Area: %.2f\n PIB: %.2f\n Numero de Pontos Turisticos: %i\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n ", &estado[0], &CDcarta[0], &Ncidade[0], populacao[0], area[0], pib[0], pontos[0], densidadep[0], pibper[0]);

    // Pula linha
    printf("\n");

    // Imprimi na tela Carta 1
    printf(" Carta : 2\n Estado : %s\n Codigo : %s\n Nome da Cidade : %s\n Populacao : %i\n Area: %.2f\n PIB: %.2f\n Numero de Pontos Turisticos: %i\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n ", &estado[1], &CDcarta[1], &Ncidade[1], populacao[1], area[1], pib[1], pontos[1], densidadep[1], pibper[1]);

    return 0;
}
