#include <stdio.h>

int main() {
    // Variáveis ​​das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis ​​calculadas
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Variável para a escolha do atributo
    int escolha;

    // Dados para a carta 1
    printf("NIVEL AVENTUREIRO SUPER TRUNFO \n");
    printf("Digite os dados para a Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 * 1e9 / populacao1;

    // Dados para a carta 2
    printf("\nDigite os dados para a Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 * 1e9 / populacao2;

    // Exibição das informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // Menu de escolha do atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Lógica de comparação com switch e if-else aninhados
    switch (escolha) {
        case 1: // População
            if (populacao1 > populacao2) {
                printf("\nCarta 1 vence! Maior população.\n");
            } else if (populacao2 > populacao1) {
                printf("\nCarta 2 vence! Maior população.\n");
            } else {
                printf("\nEmpate! Populações iguais.\n");
            }
            break;
        case 2: // Área
            if (area1 > area2) {
                printf("\nCarta 1 vence! Maior área.\n");
            } else if (area2 > area1) {
                printf("\nCarta 2 vence! Maior área.\n");
            } else {
                printf("\nEmpate! Áreas iguais.\n");
            }
            break;
        case 3: // PIB
            if (pib1 > pib2) {
                printf("\nCarta 1 vence! Maior PIB.\n");
            } else if (pib2 > pib1) {
                printf("\nCarta 2 vence! Maior PIB.\n");
            } else {
                printf("\nEmpate! PIBs iguais.\n");
            }
            break;
        case 4: // Número de Pontos Turísticos
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nCarta 1 vence! Mais pontos turísticos.\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nCarta 2 vence! Mais pontos turísticos.\n");
            } else {
                printf("\nEmpate! Mesmo número de pontos turísticos.\n");
            }
            break;
        case 5: // Densidade Populacional
            if (densidadePopulacional1 > densidadePopulacional2) {
                printf("\nCarta 1 vence! Maior densidade populacional.\n");
            } else if (densidadePopulacional2 > densidadePopulacional1) {
                printf("\nCarta 2 vence! Maior densidade populacional.\n");
            } else {
                printf("\nEmpate! Densidades populacionais iguais.\n");
            }
            break;
        case 6: // PIB per capita
            if (pibPerCapita1 > pibPerCapita2) {
                printf("\nCarta 1 vence! Maior PIB per capita.\n");
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("\nCarta 2 vence! Maior PIB per capita.\n");
            } else {
                printf("\nEmpate! PIB per capita iguais.\n");
            }
            break;
        default:
            printf("\nOpção inválida!\n");
    }

    return 0;
}