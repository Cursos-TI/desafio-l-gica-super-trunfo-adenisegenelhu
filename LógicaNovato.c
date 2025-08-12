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
    scanf("%s", &estado1);

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
    scanf("%s", &estado2);

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

    // Variáveis carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeDacidade1);
    printf("Populaçao: %d\n", populacao1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.6f reais\n", PIBperCapita1);

    // Variáveis carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeDacidade2);
    printf("Populaçao: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.6f reais\n", PIBperCapita2);

    //Comparaçao das cartas //Atributo População maior vence
    printf("\nComparação das Cartas: Atributo População\n");
    printf("Carta 1- %s (%s): %d habitantes\n", estado1, codigo1, populacao1);
    printf("Carta 2- %s (%s): %d habitantes\n", estado2, codigo2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado Carta 1 venceu!\n");
    }else {
        printf("Resultado Carta 2 venceu!\n");
    }
        

    return 0;
}