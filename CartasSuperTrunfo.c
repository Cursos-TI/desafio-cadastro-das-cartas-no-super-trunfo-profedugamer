#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;

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

    //Entradas da primeira carta do jogo
    printf("Insira o código da primeira carta: \n");
    scanf("%s", &codigo);
    printf("Insira o nome da cidade: \n");
    scanf(" %s", &nome);
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Insira o valor da área (km²): \n");
    scanf("%f", &area);
    printf("Insira o PIB: \n");
    scanf("%lf", &pib);
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Imprime a primeira carta do Super Trunfo
    printf("\nCódigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área %.2f km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos Turisticos: %d\n\n", pontos_turisticos);

    return 0;
}
