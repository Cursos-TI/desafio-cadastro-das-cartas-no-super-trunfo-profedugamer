#include <stdio.h>

// Desafio 1 - Super Trunfo Países - Cadastro das cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Variáveis da primeira carta
    char codigo_da_cidade[4];
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    unsigned int densidade_populacional;
    float pib_per_capita, superpoder;


    //variáveis da segunda carta
    char codigo_da_cidade2[4];
    char nome2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
    unsigned int densidade_populacional2;
    float pib_per_capita2, superpoder2;


    // Descrição do jogo Super Trunfo Países
    printf("Bem vindo ao jogo Super Trunfo Países\n\n");
    printf("No jogo, as cartas serão divididas por estados, cada um com quatro cidades.\n");
    printf("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade define o código da carta\n(por exemplo, A01, A02, B01, B02).\n");
    printf("Para começar o jogo, cadastre suas cartas.\n\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados da primeira carta
    printf("Insira o código da primeira carta: \n");
    scanf("%s", codigo_da_cidade);
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", nome); //Entrada para aceitar espaço no nome das cidades. Comando: %[^\n]
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Insira o valor da área (km²): \n");
    scanf("%f", &area);
    printf("Insira o PIB: \n");
    scanf("%lf", &pib);
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    //Entrada de dados da segunda carta
    printf("\nInsira o código da segunda carta: \n");
    scanf("%s", codigo_da_cidade2);
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", nome2); //Entrada para aceitar espaço no nome das cidades. Comando: %[^\n]
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Insira o valor da área (km²): \n");
    scanf("%f", &area2);
    printf("Insira o PIB: \n");
    scanf("%lf", &pib2);
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    //Desafio aventureiro:
    //Foram adicionadas duas variáveis novas no inicio do documento. Elas são: Densidade populacional e PIB per Capita
    //Essas variáveis serão calculadas automaticamente
    //Densidade Populacional: População dividida pela área da cidade.
    //PIB per Capita: PIB total dividido pela população.

    //Cálculos do jogo Supertrunfo:
    //Densidade da primeira carta
    densidade_populacional = (unsigned int) populacao / area;
    pib_per_capita = (float) pib / populacao;
    
    //Densidade da segunda carta
    densidade_populacional2 = (unsigned int) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;

    //Desafio 3 - Mestre - Cálculo do Superpoder - Primeira carta e segunda carta
    // O superpoder é calculado por meio da soma de todos os atributos
    superpoder = (float) populacao + area + pib + pontos_turisticos + densidade_populacional + pib_per_capita;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição das características da primeira carta
    printf("\nCódigo da primeira carta: %s\n", codigo_da_cidade);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área %.2f km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    //Novos printf do programa - nível aventureiro
    printf("A densidade populacional é: %u\n", densidade_populacional);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita);

    //Adicionado superpoder da primeira carta
    printf("Super poder: %.2f\n", superpoder);

    //Exibição das características da segunda carta
    printf("\nCódigo da segunda carta: %s\n", codigo_da_cidade2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área %.2f km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    //Novos printf do programa - nível aventureiro
    printf("A densidade populacional é: %u\n", densidade_populacional2);
    printf("O PIB per Capita é: %.2f\n", pib_per_capita2);

    //Adicionado superpoder da segunda carta
    printf("Super poder: %.2f\n", superpoder2);

    //Desafio Mestre - Comparação das cartas
    //Densidade populacional: vence a carta com menor valor
    //Outras propriedades: vence carta com maior valor

    printf("\npopulacao > populacao2: %d\n", populacao > populacao2);
    printf("area > area2: %d\n", (int) area > area2);
    printf("pib > pib2: %d\n", (int) pib > pib2);
    printf("pontos_turisticos > pontos_turisticos2: %d\n", pontos_turisticos > pontos_turisticos2);
    printf("densidade_populacional < densidade_populacional2: %u\n", densidade_populacional < densidade_populacional2);
    printf("pib_per_capita > pib_per_capita2: %d\n", (int) pib_per_capita > pib_per_capita2);
    printf("superpoder > superpoder2: %d\n", (int) superpoder > superpoder2);

    return 0;
}
