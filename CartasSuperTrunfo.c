#include <stdio.h>

int main() {
    char estado[50];
    char codigoCarta[50];
    char cidade[50];
    int população;
    float  area;
    float pib;
    int pontosTuristicos;

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf ("Digite o código da carta: ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &população);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    float pibPercapita = pib / (float) população;
    float densidade = (float) população / area;
    
    char estado2[50];
    char codigoCarta2[50];
    char cidade2[50];
    int população2;
    float  area2;
    float pib2;
    int pontosTuristicos2;

    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf ("Digite o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &população2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float pibPercapita2 = pib2 / (float) população2;
    float densidade2 = (float) população2 / area2;

    printf(" - Estado: %s \n  - Código da carta: %s \n  - Cidade: %s \n ", estado, codigoCarta, cidade);
    printf("\n - População: %d \n  - Área: %.2f \n  - PIB: %.2f \n  - Pontos turísticos:  %d \n ", população, area, pib, pontosTuristicos);
    printf("Renda Per capita da cidade 1 é: %2f\n Densidade populacional da cidade 1: %2f", pibPercapita, densidade);

    printf("\n - Estado: %s \n  - Código da carta: %s \n  - Cidade: %s \n ", estado2, codigoCarta2, cidade2);
    printf("\n - População: %d \n  - Área: %.2f \n  - PIB: %.2f \n  - Pontos turísticos: %d \n ", população2, area2, pib2, pontosTuristicos2);
    printf("Renda Per capita da cidade 2 é: %2f\n Densidade populacional da cidade 2: %2f", pibPercapita2, densidade2);

    return 0;
}
