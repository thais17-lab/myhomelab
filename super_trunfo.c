#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Atributos da primeira carta
    char estado_1;
    char cod_carta_1[3];
    char cidade_1[15];
    int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_t_1;

    // Atributos da segunda carta
    char estado_2;
    char cod_carta_2[3];
    char cidade_2[15];
    int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_t_2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Recolhendo os dados da primeira carta
    printf("Primeira carta:\n_________________\nDigite o código do estado: ");
    scanf("%c", &estado_1);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_1);

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao_1);

    printf("Informe a área: ");
    scanf("%f", &area_1);

    printf("Informe o PIB: ");
    scanf("%f", &pib_1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos_t_1);

    // Recolhendo os dados da segunda carta
    printf("\n\nSegunda carta:\n_________________\nDigite o código do estado: ");
    scanf("%c", &estado_2);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_2);

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao_2);

    printf("Informe a área: ");
    scanf("%f", &area_2);

    printf("Informe o PIB: ");
    scanf("%f", &pib_2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos_t_2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo os dados da primeira carta
    printf("\n\nCarta 1:\nEstado: %c\nCódigo: %s \nNome da cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f\nNúmero de Pontos Turísticos: %d", estado_1, cod_carta_1, cidade_1, populacao_1, area_1, pib_1, num_pontos_t_1);

    // Exibindo os dados da segunda carta
    printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s \nNome da cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f\nNúmero de Pontos Turísticos: %d\n\n", estado_2, cod_carta_2, cidade_2, populacao_2, area_2, pib_2, num_pontos_t_2);
   
    return 0;
}
