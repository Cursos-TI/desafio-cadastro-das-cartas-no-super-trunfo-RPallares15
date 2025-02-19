#include <stdio.h>

int main(){
    char estado ;
    char codigo[3];
    char Nome[30];
    int populacao;
    int NumeroDePontosTuristicos;
    float area;
    float PIB;

    printf("digite o estado: \n");
    scanf("%c", &estado); 

    printf("digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &Nome);

    printf("digite a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("digite a area da cidade: \n");
    scanf("%f", &area);

    printf("digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Estado: %c \n", estado);
    printf("Codigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", Nome);
    printf("Populacao da cidade: %d \n", populacao);
    printf("Area da cidade em km2: %f \n", area);
    printf("Numero de pontos turisticos: %d \n", NumeroDePontosTuristicos);
    printf("PIB da cidade: %f \n", PIB);
    
    return 0;
}