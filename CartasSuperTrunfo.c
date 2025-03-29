#include <stdio.h>      

int main() {     
    char estado1, estado2;     
    char carta1[50], carta2[50];     
    char cidade1[50], cidade2[50];     
    int populacao1, populacao2;     
    float area1, area2;     
    float pib1, pib2;     
    int npt1, npt2;
    
    printf("*** Dados da Carta 1: ***\n");      

    printf("Digite seu estado:\n");     
    getchar();
    scanf("%c", &estado1);      

    printf("Digite o código da carta:\n");     
    scanf("%s", carta1);      

    printf("Digite sua cidade:\n");     
    scanf("%s", cidade1);      

    printf("Digite a população:\n");     
    scanf("%d", &populacao1);      

    printf("Digite sua área:\n");     
    scanf("%f", &area1);      

    printf("Digite o PIB:\n");     
    scanf("%f", &pib1);      

    printf("Digite o número de pontos turísticos:\n");     
    scanf("%d", &npt1);
    
    printf("CARTA 1\n");     
    printf("Estado_1: %c\n", estado1);     
    printf("Código_1: %s\n", carta1);     
    printf("Nome da Cidade_1: %s\n", cidade1);     
    printf("População_1: %d\n", populacao1);     
    printf("Área_1: %.2f km²\n", area1);     
    printf("PIB_1: %.2f bilhões de reais\n", pib1);     
    printf("Número de Pontos Turísticos_1: %d\n", npt1); 
    printf("Densidade Populacional da Carta 1: %.2f habitantes por km²\n", populacao1 / area1);     

    printf("*** Dados da Carta 2: ***\n");      

    printf("Digite seu estado:\n");     
    getchar();
    scanf("%c", &estado2);      

    printf("Digite o código da carta:\n");     
    scanf("%s", carta2);      

    printf("Digite sua cidade:\n");     
    scanf("%s", cidade2);      

    printf("Digite a população:\n");     
    scanf("%d", &populacao2);      

    printf("Digite sua área:\n");     
    scanf("%f", &area2);      

    printf("Digite o PIB:\n");     
    scanf("%f", &pib2);      

    printf("Digite o número de pontos turísticos:\n");     
    scanf("%d", &npt2);      

    printf("CARTA 2\n");     
    printf("Estado_2: %c\n", estado2);     
    printf("Código_2: %s\n", carta2);     
    printf("Nome da Cidade_2: %s\n", cidade2);     
    printf("População_2: %d\n", populacao2);     
    printf("Área_2: %.2f km²\n", area2);     
    printf("PIB_2: %.2f bilhões de reais\n", pib2);     
    printf("Número de Pontos Turísticos_2: %d\n", npt2);  
    printf("Densidade Populacional da Carta 2: %.2f habitantes por km²\n", populacao2 / area2);
    
    return 0; 
}