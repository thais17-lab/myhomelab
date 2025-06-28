#include <stdio.h>

int main() {
   // Atributos da primeira carta
    char estado_1[2];
    char cidade_1[20];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_t_1;
    float densidade_1;
    float percapita_1;

    // Atributos da segunda carta
    char estado_2[2];
    char cidade_2[20];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_t_2;
    float densidade_2;
    float percapita_2;

    int opcao; // Variável para o menu de opções
    char *nome_atrib; // Recebe o nome do atributo selecionado
    float valor_atributo_1; // Recebe o valor do atributo selecionado referente a carta 1
    float valor_atributo_2; // Recebe o valor do atributo selecionado referente a carta 2
    int carta; // Número da carta vencedora

    // Coletando os dados da primeira carta
    printf("Primeira carta:\n_________________\nDigite o código do estado: ");
    scanf("%s", estado_1);

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

    
    // Coletando os dados da segunda carta
    printf("\nSegunda carta:\n_________________\nDigite o código do estado: ");
    scanf("%s", estado_2);

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


    // Cria o menu de opções
    printf("\n\n\n");
    printf("Selecione um atributo para comparação:\n________________________________\n");
    printf("1. Nome do país\n2. População\n3. Área\n4. PIB\n5. Número de pontos turísticos\n6. Densidade demográfica\n\nOpção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        nome_atrib = "Nome da cidade";
        break;
    case 2:
        nome_atrib = "População";
        valor_atributo_1 = (float) populacao_1;
        valor_atributo_2 = (float) populacao_2;

        if (valor_atributo_1 > valor_atributo_2) {
            carta = 1;
        } else if (valor_atributo_1 < valor_atributo_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 3:
        nome_atrib = "Área";
        valor_atributo_1 = area_1;
        valor_atributo_2 = area_2;

        if (valor_atributo_1 > valor_atributo_2) {
            carta = 1;
        } else if (valor_atributo_1 < valor_atributo_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 4:
        nome_atrib = "PIB";
        valor_atributo_1 = pib_1;
        valor_atributo_2 = pib_2;

        if (valor_atributo_1 > valor_atributo_2) {
            carta = 1;
        } else if (valor_atributo_1 < valor_atributo_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 5:
        nome_atrib = "Número de pontos turísticos";
        valor_atributo_1 = (float) num_pontos_t_1;
        valor_atributo_2 = (float) num_pontos_t_2;

        if (valor_atributo_1 > valor_atributo_2) {
            carta = 1;
        } else if (valor_atributo_1 < valor_atributo_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 6:
        nome_atrib = "Densidade demográfica";
        valor_atributo_1 = densidade_1;
        valor_atributo_2 = densidade_2;

        if (valor_atributo_1 < valor_atributo_2) {
            carta = 1;
        } else if (valor_atributo_1 > valor_atributo_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
    }

    // Compara os atributos numéricos e exibindo o resultado da comparação entre as cartas
    printf("\n\n\n");
    printf("Comparação de cartas:\n\n");
    printf("Cidade da carta 1: %s (%s) / Cidade da carta 2: %s (%s)\n", cidade_1, estado_1, cidade_2, estado_2);
    printf("Atributo de comparação: %s\n", nome_atrib);

    if (opcao != 1){
        printf("%s (Carta 1): %.2f / %s (Carta 2): %.2f\n", nome_atrib, valor_atributo_1, nome_atrib, valor_atributo_2);
        if (carta == 0){
            printf("Empate!");
        } else {
            printf("Carta vencedora: %d", carta);
        }
    }

    printf("\n\n\n");
    
    return 0;
}
