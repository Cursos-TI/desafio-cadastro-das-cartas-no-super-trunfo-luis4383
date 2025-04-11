#include <stdio.h>

int main() {
    char estado01, estado02;
    int codigodacarta01, codigodacarta02;
    char cidadeA[50], cidadeB[50];
    unsigned long int populacao01, populacao02;
    float PIBperCapita01, PIBperCapita02;
    float area01, area02;
    float densidade01, densidade02;
    float PIB01, PIB02;
    int num_pontos_tur_01, num_pontos_tur_02;
    float superPoder01, superPoder02;

    printf("carta01:\n");
    printf("Digite a letra do estado01:\n");
    scanf(" %c", &estado01);
    printf("Digite o codigo da carta01:\n");
    scanf("%d", &codigodacarta01);
    printf("Qual a cidade do estado01:\n");
    scanf("%s", cidadeA);
    printf("Numeros de pontos turisticos01:\n");
    scanf("%d", &num_pontos_tur_01);
    printf("Qual a populacao 01:\n");
    scanf("%lu", &populacao01);
    printf("Qual o PIB 01:\n");
    scanf("%f", &PIB01);
    PIBperCapita01 = PIB01 / populacao01;
    printf("Digite area01:\n");
    scanf("%f", &area01);
    densidade01 = (float)populacao01 / area01;
    printf("Densidade populacional 01: %.2f\n", densidade01);
    printf("PIB per capita 01: %.2f\n", PIBperCapita01);

    printf("\ncarta02:\n");
    printf("Digite a letra do estado02:\n");
    scanf(" %c", &estado02);
    printf("Digite o codigo da carta02:\n");
    scanf("%d", &codigodacarta02);
    printf("Qual a cidade do estado02:\n");
    scanf("%s", cidadeB);
    printf("Quantidade de pontos turisticos02:\n");
    scanf("%d", &num_pontos_tur_02);
    printf("Qual a populacao 02:\n");
    scanf("%lu", &populacao02);
    printf("Qual o PIB 02:\n");
    scanf("%f", &PIB02);
    printf("Digite area02:\n");
    scanf("%f", &area02);
    densidade02 = (float)populacao02 / area02;
    printf("Densidade populacional 02: %.2f\n", densidade02);
    PIBperCapita02 = PIB02 / populacao02;
    printf("PIB per capita 02: %.2f\n", PIBperCapita02);

   
    superPoder01 = (float)populacao01 + area01 + PIB01 + num_pontos_tur_01 + PIBperCapita01 + (1.0f / densidade01);

   
    superPoder02 = (float)populacao02 + area02 + PIB02 + num_pontos_tur_02 + PIBperCapita02 + (1.0f / densidade02);

    printf("\n--- Comparacao das Cartas ---\n");

    
    printf("Populacao: Carta 1 vence? %d (%.lu > %.lu)\n", populacao01 > populacao02, populacao01, populacao02);

    
    printf("Area: Carta 1 vence? %d (%.2f > %.2f)\n", area01 > area02, area01, area02);

   
    printf("PIB: Carta 1 vence? %d (%.2f > %.2f)\n", PIB01 > PIB02, PIB01, PIB02);

   
    printf("Pontos Turisticos: Carta 1 vence? %d (%d > %d)\n", num_pontos_tur_01 > num_pontos_tur_02, num_pontos_tur_01, num_pontos_tur_02);

    
    printf("PIB per Capita: Carta 1 vence? %d (%.2f > %.2f)\n", PIBperCapita01 > PIBperCapita02, PIBperCapita01, PIBperCapita02);

   
    printf("Densidade Populacional: Carta 1 vence? %d (%.2f < %.2f)\n", densidade01 < densidade02, densidade01, densidade02);

   
    printf("Super Poder: Carta 1 vence? %d (%.2f > %.2f)\n", superPoder01 > superPoder02, superPoder01, superPoder02);

    return 0;
}