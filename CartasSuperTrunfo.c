#include <stdio.h>

int main() {
    char estado[50];
    char codigoCarta[50];
    char cidade[50];
    unsigned long int populacao;
    float  area;
    float pib;
    int pontosTuristicos;

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf ("Digite o código da carta: ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade);

    printf("Digite a populacao:");
    scanf("%u", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    float pibPercapita = pib / (float) populacao;
    float densidade = (float) populacao / area;
    
    float superPoder1 = populacao + area + pontosTuristicos + pib + pibPercapita - densidade;

    char estado2[50];
    char codigoCarta2[50];
    char cidade2[50];
    unsigned long int populacao2;
    float  area2;
    float pib2;
    int pontosTuristicos2;

    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf ("Digite o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%u", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float pibPercapita2 = pib2 / (float) populacao2;
    float densidade2 = (float) populacao2 / area2;

    float superPoder2 = populacao2 + area2 + pontosTuristicos2 + pib2 + pibPercapita2 - densidade2;

    printf(" - Estado: %s \n  - Código da carta: %s \n  - Cidade: %s \n ", estado, codigoCarta, cidade);
    printf("\n - populacao: %u \n  - Área: %.2f \n  - PIB: %.2f \n  - Pontos turísticos:  %d \n ", populacao, area, pib, pontosTuristicos);
    printf("Renda Per capita da cidade 1 é: %2f\n Densidade populacional da cidade 1: %2f", pibPercapita, densidade);

    printf("\n - Estado: %s \n  - Código da carta: %s \n  - Cidade: %s \n ", estado2, codigoCarta2, cidade2);
    printf("\n - populacao: %u \n  - Área: %.2f \n  - PIB: %.2f \n  - Pontos turísticos: %d \n ", populacao2, area2, pib2, pontosTuristicos2);
    printf("Renda Per capita da cidade 2 é: %2f\n Densidade populacional da cidade 2: %2f", pibPercapita2, densidade2);

    printf(" O valor do super poder 1 (%.2f)\n", superPoder1);
    printf(" O valor do super poder 2 (%.2f)\n", superPoder2);
    printf("Resultado 1 para carta 1 resultado 0 para carta 2\n");
    printf("Poder: %s\n", superPoder1 > superPoder2 ? estado : estado2);
    printf("populacao: %s\n", populacao > populacao2 ? estado : estado2);
    printf("Área: %s\n", area > area2 ? estado : estado2);
    printf("Pib: %s\n", pib > pib2 ? estado : estado2);
    printf("Pontos Turisticos: %s\n", pontosTuristicos > pontosTuristicos2 ? estado : estado2);
    printf("Pib Per Capita: %s\n", pibPercapita > pibPercapita2 ? estado : estado2);
    printf("Densidade Populacional: %s\n", densidade < densidade2 ? estado : estado2);

    int opcao;
    printf("Menu Principal\n");
    printf("1 Nome do país\n");
    printf("2 populacao\n");
    printf("3. Area\n");
    printf("4 pib: \n");
    printf("5 Números de pontos turísticos\n");
    printf("6 Densidade demográfica\n");
    printf("7 Sair\n");
    scanf("%d", &opcao);
    
    switch (opcao   ) {
        case 1: 
            printf(" - Estado: %s \n  - Código da carta: %s \n  - Cidade: %s \n ", estado, codigoCarta, cidade);
            printf("\n - populacao: %u \n  - Área: %.2f \n  - PIB: %.2f \n  - Pontos turísticos:  %d \n ", populacao, area, pib, pontosTuristicos);
            printf("Renda Per capita da cidade 1 é: %2f\n Densidade populacional da cidade 1: %2f", pibPercapita, densidade);
    
            printf("\n - Estado: %s \n  - Código da carta: %s \n  - Cidade: %s \n ", estado2, codigoCarta2, cidade2);
            printf("\n - populacao: %u \n  - Área: %.2f \n  - PIB: %.2f \n  - Pontos turísticos: %d \n ", populacao2, area2, pib2, pontosTuristicos2);
            printf("Renda Per capita da cidade 2 é: %2f\n Densidade populacional da cidade 2: %2f", pibPercapita2, densidade2);
            
            break;

        case 2:
            if (populacao > populacao2) {
                printf("a populacao do %s é maior!\n", estado);
            } else if (populacao < populacao2) {
                printf("a populacao do %s  é maior!\n", estado2);
            } else {
                printf("Populações iguais! \n");
            }
            break;

        case 3:
            if ( area > area2) {
                printf("a %.2f é maior!\n", area);
            } else if (area < area2) {
                printf("a %.2f é maior!\n", area2);
            } else {
                printf("As areas são equivalentes\n");
            }
            break;

        case 4:
            if (pib > pib2) {
                printf("O pib do %s é maior!", estado);
            } else if (pib < pib2){
                printf("O pib do %s é maior!", estado2);
            } else {
                printf("Os pibs são equivalentes!");
            }
            break;
            
        case 5: 
            if (pontosTuristicos > pontosTuristicos2) {
                printf("O %s tem mais pontos turisticos!", estado);
            } else if (pontosTuristicos < pontosTuristicos2) {
                printf("O %s tem mais pontos turisticos!", estado2);
            } else {
                printf("A quantidade de pontos turisticos é igual!");
            } 
            break;
        
        case 6:
            if (densidade > densidade2) {
                printf("O %s venceu", estado2);
            } else if (densidade < densidade2){
                printf("O %s venceu", estado);
            } else {
                printf("A densidade demográfica dos estados são equivalentes!");
            }
            break;
            
        case 7:
            printf("Encerrando!");
            break;
            
        default:
            printf("Escolha inválida!\n");
            break;
    }
    

    return 0;
}
