#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma cidade
struct Cidade {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função para ler os dados de uma cidade
void lerCidade(struct Cidade *cidade, int numero) {
    printf("\n--- Cadastro da Cidade %d ---\n", numero);
    
    printf("Digite a população: ");
    scanf("%d", &cidade->populacao);
    
    printf("Digite a área (km²): ");
    scanf("%f", &cidade->area);
    
    printf("Digite o PIB (em milhões R$): ");
    scanf("%f", &cidade->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

// Função para exibir os dados de uma cidade
void exibirCidade(struct Cidade cidade, int numero) {
    printf("\n--- Dados da Cidade %d ---\n", numero);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: R$ %.2f milhões\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
}

int main() {
    // Declaração das variáveis para as duas cidades
    struct Cidade cidade1, cidade2;
    
    printf("=== CADASTRO DE CIDADES ===\n");
    
    // Leitura dos dados das cidades
    lerCidade(&cidade1, 1);
    lerCidade(&cidade2, 2);
    
    printf("\n=== EXIBIÇÃO DOS DADOS ===\n");
    
    // Exibição dos dados das cidades
    exibirCidade(cidade1, 1);
    exibirCidade(cidade2, 2);
    
    return 0;
}