#include <stdio.h>
#include <string.h>

int main() {
    char estado[5];
    char estado2[5];
    char codigo_da_carta[20];
    char codigo_da_carta2[20];
    char nome_da_cidade[50];
    char nome_da_cidade2[50];
    int populacao, populacao2;
    int pontos_turisticos = 0, pontos_turisticos2 = 0;
    float area = 0, pib = 0;
    float area2 = 0, pib2 = 0;
    float densidade_populacional, pib_percapta, densidade_populacional2, pib_percapta2;
    float super_poderCarta1, super_poderCarta2 ;
    int opcao, opcao2;
    float soma_carta1, soma_carta2;

    // Cadastramento da 1ª Carta
    printf("Cadastramento Da 1° Carta\n");
    printf("Digite a inicial do seu estado: ");
    scanf("%s", estado);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o buffer
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0';

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    // Cadastramento da 2ª Carta
    printf("Cadastramento Da 2° Carta\n");
    printf("Digite a inicial do seu estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o buffer
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o pib: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 1
    densidade_populacional = (float) populacao / area;
    pib_percapta = (float) pib / populacao;
    super_poderCarta1 = (float)populacao + area + pib + (float)pontos_turisticos + pib_percapta;

    // Cálculos da Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_percapta2 = (float)pib2 / populacao2;
    super_poderCarta2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_percapta2 ;

    // Impressão das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_percapta);
    printf("Super Poder: %.2f\n", super_poderCarta1);

    printf("*******************************\n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_percapta2);
    printf("Super Poder: %.2f\n", super_poderCarta2);
    
    printf("*******************************\n");
    
    // Comparação de atributos


    printf("### Comparação de Cartas ###\n");
    printf("Escolha um Atributo para Comparação.\n");
    printf("1. População\n");
    printf("2. Área \n");
    printf("3. PIB\n");
    printf("4. Densidade demográfica\n");
    printf("5. Pontos turísticos\n");
    printf("Escolha sua Opção: ");
    scanf("%d", &opcao);

    //menu interativo
    if (opcao == 1) {
        printf("Escolha mais um Atributo para Comparação.\n");
        printf("2. Área \n");
        printf("3. PIB\n");
        printf("4. Densidade demográfica\n");
        printf("5. Pontos turísticos\n");
        printf("Escolha sua Opção: ");
        scanf("%d", &opcao2);
    } else if (opcao == 2) {
        printf("Escolha mais um Atributo para Comparação.\n");
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Densidade demográfica\n");
        printf("5. Pontos turísticos\n");
        printf("Escolha sua Opção: ");
        scanf("%d", &opcao2);
    } else if (opcao == 3) {
        printf("Escolha mais um Atributo para Comparação.\n");
        printf("1. População\n");
        printf("2. Área \n");
        printf("4. Densidade demográfica\n");
        printf("5. Pontos turísticos\n");
        printf("Escolha sua Opção: ");
        scanf("%d", &opcao2);
    } else if (opcao == 4) {
        printf("Escolha mais um Atributo para Comparação.\n");
        printf("1. População\n");
        printf("2. Área \n");
        printf("3. PIB\n");
        printf("5. Pontos turísticos\n");
        printf("Escolha sua Opção: ");
        scanf("%d", &opcao2);
    } else if (opcao == 5) {
        printf("Escolha mais um Atributo para Comparação.\n");
        printf("1. População\n");
        printf("2. Área \n");
        printf("3. PIB\n");
        printf("4. Densidade demográfica\n");
        printf("Escolha sua Opção: ");
        scanf("%d", &opcao2);
    } else{
        printf("Opção inválida!");
    }
    
    
//comparação cartas
    switch (opcao) {
    case 1:
        if (populacao > populacao2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - População - %d\n", populacao );
            printf("Carta 2 - População - %d\n", populacao2 );
            printf("Resultado Carta 1 %s Venceu!\n", nome_da_cidade);
        } else if (populacao == populacao2){
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - População - %d\n", populacao );
            printf("Carta 2 - População - %d\n", populacao2 );
            printf("### Empate ###");
        }else {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - População - %d\n", populacao );
            printf("Carta 2 - População - %d\n", populacao2 );
            printf("Resultado Carta 2 %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 2:
        if (area > area2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Área - %.2f km²\n", area );
            printf("Carta 2 - Área - %.2f km²\n", area2 );
            printf("Resultado Carta 1 %s Venceu!\n", nome_da_cidade);

        } else if (area == area2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Área - %.2f km²\n", area );
            printf("Carta 2 - Área - %.2f km²\n", area2 );
            printf("### Empate ###");
        }else {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Área - %.2f km²\n", area );
            printf("Carta 2 - Área - %.2f km²\n", area2 );
            printf("Resultado Carta 2 %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 3:
        if (pib > pib2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - PIB - %.2f\n", pib );
            printf("Carta 2 - PIB - %.2f\n", pib2 );
            printf("Resultado Carta 1-  %s Venceu!\n", nome_da_cidade);
        }else if (pib == pib2){
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - PIB - %.2f \n", pib );
            printf("Carta 2 - PIB - %.2f \n", pib2 );
            printf("### Empate ###");
        } else {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - PIB - %.2f\n", pib );
            printf("Carta 2 - PIB - %.2f\n", pib2 );
            printf("Resultado Carta 2 - %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 4:
        if (densidade_populacional < densidade_populacional2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional );
            printf("Carta 2 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional2 );
            printf("Resultado Carta 1 - %s Venceu!\n", nome_da_cidade);
        }else if (densidade_populacional == densidade_populacional2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Densidade Populacional - %.2f km²\n", densidade_populacional );
            printf("Carta 2 - Densidade Populacional - %.2f km²\n", densidade_populacional2 );
            printf("### Empate ###");
        } else {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional);
            printf("Carta 2 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional2 );
            printf("Resultado Carta 2 - %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 5:
        if (pontos_turisticos > pontos_turisticos2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Pontos Turísticos - %d \n", pontos_turisticos );
            printf("Carta 2 - Pontos Turísticos - %d \n", pontos_turisticos2 );
            printf("Resultado Carta 1 - %s Venceu!\n", nome_da_cidade);
        }else if (pontos_turisticos == pontos_turisticos2) {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Pontos Turísticos - %d \n", pontos_turisticos );
            printf("Carta 2 - Pontos Turísticos - %d \n", pontos_turisticos2 );
            printf("### Empate ###");
        } else {
            printf("\nResultado 1° Atributo\n");
            printf("Carta 1 - Pontos Turísticos - %d \n", pontos_turisticos );
            printf("Carta 2 - Pontos Turísticos - %d \n", pontos_turisticos2 );
            printf("Resultado Carta 2 - %s Venceu!\n", nome_da_cidade2);
        }
        break;
    default:
        printf("Opção Incorreta");
        break;
        
    }


    switch (opcao2) {
    case 1:
        if (populacao > populacao2) {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - População - %d\n", populacao );
            printf("Carta 2 - População - %d\n", populacao2 );
            printf("Resultado Carta 1 %s Venceu!\n", nome_da_cidade);
        
        } else if (populacao == populacao2){
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - População - %d\n", populacao );
            printf("Carta 2 - População - %d\n", populacao2 );
            printf("### Empate ###");
        }else {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - População - %d\n", populacao );
            printf("Carta 2 - População - %d\n", populacao2 );
            printf("Resultado Carta 2 %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 2:
        if (area > area2) {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - Área - %.2f km²\n", area );
            printf("Carta 2 - Área - %.2f km²\n", area2 );
            printf("Resultado Carta 1 %s Venceu!\n", nome_da_cidade);
        } else if (area == area2) {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - Área - %.2f km²\n", area );
            printf("Carta 2 - Área - %.2f km²\n", area2 );
            printf("### Empate ###");
        }else {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - Área - %.2f km²\n", area );
            printf("Carta 2 - Área - %.2f km²\n", area2 );
            printf("Resultado Carta 2 %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 3:
        if (pib > pib2) {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - PIB - %.2f\n", pib );
            printf("Carta 2 - PIB - %.2f\n", pib2 );
            printf("Resultado Carta 1-  %s Venceu!\n", nome_da_cidade);
        }else if (pib == pib2){
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - PIB - %.2f km²\n", pib );
            printf("Carta 2 - PIB - %.2f km²\n", pib2 );
            printf("### Empate ###");
        } else {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - PIB - %.2f\n", pib );
            printf("Carta 2 - PIB - %.2f\n", pib2 );
            printf("Resultado Carta 2 - %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 4:
        if (densidade_populacional < densidade_populacional2) {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional );
            printf("Carta 2 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional2 );
            printf("Resultado Carta 1 - %s Venceu!\n", nome_da_cidade);
        }else if (densidade_populacional == densidade_populacional2) {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - Densidade Populacional - %.2f km²\n", densidade_populacional );
            printf("Carta 2 - Densidade Populacional - %.2f km²\n", densidade_populacional2 );
            printf("### Empate ###");
        } else {
            printf("\nResultado 2° Atributo\n");;
            printf("Carta 1 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional);
            printf("Carta 2 - Densidade Populacional - %.2f hab/km²\n", densidade_populacional2 );
            printf("Resultado Carta 2 - %s Venceu!\n", nome_da_cidade2);
        }
        break;
    case 5:
        if (pontos_turisticos > pontos_turisticos2) {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - Pontos Turísticos - %d \n", pontos_turisticos );
            printf("Carta 2 - Pontos Turísticos - %d \n", pontos_turisticos2 );
            printf("Resultado Carta 1 - %s Venceu!\n", nome_da_cidade);
        }else if (pontos_turisticos == pontos_turisticos2) {
            printf("\nResultado 2° Atributo\n");;
            printf("Carta 1 - Pontos Turísticos - %d \n", pontos_turisticos );
            printf("Carta 2 - Pontos Turísticos - %d \n", pontos_turisticos2 );
            printf("### Empate ###");
        } else {
            printf("\nResultado 2° Atributo\n");
            printf("Carta 1 - Pontos Turísticos - %d \n", pontos_turisticos );
            printf("Carta 2 - Pontos Turísticos - %d \n", pontos_turisticos2 );
            printf("Resultado Carta 2 - %s Venceu!\n", nome_da_cidade2);
        }
        break;
    default:
        printf("Opção Incorreta");
        break;
        
    }


    printf("\n### Comparação Final - Soma dos Atributos ###\n");

    // Primeiro atributo
    switch (opcao) {
        case 1:
            soma_carta1 += populacao;
            soma_carta2 += populacao2;
            break;
        case 2:
            soma_carta1 += area;
            soma_carta2 += area2;
            break;
        case 3:
            soma_carta1 += pib;
            soma_carta2 += pib2;
            break;
        case 4:
            soma_carta1 += densidade_populacional;
            soma_carta2 += densidade_populacional2;
            break;
        case 5:
            soma_carta1 += pontos_turisticos;
            soma_carta2 += pontos_turisticos2;
            break;
    }

    // Segundo atributo
    switch (opcao2) {
        case 1:
            soma_carta1 += populacao;
            soma_carta2 += populacao2;
            break;
        case 2:
            soma_carta1 += area;
            soma_carta2 += area2;
            break;
        case 3:
            soma_carta1 += pib;
            soma_carta2 += pib2;
            break;
        case 4:
            soma_carta1 += densidade_populacional;
            soma_carta2 += densidade_populacional2;
            break;
        case 5:
            soma_carta1 += pontos_turisticos;
            soma_carta2 += pontos_turisticos2;
            break;
    }

    printf("Soma dos atributos - Carta 1: %.2f\n", soma_carta1);
    printf("Soma dos atributos - Carta 2: %.2f\n", soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("Resultado Final: Carta 1 - %s VENCEU pela soma dos atributos!\n", nome_da_cidade);
    } else if (soma_carta2 > soma_carta1) {
        printf("Resultado Final: Carta 2 - %s VENCEU pela soma dos atributos!\n", nome_da_cidade2);
    } else {
        printf("Resultado Final: EMPATE na soma dos atributos!\n");
    }

    return 0;
}
