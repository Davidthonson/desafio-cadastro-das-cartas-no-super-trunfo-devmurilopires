#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[5];
    char estado2[5];
    char codigo_da_carta[20];
    char codigo_da_carta2[20];
    char nome_da_cidade[50];
    char nome_da_cidade2[50];
    int populacao = 0, pontos_turisticos = 0;
    int populacao2 = 0, pontos_turisticos2 = 0;
    float area = 0, pib = 0;
    float area2 = 0, pib2 = 0;

    printf("Cadastramento Da 1° Carta\n");
    printf("Digite a inicial do seu estado: ");
    scanf(" %s", &estado);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade);

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
    scanf(" %s", &estado2);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade2);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o pib: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //impressoes
 
    printf(" Carta 1:\n ");
    printf("Estado: %s\n", estado);
    printf(" Código: %s\n", codigo_da_carta);
    printf(" Nome da Cidade: %s\n", nome_da_cidade);
    printf(" População: %d\n", populacao);
    printf(" Área: %f\n ", area);
    printf("PIB: %f Bilhões de Reais\n ", pib);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

    printf(" Carta 2:\n ");
    printf("Estado: %s\n", estado2);
    printf(" Código: %s\n", codigo_da_carta2);
    printf(" Nome da Cidade: %s\n", nome_da_cidade2);
    printf(" População: %d\n", populacao2);
    printf(" Área: %f\n ", area2);
    printf("PIB: %f Bilhões de Reais\n ", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

    return 0;
}
