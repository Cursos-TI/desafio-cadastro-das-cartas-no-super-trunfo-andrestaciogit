#include <stdio.h>

int main() {
    char estado;
    char carta[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int npt;

    printf("Digite seu estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite sua área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt);

    printf("CARTA 1 \n");
    printf("Estado_1: %c \n", estado);
    printf("Código_1: %s \n", carta);
    printf("Nome da Cidade_1: %s \n", cidade);
    printf("População_1: %ld \n", populacao);
    printf("Área_1: %.2f km² \n", area);
    printf("PIB_1: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos_1: %d \n", npt);
    
    return 0;
}
