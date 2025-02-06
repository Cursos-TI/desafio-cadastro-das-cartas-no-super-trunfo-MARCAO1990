#include <stdio.h>

int main() {
    int codigo;
    int cidade;
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
    char estado;
    char nome;

printf("Informe o código da carta: \n");
    
scanf("%d", &codigo);

printf("Informe o estado da cidade:\n");
      
scanf("%s", estado);

printf("Informe o nome da cidade: \n");
    
scanf("%s", nome);

printf("Informe a população da cidade: \n");

scanf("%d", &populacao);

printf("Informe a área da cidade em km²: \n");
    
scanf("%f", &area);

printf("Informe o PIB da cidade em R$): \n"); 
   
scanf("%f", &pib);
   
printf("Informe o número de pontos turísticos: \n");
scanf("%d", &pontos_turisticos);

printf("Código da carta: %d\n", codigo);
 
printf("Estado da cidade: %s\n", estado);
printf("Nome da cidade: %s\n", nome);
printf("População da cidade: %d\n", populacao);
printf("Área da cidade em km²: %.2f\n", area);
printf("PIB da cidade em R$: %.2f\n", pib);
printf("Número de pontos turísticos: %d\n", pontos_turisticos);



   


return 0;
}
