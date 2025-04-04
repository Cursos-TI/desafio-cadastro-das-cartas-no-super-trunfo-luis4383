#include <stdio.h>



int main() {
    char estado01, estado02;
    int codigodacarta01, codigodacarta02;
    char cidadeA[50], cidadeB[50];
    float populacao01, populacao02;
    float PIBperCapita01, PIBperCapita02;
    float area01, area02;
    float densidade01, densidade02;
    float PIB01, PIB02;
    int num_pontos_tur_01, num_pontos_tur_02;

   
    printf("carta01:\n");
    printf("Digite a letra do estado01:\n");
    scanf(" %c", &estado01); 
    printf("Digite o codigo da carta01:\n");
    scanf("%d", &codigodacarta01);
    printf("Qual a cidade do estado01:\n");
    scanf("%s", cidadeA);
    printf("Numeros de pontos turisticos01:\n");
    scanf("%d", &num_pontos_tur_01);

   
    printf("carta02:\n");
    printf("Digite a letra do estado02:\n");
    scanf(" %c", &estado02); 
    printf("Digite o codigo da carta02:\n");
    scanf("%d", &codigodacarta02);
    printf("Qual a cidade do estado02:\n");
    scanf("%s", cidadeB);
    printf("Quantidade de pontos turisticos02:\n");
    scanf("%d", &num_pontos_tur_02);

    
    printf("Qual a populacao 01:\n");
    scanf("%f", &populacao01);
    printf("Qual a populacao 02:\n");
    scanf("%f", &populacao02);
    printf("Qual o PIB 01:\n");
    scanf("%f", &PIB01);
    printf("Qual o PIB 02:\n");
    scanf("%f", &PIB02);

    
    PIBperCapita01 = PIB01 / populacao01;
    PIBperCapita02 = PIB02 / populacao02;

   
    printf("Digite area01:\n");
    scanf("%f", &area01);
    densidade01 = populacao01 / area01;
    printf("Densidade populacional 01: %.2f\n", densidade01);

    printf("Digite area02:\n");
    scanf("%f", &area02);
    densidade02 = populacao02 / area02;
    printf("Densidade populacional 02: %.2f\n", densidade02);

   
    printf("PIB per capita 01: %.2f\n", PIBperCapita01);
    printf("PIB per capita 02: %.2f\n", PIBperCapita02);

    







    return 0;


}