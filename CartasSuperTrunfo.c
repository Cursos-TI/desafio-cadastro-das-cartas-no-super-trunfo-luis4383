#include <stdio.h>



int main() {
    char estado01, estado02;
    int codigodacarta01, codigodacarta02;
    char cidadeA, cidadeB[50];
    float  populacao01 , populacao02;
    float area01, area02;
    float densidade01, densidade02;
    
    printf ("digite a populacao01:\n");
    scanf ("%f", &populacao01);

    printf("digite area01:\n");
    scanf("%f" , &area01);

    densidade01 = populacao01 / area01;
    
    printf("Densidade populacional 01: %.2f\n", densidade01);

    printf ("digite a populacao02:\n");
    scanf ("%f", &populacao02);

    printf("digite area02:\n");
    scanf("%f" , &area02);

    densidade02 = populacao02 / area02;
    
    printf("Densidade populacional 02: %.2f\n", densidade02);

    float PIB01, PIB02;
    int num_pontos_tur_01, num_pontos_tur_02;

    printf("carta01:\n");

    printf("Digite a letra do  estado01:\n");
    scanf("%c",&estado01);

    printf("Digite o codigo da carta01:\n");
    scanf("%d",&codigodacarta01);

   printf("qual a cidade do estado01:\n");
    scanf("%s",&cidadeA);

    printf("qual a populacao01:\n");
    scanf("%d",&populacao01);

    printf("tamanho da area01:\n");
    scanf("%f",&area01);

    printf("qual o pib01:\n");
    scanf("%f",&PIB01);

    printf("numeros de pontos turisticos01:\n");
    scanf("%d",&num_pontos_tur_01 );

    printf("carta02:\n");

    printf("digite a letra do estado02:\n");
    scanf(" %c",&estado02);

    printf("digite o codigo da carta02:\n");
    scanf("%d",&codigodacarta02);

    printf("qual a cidade B: \n");
    scanf ("%s",&cidadeB);

     printf ("qual a populacao da cidadeB\n");
    scanf ("%d",&populacao02);

    printf ("qual o tamanho da area2:\n");
    scanf ("%f",&area02);

    printf("qual o pib02:\n");
    scanf("%f",&PIB02);

    printf ("quantidade de pontos turisticos02:\n");
    scanf ("%d",&num_pontos_tur_02);















    return 0;
}
