#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);  

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);  

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);  

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2); 

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo da densidade populacional
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    
    // Cálculo do PIB per capita 
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    // Cálculo do Super Poder para cada carta
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + 
                        pib_per_capita1 + (1.0/densidade1);
    
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + 
                        pib_per_capita2 + (1.0/densidade2);

                        
    // Exibição dos dados da Carta 1
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\nComparação de Cartas:\n");
    
    // População (maior vence)
    int pop_result = (populacao1 > populacao2) ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", pop_result ? 1 : 2, pop_result);
    
    // Área (maior vence)
    int area_result = (area1 > area2) ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", area_result ? 1 : 2, area_result);
    
    // PIB (maior vence)
    int pib_result = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", pib_result ? 1 : 2, pib_result);
    
    // Pontos Turísticos (maior vence)
    int pt_result = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pt_result ? 1 : 2, pt_result);
    
    // Densidade Populacional (menor vence)
    int dens_result = (densidade1 < densidade2) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", dens_result ? 1 : 2, dens_result);
    
    // PIB per Capita (maior vence)
    int pibpc_result = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpc_result ? 1 : 2, pibpc_result);
    
    // Super Poder (maior vence)
    int sp_result = (super_poder1 > super_poder2) ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", sp_result ? 1 : 2, sp_result);

    return 0;
}