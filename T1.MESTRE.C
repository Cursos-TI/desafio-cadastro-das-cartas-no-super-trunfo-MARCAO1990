#include <stdio.h>

int main() {
    // Variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;  
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis - densidade populacional e PIB per capita
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Dados para a carta 1
    printf("NIVEL MESTRE SUPER TRUNFO \n");
    printf("Digite os dados para a Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);  
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 * 1e9 / populacao1;  // PIB em bilhões, então multiplicamos por 1e9 para converter para reais

    //Dados para a carta 2
    printf("\nDigite os dados para a Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);  
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 * 1e9 / populacao2;  // PIB em bilhões, então multiplicamos por 1e9 para converter para reais

    // Cálculo do Super Poder para cada carta
    superPoder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    //Informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    //Informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparar População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));

    // Comparar Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));

    // Comparar PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 * 1e9 > pib2 * 1e9));

    // Comparar Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2));

    // Comparar Densidade Populacional
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidadePopulacional1 > densidadePopulacional2));

    // Comparar PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));

    // Comparar Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));

    return 0;
}