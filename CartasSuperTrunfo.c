#include <stdio.h>

int main(){
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
    float inverso_densidadeCarta1, inverso_densidadeCarta2;
    float super_poderCarta1, super_poderCarta2 ;

    // Cadastramento da 1ª Carta
    printf("Cadastramento Da 1° Carta\n");
    printf("Digite a inicial do seu estado: ");
    scanf("%s", estado);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o buffer
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);

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
    inverso_densidadeCarta1 = area / (float)populacao;
    super_poderCarta1 = (float)populacao + area + pib + (float)pontos_turisticos + pib_percapta + inverso_densidadeCarta1;

    // Cálculos da Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_percapta2 = (float)pib2 / populacao2;
    inverso_densidadeCarta2 = area2 / (float)populacao2;
    super_poderCarta2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_percapta2 + inverso_densidadeCarta2;

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

    // Comparação de atributos
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib > pib2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos > pontos_turisticos2) ? 1 : 2, (pontos_turisticos > pontos_turisticos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional < densidade_populacional2) ? 1 : 2, (densidade_populacional < densidade_populacional2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_percapta > pib_percapta2) ? 1 : 2, (pib_percapta > pib_percapta2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poderCarta1 > super_poderCarta2) ? 1 : 2, (super_poderCarta1 > super_poderCarta2) ? 1 : 0);

    // Pontuação Final
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    pontos_carta1 += (populacao > populacao2);
    pontos_carta2 += (populacao <= populacao2);

    pontos_carta1 += (area > area2);
    pontos_carta2 += (area <= area2);

    pontos_carta1 += (pib > pib2);
    pontos_carta2 += (pib <= pib2);

    pontos_carta1 += (pontos_turisticos > pontos_turisticos2);
    pontos_carta2 += (pontos_turisticos <= pontos_turisticos2);

    pontos_carta1 += (densidade_populacional < densidade_populacional2);
    pontos_carta2 += (densidade_populacional >= densidade_populacional2);

    pontos_carta1 += (pib_percapta > pib_percapta2);
    pontos_carta2 += (pib_percapta <= pib_percapta2);

    pontos_carta1 += (super_poderCarta1 > super_poderCarta2);
    pontos_carta2 += (super_poderCarta1 <= super_poderCarta2);

    printf("\nPontuação Final:\n");
    printf("Carta 1: %d pontos\n", pontos_carta1);
    printf("Carta 2: %d pontos\n", pontos_carta2);

    return 0;
}
