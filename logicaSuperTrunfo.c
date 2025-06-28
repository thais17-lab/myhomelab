#include <stdio.h>

int main() {
   // Atributos da primeira carta
    char estado_1[2];
    char cidade_1[30];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_t_1;
    float densidade_1;
    float percapita_1;

    // Atributos da segunda carta
    char estado_2[2];
    char cidade_2[30];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_t_2;
    float densidade_2;
    float percapita_2;

    int opcao; // Variável para o primeiro menu de opções
    int opcao_2; // Variável para o segundo menu de opções
    char* nome_atrib; // Recebe o nome do primeiro atributo selecionado
    char* nome_atrib_2; // Recebe o nome do segundo atributo selecionado
    float valor_atrib_1; // Recebe o valor do primeiro atributo selecionado referente a carta 1
    float valor_atrib_2; // Recebe o valor do primeiro atributo selecionado referente a carta 2
    float valor_atrib_1_2; // Recebe o valor do segundo atributo selecionado referente a carta 1
    float valor_atrib_2_2; // Recebe o valor do segundo atributo selecionado referente a carta 2
    int carta; // Número da carta vencedora referente ao primeiro atributo selecionado
    int carta_2; // Número da carta vencedora referente ao segundo atributo selecionado
    float poder; // "Super poder" da primeira carta (soma dos valores de seus atributos selecionados)
    float poder_2; // "Super poder" da segunda carta (soma dos valores de seus atributos selecionados)

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
    printf("Selecione o primeiro atributo para comparação:\n________________________________\n");
    printf("1. Nome do país\n2. População\n3. Área\n4. PIB\n5. Número de pontos turísticos\n6. Densidade demográfica\n\nOpção: ");
    scanf("%d", &opcao);

    if (opcao <= 0 || opcao > 6) {
        printf("Opção inválida. Tente novamente.\n");
        return 1;
    }

    printf("\n\n\n");
    printf("Selecione o segundo atributo para comparação:\n________________________________\n");

    if (opcao != 1) {
        printf("1. Nome do país\n");
    }
    if (opcao != 2) {
        printf("2. População\n");
    }
    if (opcao != 3) {
        printf("3. Área\n");
    }
    if (opcao != 4) {
        printf("4. PIB\n");
    }
    if (opcao != 5) {
        printf("5. Número de pontos turísticos\n");
    }
    if (opcao != 6) {
        printf("6. Densidade demográfica\n");
    }

    if (opcao <= 0 || opcao > 6) {
        printf("Opção inválida. Tente novamente.\n");
        return 1;
    }

    printf("\nOpção: ");
    scanf("%d", &opcao_2);

    if (opcao == opcao_2){
        printf("\n\n\n");
        printf("Esse atributo já foi selecionado! Selecione um atributo diferente.");
        return 1;
    }

    switch (opcao)
    {
    case 1:
        nome_atrib = "Nome da cidade";
        break;
    case 2:
        nome_atrib = "População";
        valor_atrib_1 = (float) populacao_1;
        valor_atrib_2 = (float) populacao_2;

        if (valor_atrib_1 > valor_atrib_2) {
            carta = 1;
        } else if (valor_atrib_1 < valor_atrib_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 3:
        nome_atrib = "Área";
        valor_atrib_1 = area_1;
        valor_atrib_2 = area_2;

        if (valor_atrib_1 > valor_atrib_2) {
            carta = 1;
        } else if (valor_atrib_1 < valor_atrib_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 4:
        nome_atrib = "PIB";
        valor_atrib_1 = pib_1;
        valor_atrib_2 = pib_2;

        if (valor_atrib_1 > valor_atrib_2) {
            carta = 1;
        } else if (valor_atrib_1 < valor_atrib_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 5:
        nome_atrib = "Número de pontos turísticos";
        valor_atrib_1 = (float) num_pontos_t_1;
        valor_atrib_2 = (float) num_pontos_t_2;

        if (valor_atrib_1 > valor_atrib_2) {
            carta = 1;
        } else if (valor_atrib_1 < valor_atrib_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    case 6:
        nome_atrib = "Densidade demográfica";
        valor_atrib_1 = densidade_1;
        valor_atrib_2 = densidade_2;

        if (valor_atrib_1 < valor_atrib_2) {
            carta = 1;
        } else if (valor_atrib_1 > valor_atrib_2) {
            carta = 2;
        } else {
            carta = 0;
        }
        
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        return 1;
    }

    switch (opcao_2)
    {
    case 1:
        nome_atrib_2 = "Nome da cidade";
        break;
    case 2:
        nome_atrib_2 = "População";
        valor_atrib_1_2 = (float) populacao_1;
        valor_atrib_2_2 = (float) populacao_2;

        if (valor_atrib_1_2 > valor_atrib_2_2) {
            carta_2 = 1;
        } else if (valor_atrib_1_2 < valor_atrib_2_2) {
            carta_2 = 2;
        } else {
            carta_2 = 0;
        }
        
        break;
    case 3:
        nome_atrib_2 = "Área";
        valor_atrib_1_2 = area_1;
        valor_atrib_2_2 = area_2;

        if (valor_atrib_1_2 > valor_atrib_2_2) {
            carta_2 = 1;
        } else if (valor_atrib_1_2 < valor_atrib_2_2) {
            carta_2 = 2;
        } else {
            carta_2 = 0;
        }
        
        break;
    case 4:
        nome_atrib_2 = "PIB";
        valor_atrib_1_2 = pib_1;
        valor_atrib_2_2 = pib_2;

        if (valor_atrib_1_2 > valor_atrib_2_2) {
            carta_2 = 1;
        } else if (valor_atrib_1_2 < valor_atrib_2_2) {
            carta_2 = 2;
        } else {
            carta_2 = 0;
        }
        
        break;
    case 5:
        nome_atrib_2 = "Número de pontos turísticos";
        valor_atrib_1_2 = (float) num_pontos_t_1;
        valor_atrib_2_2 = (float) num_pontos_t_2;

        if (valor_atrib_1_2 > valor_atrib_2_2) {
            carta_2 = 1;
        } else if (valor_atrib_1_2 < valor_atrib_2_2) {
            carta_2 = 2;
        } else {
            carta_2 = 0;
        }
        
        break;
    case 6:
        nome_atrib_2 = "Densidade demográfica";
        valor_atrib_1_2 = densidade_1;
        valor_atrib_2_2 = densidade_2;

        if (valor_atrib_1_2 < valor_atrib_2_2) {
            carta_2 = 1;
        } else if (valor_atrib_1_2 > valor_atrib_2_2) {
            carta_2 = 2;
        } else {
            carta_2 = 0;
        }
        
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        return 1;
    }

    // Compara os atributos numéricos e exibindo o resultado da comparação entre as cartas
    printf("\n\n");
    printf("Comparação das cartas:\n\n");
    printf("Cidade da carta 1: %s (%s) / Cidade da carta 2: %s (%s)\n", cidade_1, estado_1, cidade_2, estado_2);
    printf("Primeiro atributo selecionado: %s\n", nome_atrib);
    printf("Segundo atributo selecionado: %s\n", nome_atrib_2);

    if (opcao != 1){
        printf("\n%s (Carta 1): %.2f\n%s (Carta 2): %.2f\n", nome_atrib, valor_atrib_1, nome_atrib, valor_atrib_2);

        if (carta == 0){
            printf("Empate!\n");
        } else {
            printf("Carta vencedora: %d\n", carta);
        }

        if (opcao == 6){
            valor_atrib_1 = valor_atrib_1 * -1;
            valor_atrib_2 = valor_atrib_2 * -1;
        }
    }

    if (opcao_2 != 1){
        printf("\n%s (Carta 1): %.2f\n%s (Carta 2): %.2f\n", nome_atrib_2, valor_atrib_1_2, nome_atrib_2, valor_atrib_2_2);

        if (carta_2 == 0){
            printf("Empate!\n");
        } else {
            printf("Carta vencedora: %d\n", carta_2);
        }

        if (opcao_2 == 6){
            valor_atrib_1_2 = valor_atrib_1_2 * -1;
            valor_atrib_2_2 = valor_atrib_2_2 * -1;
        }
    }

    poder = valor_atrib_1 + valor_atrib_1_2; // Super poder da carta 1
    poder_2 = valor_atrib_2 + valor_atrib_2_2; // Super poder da carta 2

    printf("\nValor total da carta 1: %.0f\nValor total da carta 2: %.0f\n", poder, poder_2);

    if (poder > poder_2){
        printf("Carta vencedora: 1");
    } else if (poder < poder_2) {
        printf("Carta vencedora: 2");
    } else {
        printf("Empate!");
    }

    printf("\n\n\n");
    
    return 0;
}
