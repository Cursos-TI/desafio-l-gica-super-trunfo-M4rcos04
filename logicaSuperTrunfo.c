#include <stdio.h>
#include <string.h>

// Função para exibir o menu de atributos
void exibirMenu(int escolha1) {
    printf("\nEscolha um atributo:\n");
    if (escolha1 != 1) printf("1. População\n");
    if (escolha1 != 2) printf("2. Área\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos Turísticos\n");
    if (escolha1 != 5) printf("5. Densidade Demográfica\n");
}

int main() {
    // Definindo as duas cartas fixas para o desafio
    char nomePais1[100] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1.645; // Trilhões de dólares
    int pontosTuristicos1 = 50;

    char nomePais2[100] = "Canadá";
    int populacao2 = 38000000;
    float area2 = 9984670.0;
    float pib2 = 1.97; // Trilhões de dólares
    int pontosTuristicos2 = 40;

    // Calculando a densidade demográfica para ambas as cartas
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;
    int pontos1 = 0, pontos2 = 0;
    char nomeAtributo1[50], nomeAtributo2[50];
    float valorAtributo1_1, valorAtributo2_1;
    float valorAtributo1_2, valorAtributo2_2;

    // --- ESCOLHA DO PRIMEIRO ATRIBUTO ---
    exibirMenu(0);
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    // --- ESCOLHA DO SEGUNDO ATRIBUTO ---
    exibirMenu(escolha1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolha2);

    // Garante que o usuário não escolheu o mesmo atributo duas vezes
    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5) {
        printf("\nOpção inválida. Por favor, escolha dois atributos diferentes de 1 a 5.\n");
        return 1;
    }

    // --- COMPARAÇÃO DOS ATRIBUTOS E ACUMULANDO PONTOS ---

    // Switch para o primeiro atributo
    switch (escolha1) {
        case 1:
            strcpy(nomeAtributo1, "População");
            valorAtributo1_1 = populacao1;
            valorAtributo2_1 = populacao2;
            pontos1 += (populacao1 > populacao2) ? 1 : 0;
            pontos2 += (populacao2 > populacao1) ? 1 : 0;
            break;
        case 2:
            strcpy(nomeAtributo1, "Área");
            valorAtributo1_1 = area1;
            valorAtributo2_1 = area2;
            pontos1 += (area1 > area2) ? 1 : 0;
            pontos2 += (area2 > area1) ? 1 : 0;
            break;
        case 3:
            strcpy(nomeAtributo1, "PIB");
            valorAtributo1_1 = pib1;
            valorAtributo2_1 = pib2;
            pontos1 += (pib1 > pib2) ? 1 : 0;
            pontos2 += (pib2 > pib1) ? 1 : 0;
            break;
        case 4:
            strcpy(nomeAtributo1, "Pontos Turísticos");
            valorAtributo1_1 = pontosTuristicos1;
            valorAtributo2_1 = pontosTuristicos2;
            pontos1 += (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
            pontos2 += (pontosTuristicos2 > pontosTuristicos1) ? 1 : 0;
            break;
        case 5:
            strcpy(nomeAtributo1, "Densidade Demográfica");
            valorAtributo1_1 = densidade1;
            valorAtributo2_1 = densidade2;
            // Vence o menor valor
            pontos1 += (densidade1 < densidade2) ? 1 : 0;
            pontos2 += (densidade2 < densidade1) ? 1 : 0;
            break;
    }

    // Switch para o segundo atributo
    switch (escolha2) {
        case 1:
            strcpy(nomeAtributo2, "População");
            valorAtributo1_2 = populacao1;
            valorAtributo2_2 = populacao2;
            pontos1 += (populacao1 > populacao2) ? 1 : 0;
            pontos2 += (populacao2 > populacao1) ? 1 : 0;
            break;
        case 2:
            strcpy(nomeAtributo2, "Área");
            valorAtributo1_2 = area1;
            valorAtributo2_2 = area2;
            pontos1 += (area1 > area2) ? 1 : 0;
            pontos2 += (area2 > area1) ? 1 : 0;
            break;
        case 3:
            strcpy(nomeAtributo2, "PIB");
            valorAtributo1_2 = pib1;
            valorAtributo2_2 = pib2;
            pontos1 += (pib1 > pib2) ? 1 : 0;
            pontos2 += (pib2 > pib1) ? 1 : 0;
            break;
        case 4:
            strcpy(nomeAtributo2, "Pontos Turísticos");
            valorAtributo1_2 = pontosTuristicos1;
            valorAtributo2_2 = pontosTuristicos2;
            pontos1 += (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
            pontos2 += (pontosTuristicos2 > pontosTuristicos1) ? 1 : 0;
            break;
        case 5:
            strcpy(nomeAtributo2, "Densidade Demográfica");
            valorAtributo1_2 = densidade1;
            valorAtributo2_2 = densidade2;
            // Vence o menor valor
            pontos1 += (densidade1 < densidade2) ? 1 : 0;
            pontos2 += (densidade2 < densidade1) ? 1 : 0;
            break;
    }

    // --- EXIBIÇÃO DO RESULTADO ---
    printf("\n--- Resultado da Batalha ---\n");
    printf("Atributos comparados: %s e %s\n", nomeAtributo1, nomeAtributo2);

    printf("\nCarta 1 (%s):\n", nomePais1);
    printf("  %s: %.2f\n", nomeAtributo1, valorAtributo1_1);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtributo1_2);
    printf("  Pontuação Total: %d\n", pontos1);

    printf("\nCarta 2 (%s):\n", nomePais2);
    printf("  %s: %.2f\n", nomeAtributo1, valorAtributo2_1);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtributo2_2);
    printf("  Pontuação Total: %d\n", pontos2);

    printf("\n--- Vencedor ---\n");
    if (pontos1 > pontos2) {
        printf("A Carta 1 (%s) venceu!\n", nomePais1);
    } else if (pontos2 > pontos1) {
        printf("A Carta 2 (%s) venceu!\n", nomePais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
