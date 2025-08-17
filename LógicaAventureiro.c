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
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparação das Cartas:\n");
    switch(opcao) {
        case 1: // População
            printf("População: %s = %d | %s = %d\n", nomeDacidade1, populacao1, nomeDacidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomeDacidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomeDacidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %s = %.2f km² | %s = %.2f km²\n", nomeDacidade1, area1, nomeDacidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomeDacidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomeDacidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %s = %.2f | %s = %.2f\n", nomeDacidade1, pib1, nomeDacidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomeDacidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomeDacidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos: %s = %d | %s = %d\n", nomeDacidade1, pontosTuristicos1, nomeDacidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomeDacidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nomeDacidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade demográfica (menor vence!)
            printf("Densidade demográfica: %s = %.2f hab/km² | %s = %.2f hab/km²\n", nomeDacidade1, densidadepopulacional1, nomeDacidade2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2)
                printf("Vencedor: %s\n", nomeDacidade1);
            else if (densidadepopulacional2 < densidadepopulacional1)
                printf("Vencedor: %s\n", nomeDacidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha entre 1 e 5.\n");
            break;
    }

    return 0;
}
