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
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_t_1;
    float densidade_1;
    float percapita_1;
    float poder_1;

    // Atributos da segunda carta
    char estado_2;
    char cod_carta_2[3];
    char cidade_2[15];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_t_2;
    float densidade_2;
    float percapita_2;
    float poder_2;

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
    scanf("%lu", &populacao_1);

    printf("Informe a área: ");
    scanf("%f", &area_1);

    printf("Informe o PIB: ");
    scanf("%f", &pib_1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos_t_1);

    // Cálculo da densidade populacional e da renda per capita da primeira carta
    densidade_1 = populacao_1 / area_1;
    percapita_1 = pib_1 / populacao_1;

    // Cálculo do "Super Poder" da primeira carta
    poder_1 = (float) populacao_1 + area_1 + pib_1 + (float) num_pontos_t_1 + percapita_1 - densidade_1;

    // Recolhendo os dados da segunda carta
    printf("\nSegunda carta:\n_________________\nDigite o código do estado: ");
    scanf("%c", &estado_2);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_2);

    printf("Informe o número de habitantes: ");
    scanf("%lu", &populacao_2);

    printf("Informe a área: ");
    scanf("%f", &area_2);

    printf("Informe o PIB: ");
    scanf("%f", &pib_2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos_t_2);

    // Cálculo da densidade populacional e da renda per capita da segunda carta
    densidade_2 = populacao_2 / area_2;
    percapita_2 = pib_2 / populacao_2;

    // Cálculo do "Super Poder" da segunda carta
    poder_2 = (float) populacao_2 + area_2 + pib_2 + (float) num_pontos_t_2 + percapita_2 - densidade_2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo os dados da primeira carta
    printf("\n\n\nCarta 1:\nEstado: %c\nCódigo: %s \nNome da cidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado_1, cod_carta_1, cidade_1, populacao_1, area_1, pib_1, num_pontos_t_1, densidade_1, percapita_1);

    // Exibindo os dados da segunda carta
    printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s \nNome da cidade: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado_2, cod_carta_2, cidade_2, populacao_2, area_2, pib_2, num_pontos_t_2, densidade_2, percapita_2);

    // Comparando os atributos numéricos e exibindo o resultado da comparação entre as cartas
    printf("\n\n\nComparação de Cartas:\n_________________________\n");

    int result = populacao_2 > populacao_1;
    printf("População: Carta %d venceu\n", 1 + result);

    result = area_2 > area_1;
    printf("Área: Carta %d venceu\n", 1 + result);

    result = pib_2 > pib_1;
    printf("PIB: Carta %d venceu\n", 1 + result);

    result = num_pontos_t_2 > num_pontos_t_1;
    printf("Pontos Turísticos: Carta %d venceu\n", 1 + result);

    result = densidade_1 > densidade_2;
    printf("Densidade Populacional: Carta %d venceu\n", 1 + result);

    result = percapita_2 > percapita_1;
    printf("PIB per Capita: Carta %d venceu\n", 1 + result);
    
    result = poder_2 > poder_1;
    printf("Super Poder: Carta %d venceu\n\n\n", 1 + result);
   
    return 0;
}
