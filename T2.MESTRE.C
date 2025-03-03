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

    // Menu de escolha de atributos
    int escolha1, escolha2;
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    // A primeira escolha
    printf("Escolha o primeiro atributo (1-7): ");
    scanf("%d", &escolha1);

    // O segundo atributo deve ser diferente do primeiro
    do {
        printf("Escolha o segundo atributo (1-7, diferente do primeiro): ");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    // Comparar os atributos escolhidos
    float valorCarta1 = 0, valorCarta2 = 0;
    float somaCarta1 = 0, somaCarta2 = 0;

    switch (escolha1) {
        case 1: // População
            valorCarta1 = populacao1;
            valorCarta2 = populacao2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 2: // Área
            valorCarta1 = area1;
            valorCarta2 = area2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 3: // PIB
            valorCarta1 = pib1 * 1e9;  // Converter PIB para reais
            valorCarta2 = pib2 * 1e9;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 4: // Pontos Turísticos
            valorCarta1 = pontosTuristicos1;
            valorCarta2 = pontosTuristicos2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 5: // Densidade Populacional
            valorCarta1 = densidadePopulacional1;
            valorCarta2 = densidadePopulacional2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 6: // PIB per Capita
            valorCarta1 = pibPerCapita1;
            valorCarta2 = pibPerCapita2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 7: // Super Poder
            valorCarta1 = superPoder1;
            valorCarta2 = superPoder2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
    }

    // A segunda escolha
    switch (escolha2) {
        case 1: // População
            valorCarta1 = populacao1;
            valorCarta2 = populacao2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 2: // Área
            valorCarta1 = area1;
            valorCarta2 = area2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 3: // PIB
            valorCarta1 = pib1 * 1e9;  // Converter PIB para reais
            valorCarta2 = pib2 * 1e9;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 4: // Pontos Turísticos
            valorCarta1 = pontosTuristicos1;
            valorCarta2 = pontosTuristicos2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 5: // Densidade Populacional
            valorCarta1 = densidadePopulacional1;
            valorCarta2 = densidadePopulacional2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 6: // PIB per Capita
            valorCarta1 = pibPerCapita1;
            valorCarta2 = pibPerCapita2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
        case 7: // Super Poder
            valorCarta1 = superPoder1;
            valorCarta2 = superPoder2;
            somaCarta1 += valorCarta1;
            somaCarta2 += valorCarta2;
            break;
    }

    // Exibição dos valores comparados
    printf("\nResultado da Comparação:\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);
    printf("Atributos escolhidos: ");
    switch (escolha1) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
    }
    printf(" e ");
    switch (escolha2) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
    }
    printf("\n");

    printf("Valor Carta 1 (Atributo 1): %.2f\n", valorCarta1);
    printf("Valor Carta 2 (Atributo 1): %.2f\n", valorCarta2);

    // Exibição dos resultados
    printf("Soma Carta 1: %.2f\n", somaCarta1);
    printf("Soma Carta 2: %.2f\n", somaCarta2);

    // Verificando quem venceu ou se houve empate
    if (somaCarta1 > somaCarta2) {
        printf("Carta 1 venceu a rodada!\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("Carta 2 venceu a rodada!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}