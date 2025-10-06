#include <stdio.h>

int main() {
    char estado;
    char codigo[4]; // até 3 caracteres + '\0'
    char cidade[20];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Carta 1:\n");

    // Validação do estado
    do {
        printf("Digite o Estado (A - H): ");
        scanf(" %c", &estado);

        if (estado < 'A' || estado > 'H') {
            printf("O estado '%c' é inválido. Tente novamente.\n", estado);
        }
    } while (estado < 'A' || estado > 'H');

    // Código da carta
    printf("Digite o código da carta: ");
    scanf(" %3s", codigo);

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade); // permite nomes com espaço

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &pontos_turisticos);

    // Exibe os dados para conferência
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);


    char estado2;
    char codigo2[4]; // até 3 caracteres + '\0'
    char cidade2[20];
    float populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\n Carta 2:");

    // Validação do estado
    do {
        printf("\n Digite o Estado (A - H): ");
        scanf(" %c", &estado2);

        if (estado2 < 'A' || estado2 > 'H') {
            printf("O estado '%c' é inválido. Tente novamente.\n", estado2);
        }
    } while (estado2 < 'A' || estado2 > 'H');

    // Código da carta
    printf("Digite o código da carta: ");
    scanf(" %3s", codigo2);

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // permite nomes com espaço

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &pontos_turisticos2);

    // Exibe os dados para conferência
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);


}
