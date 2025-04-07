#include <stdio.h>      

int main() {     
    char estado1, estado2;     
    char carta1[50], carta2[50];     
    char cidade1[50], cidade2[50];     
    unsigned long int populacao1, populacao2;     
    float area1, area2;     
    double pib1, pib2;     
    int npt1, npt2;
    
    printf("*** Dados da Carta 1: ***\n");      

    printf("Digite seu estado:\n");     
    scanf(" %c", &estado1);

    printf("Digite o código da carta:\n");     
    scanf("%s", carta1);      

    printf("Digite sua cidade:\n");     
    scanf("%s", cidade1);      

    printf("Digite a população:\n");     
    scanf("%lu", &populacao1);

    printf("Digite sua área:\n");     
    scanf("%f", &area1);      

    printf("Digite o PIB:\n");  
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos:\n");     
    scanf("%d", &npt1);

    double densidade1 = (double)populacao1 / area1;
    double pibpc1 = pib1 / populacao1;
    double superpoder1 = populacao1 + area1 + pib1 + npt1 + pibpc1 + densidade1;
    
    printf("CARTA 1\n");     
    printf("Estado_1: %c\n", estado1);     
    printf("Código_1: %s\n", carta1);     
    printf("Nome da Cidade_1: %s\n", cidade1);     
    printf("População_1: %lu\n", populacao1);     
    printf("Área_1: %.2f km²\n", area1);     
    printf("PIB_1: %.2f bilhões de reais\n", pib1);     
    printf("Número de Pontos Turísticos_1: %d\n", npt1); 
    printf("Densidade Populacional da Carta 1: %.2f habitantes por km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpc1);
    printf("O Super Poder da Carta1 é: %.2f\n", superpoder1);

    printf("\n*** Dados da Carta 2: ***\n");      

    printf("Digite seu estado:\n");     
    scanf(" %c", &estado2);

    printf("Digite o código da carta:\n");     
    scanf("%s", carta2);      

    printf("Digite sua cidade:\n");     
    scanf("%s", cidade2);      

    printf("Digite a população:\n");     
    scanf("%lu", &populacao2);

    printf("Digite sua área:\n");     
    scanf("%f", &area2);      

    printf("Digite o PIB:\n");     
    scanf("%lf", &pib2);      

    printf("Digite o número de pontos turísticos:\n");     
    scanf("%d", &npt2);
    
    double densidade2 = (double)populacao2 / area2;
    double pibpc2 = pib2 / populacao2;
    double superpoder2 = populacao2 + area2 + pib2 + npt2 + pibpc2 + densidade2;

    printf("CARTA 2\n");     
    printf("Estado_2: %c\n", estado2);     
    printf("Código_2: %s\n", carta2);     
    printf("Nome da Cidade_2: %s\n", cidade2);     
    printf("População_2: %lu\n", populacao2);     
    printf("Área_2: %.2f km²\n", area2);     
    printf("PIB_2: %.2f bilhões de reais\n", pib2);     
    printf("Número de Pontos Turísticos_2: %d\n", npt2);  
    printf("Densidade Populacional da Carta 2: %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpc2);
    printf("O Super Poder da Carta2 é: %.2f\n", superpoder2);

    printf("\nComparação de Cartas\n");

    printf("População: Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu? %d\n", npt1 > npt2);
    printf("Densidade Populacional: Carta 1 venceu? %d\n", densidade1 > densidade2);
    printf("PIB per Capta: Carta 1 venceu? %d\n", pibpc1 > pibpc2);
    printf("Super Poder: Carta 1 venceu? %d\n", superpoder1 > superpoder2);

    printf("Comparação das Cartas (Atributo: PIB)\n");
    printf("Carta 1 - Goiânia (GO): %.2f\n", pib1);
    printf("Carta 2 - Palmas (TO): %.2f\n", pib2);
    if (pib1 > pib2){
        printf("Carta 1 (Goiania) venceu!\n");
    }else{
        printf("Carta 2 (Palmas) venceu!\n");
    }
    
    return 0; 
}