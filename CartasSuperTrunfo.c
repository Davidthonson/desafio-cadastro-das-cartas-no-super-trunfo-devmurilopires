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

   //carta 2
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



    //calculos carta 1
    densidade_populacional = (float) populacao / area;
    pib_percapta = (float) pib / populacao;

    //Calculos carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_percapta2 = (float) pib2 / populacao2;
    
    //impressoes
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_percapta);

    printf(" Carta 2:\n ");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_percapta2);
    
    return 0;
}