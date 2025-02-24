#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

        // cda = código da carta;
    // ndc = nome da cidade;
    // akm2 = área em km²;
    // npt = número de pontos turisticos;
    //dp = densidade populacional;
    //ppc = PIB per capita;
    //sp = super poder;
    char estado;
    char cda[10];
    char ndc[20];
    unsigned long int populacao1, populacao2;
    float akm21, akm22;
    float pib1, pib2;
    int  npt1, npt2;
    float dp1;
    float ppc1;
    float dp2;
    float ppc2;
    float sp1;
    float sp2;


    printf("Carta 1: \n");

    printf("Insira o nome do estado:\n");
    scanf("%c", &estado);

    printf("Insira o codigo da carta:\n");
    scanf("%s", &cda);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &ndc);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao1);

    printf("Insira a area em km2:\n");
    scanf("%f", &akm21);

    printf("Insira o PBI:\n");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &npt1);

    dp1 = populacao1 / akm21;
    ppc1 = pib1 / populacao1;
    sp1 = (float) populacao1 + akm21 + pib1 + npt1 + dp1 + ppc1;


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", cda);
    printf("Nome da Cidade: %s\n", ndc);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", akm21);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", npt1);
    printf("Densidade Populacional %f\n", dp1);
    printf("PIB per capita: %f\n", ppc1);
    printf("Super poder: %f\n", sp1);



    printf("Carta 2: \n");

    printf("Insira o nome do estado:\n");
    scanf("\n%c", &estado);

    printf("Insira o codigo da carta:\n");
    scanf("%s", &cda);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &ndc);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao2);

    printf("Insira a area em km2:\n");
    scanf("%f", &akm22);

    printf("Insira o PBI:\n");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &npt2);

    dp2 = populacao2 / akm22;
    ppc2 = pib2 / populacao2;
    sp2 = (float) populacao2 + akm22 + pib2 + npt2 + dp2 + ppc2;


    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", cda);
    printf("Nome da Cidade: %s\n", ndc);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", akm22);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", npt2);
    printf("Densidade Populacional %f\n", dp2);
    printf("PIB per capita: %f\n", ppc2);
    printf("Super poder: %f\n\n\n", sp2);

    printf("Carta 1 venceu = 1 \nCarta 2 venceu = 0\n\n");
    printf("Populacao vencedora: %d\n", populacao1 > populacao2);
    printf("Area vencedora: %d\n", akm21 > akm22);
    printf("PIB vencedor: %d\n", pib1 > pib2);
    printf("Numero de pontos turisticos vencedor: %d\n", npt1 > npt2);
    printf("Dencidade populacional vencedora: %d\n", dp1 < dp2);
    printf("PIB per capita vencedor: %d\n", ppc1 > ppc2);
    printf("Super poder vencedor: %d\n", sp1 > sp2);

 

    return 0;
}
