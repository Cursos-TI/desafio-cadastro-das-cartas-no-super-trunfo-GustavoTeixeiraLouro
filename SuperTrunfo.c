/*
// Entrega de trabalho para graduação em ADS (Escola Estácio de Sá)
   Feito por Gustavo Teixeira Louro

 * Desafio Super Trunfo - Países
 * Nível Novato - Cadastro Básico
 *
 * Regras:
 *  - Cadastrar duas cartas (duas cidades) manualmente via scanf
 *  - Cada carta tem os atributos:
 *      - Código da carta (ex: A01, B02)
 *      - População (int)
 *      - Área (float)
 *      - PIB (float)
 *      - Pontos turísticos (int)
 *  - Exibir os dados cadastrados de forma organizada com printf
 *
 * 🚨 Restrições:
 *  - Não usar laços (for, while)
 *  - Não usar condicionais (if, else)
 *  - Apenas leitura e exibição de dados
 *
 * Exemplo de entrada:
 *  Carta 1:
 *   Código: A01
 *  População: 1000000
 *  Área: 500.5
 *  PIB: 20000.0
 *  Pontos turísticos: 15
 */

#include <stdio.h>

int main(void) {
    // Variáveis da Carta 1
    char codigo1[4];
    int populacao1;
    float area1, pib1;
    int pontos1;

    // Variáveis da Carta 2
    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontos2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km^2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km^2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km^2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km^2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
