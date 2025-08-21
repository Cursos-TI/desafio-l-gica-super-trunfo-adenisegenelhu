#include <stdio.h>

int main() {
    // Carta 1
    char estado1[20];
    char codigo1[4];
    char nomeDacidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidadepopulacional1, PIBperCapita1;

    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDacidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidadepopulacional1 = (float) populacao1 / area1;
    PIBperCapita1 = pib1 / (float) populacao1;
    
    // Carta 2
    char estado2[20];
    char codigo2[4];
    char nomeDacidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidadepopulacional2, PIBperCapita2;

    printf("\nCarta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDacidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadepopulacional2 = (float) populacao2 / area2;
    PIBperCapita2 = pib2 / (float) populacao2;

    // Menu de comparação
    int opcao1, opcao2;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Segundo menu (dinâmico)
    printf("\nEscolha o segundo atributo para comparação:\n");
    for (int i = 1; i <= 6; i++) {
        if (i == opcao1) continue; // não repetir o primeiro
        switch(i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Número de pontos turísticos\n"); break;
            case 5: printf("5 - Densidade demográfica (menor vence)\n"); break;
            case 6: printf("6 - PIB per capita\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Função auxiliar para obter valores dos atributos
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    switch(opcao1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidadepopulacional1; valor1_c2 = densidadepopulacional2; break;
        case 6: valor1_c1 = PIBperCapita1; valor1_c2 = PIBperCapita2; break;
    }
    switch(opcao2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidadepopulacional1; valor2_c2 = densidadepopulacional2; break;
        case 6: valor2_c1 = PIBperCapita1; valor2_c2 = PIBperCapita2; break;
    }

    // Comparação de atributos
    printf("\n--- Comparação ---\n");

    // Primeiro atributo
    printf("Atributo 1: ");
    (opcao1 == 1) ? printf("População\n") :
    (opcao1 == 2) ? printf("Área\n") :
    (opcao1 == 3) ? printf("PIB\n") :
    (opcao1 == 4) ? printf("Pontos turísticos\n") :
    (opcao1 == 5) ? printf("Densidade demográfica\n") :
                    printf("PIB per capita\n");

    printf("%s = %.2f | %s = %.2f\n", nomeDacidade1, valor1_c1, nomeDacidade2, valor1_c2);

    (opcao1 == 5) ? 
        (valor1_c1 < valor1_c2 ? printf("Vencedor: %s\n", nomeDacidade1) : 
        (valor1_c2 < valor1_c1 ? printf("Vencedor: %s\n", nomeDacidade2) : printf("Empate!\n"))) :
        (valor1_c1 > valor1_c2 ? printf("Vencedor: %s\n", nomeDacidade1) : 
        (valor1_c2 > valor1_c1 ? printf("Vencedor: %s\n", nomeDacidade2) : printf("Empate!\n")));

    // Segundo atributo
    printf("\nAtributo 2: ");
    (opcao2 == 1) ? printf("População\n") :
    (opcao2 == 2) ? printf("Área\n") :
    (opcao2 == 3) ? printf("PIB\n") :
    (opcao2 == 4) ? printf("Pontos turísticos\n") :
    (opcao2 == 5) ? printf("Densidade demográfica\n") :
                    printf("PIB per capita\n");

    printf("%s = %.2f | %s = %.2f\n", nomeDacidade1, valor2_c1, nomeDacidade2, valor2_c2);

    (opcao2 == 5) ? 
        (valor2_c1 < valor2_c2 ? printf("Vencedor: %s\n", nomeDacidade1) : 
        (valor2_c2 < valor2_c1 ? printf("Vencedor: %s\n", nomeDacidade2) : printf("Empate!\n"))) :
        (valor2_c1 > valor2_c2 ? printf("Vencedor: %s\n", nomeDacidade1) : 
        (valor2_c2 > valor2_c1 ? printf("Vencedor: %s\n", nomeDacidade2) : printf("Empate!\n")));

    // Soma dos atributos
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n--- Resultado Final ---\n");
    printf("Soma dos atributos:\n");
    printf("%s = %.2f | %s = %.2f\n", nomeDacidade1, soma1, nomeDacidade2, soma2);

    if (soma1 > soma2)
        printf("Vencedor final: %s\n", nomeDacidade1);
    else if (soma2 > soma1)
        printf("Vencedor final: %s\n", nomeDacidade2);
    else
        printf("Empate!\n");

    return 0;
}
