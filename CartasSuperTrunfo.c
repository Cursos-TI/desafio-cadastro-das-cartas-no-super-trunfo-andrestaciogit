#include <stdio.h>

int main() {
    char estado;
    char carta[50];
    char cidade[50];
    long long int populacao;
    float area;
    float pib;
    int npt;

    printf("Dados da Carta 1: \n");

    printf("Digite seu estado: \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%lld", &populacao);

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
    printf("População_1: %lld \n", populacao);
    printf("Área_1: %.2f km² \n", area);
    printf("PIB_1: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos_1: %d \n", npt);

    return 0;
}
#include <stdio.h>

int main() {
    char estado2;
    char carta2[50];
    char cidade2[50];
    long long int populacao2;
    float area2;
    float pib2;
    int npt2;

    printf("Dados da Carta 2: \n");

    printf("Digite seu estado: \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta2);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%lld", &populacao2);

    printf("Digite sua área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt2);

    printf("CARTA 2 \n");
    printf("Estado_2: %c \n", estado2);
    printf("Código_2: %s \n", carta2);
    printf("Nome da Cidade_2: %s \n", cidade2);
    printf("População_2: %lld \n", populacao2);
    printf("Área_2: %.2f km² \n", area2);
    printf("PIB_2: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos_2: %d \n", npt2);
    
    return 0;
}
