#include <stdio.h>

int main() {
    char estado[50];
    char codigoCarta[50];
    char cidade[50];
    unsigned int populacao;
    float area;
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
    unsigned int populacao2;
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


    int opcao;
    printf("Menu Principal\n");
    printf("1 populacao\n");
    printf("2. Area\n");
    printf("3 pib: \n");
    printf("4 Números de pontos turísticos\n");
    printf("5 Densidade demográfica\n");
    printf("6 Sair\n");
    scanf("%d", &opcao);

    float escolha1;
    float escolha2; 
    
    switch (opcao) {
        case 1:
            escolha1 = (float)populacao;
            escolha2 = (float)populacao2;
            if (populacao > populacao2) {
                printf("a populacao do %s é maior!\n", estado);
            } else if (populacao < populacao2) {
                printf("a populacao do %s  é maior!\n", estado2);
            } else {
                printf("Populações iguais! \n");
            }
            break;

        case 2:
            escolha1 = area;
            escolha2 = area2;
            if ( area > area2) {
                printf("a %.2f é maior!\n", area);
            } else if (area < area2) {
                printf("a %.2f é maior!\n", area2);
            } else {
                printf("As areas são equivalentes\n");
            }
            break;

        case 3:
            escolha1 = (float)pib;
            escolha2 = (float)pib2;
            if (pib > pib2) {
                printf("O pib do %s é maior!", estado);
            } else if (pib < pib2){
                printf("O pib do %s é maior!", estado2);
            } else {
                printf("Os pibs são equivalentes!");
            }
            break;
            
        case 4:
            escolha1 = (float)pontosTuristicos;
            escolha2 = (float)pontosTuristicos2;
            if (pontosTuristicos > pontosTuristicos2) {
                printf("O %s tem mais pontos turisticos!", estado);
            } else if (pontosTuristicos < pontosTuristicos2) {
                printf("O %s tem mais pontos turisticos!", estado2);
            } else {
                printf("A quantidade de pontos turisticos é igual!");
            } 
            break;
        
        case 5:
            escolha1 = densidade;
            escolha2 = densidade2;
            if (densidade > densidade2) {
                printf("O %s venceu", estado2);
            } else if (densidade < densidade2){
                printf("O %s venceu", estado);
            } else {
                printf("A densidade demográfica dos estados são equivalentes!");
            }
            break;
            
        case 6:
            printf("Encerrando!");
            break;
            
        default:
            printf("Escolha inválida!\n");
            break;
    }

    int opcao2;
    printf("Menu Principal\n");
    printf("1 populacao\n");
    printf("2. Area\n");
    printf("3 pib: \n");
    printf("4 Números de pontos turísticos\n");
    printf("5 Densidade demográfica\n");
    printf("6 Sair\n");
    scanf("%d", &opcao2);

    if (opcao == opcao2)
    {
     printf("Escolha opções diferentes!");
     return 0;   
    }
    

    float escolha3;
    float escolha4;

    switch (opcao2)
    {
        case 1:
        escolha3 = (float)populacao;
        escolha4 = (float)populacao2;
        if (populacao > populacao2) {
            printf("a populacao do %s é maior!\n", estado);
        } else if (populacao < populacao2) {
            printf("a populacao do %s  é maior!\n", estado2);
        } else {
            printf("Populações iguais! \n");
        }
        break;

    case 2:
        escolha3 = area;
        escolha4 = area2;
        if ( area > area2) {
            printf("a %.2f é maior!\n", area);
        } else if (area < area2) {
            printf("a %.2f é maior!\n", area2);
        } else {
            printf("As areas são equivalentes\n");
        }
        break;

    case 3:
        escolha3 = (float)pib;
        escolha4 = (float)pib2;
        if (pib > pib2) {
            printf("O pib do %s é maior!", estado);
        } else if (pib < pib2){
            printf("O pib do %s é maior!", estado2);
        } else {
            printf("Os pibs são equivalentes!");
        }
        break;
        
    case 4:
        escolha3 = (float)pontosTuristicos;
        escolha4 = (float)pontosTuristicos2;
        if (pontosTuristicos > pontosTuristicos2) {
            printf("O %s tem mais pontos turisticos!", estado);
        } else if (pontosTuristicos < pontosTuristicos2) {
            printf("O %s tem mais pontos turisticos!", estado2);
        } else {
            printf("A quantidade de pontos turisticos é igual!");
        } 
        break;
    
    case 5:
        escolha3 = densidade;
        escolha4 = densidade2;
        if (densidade > densidade2) {
            printf("O %s venceu", estado2);
        } else if (densidade < densidade2){
            printf("O %s venceu", estado);
        } else {
            printf("A densidade demográfica dos estados são equivalentes!");
        }
        break;
        
    case 6:
        printf("Encerrando!");
        break;
        
    default:
        printf("Escolha inválida!\n");
        break;
    }

    printf("Pelos dados escolhidos a carta vencedora é: %s\n", escolha1 + escolha3 > escolha2 + escolha4 ? estado : estado2);



    return 0;
}
