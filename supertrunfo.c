#include <stdio.h>

int main(){
    char estado[1];
    char codigo[5];
    char nome[30];
    int populacao;
    int numerodepontosturisticos;
    float area;
    float PIB1;
    float densidadepopulacional;
    float PIBpercapita;
    //--------------------------------//
    char ESTADO[1];
    char CODIGO[5];
    char NOME[30];
    int POPULACAO;
    int NUMERODEPONTOSTURISTICOS;
    float AREA;
    float PIB2;
    float DENSIDADEPOPULACIONAL = POPULACAO/AREA;
    float PIBPERCAPITA = PIB2/POPULACAO;
    
    /*separei as informações de cada cidade deixando uma em letras minusculas
    e a outra em letras maiusculas(menos o PIB que deixei com PIB 1 e PIB 2)*/

    printf("digite o estado: \n");
    scanf("%c", &estado); 

    printf("digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("digite a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("digite a area da cidade: \n");
    scanf("%f", &area);

    printf("digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    densidadepopulacional = populacao/area;
    PIBpercapita =PIB1/populacao;
    //-------------------------------------------------------

    printf("digite o estado 2: \n");
    scanf("%c", &ESTADO); //por algum motivo pulou esta etapa

    printf("digite o codigo da cidade 2: \n");
    scanf("%s", &CODIGO);

    printf("digite o nome da cidade 2: \n");
    scanf("%s", &NOME);

    printf("digite a populacao da cidade 2: \n");
    scanf("%d", &POPULACAO);

    printf("digite a area da cidade 2: \n");
    scanf("%f", &AREA);

    printf("digite o numero de pontos turisticos da cidade 2: \n");
    scanf("%d", &NUMERODEPONTOSTURISTICOS);

    printf("digite o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    DENSIDADEPOPULACIONAL = POPULACAO/AREA;
    PIBPERCAPITA =PIB2/POPULACAO;
    printf("-------------------------\n");//separação das informações

    printf("carta 1 \n");

    printf("Estado: %c \n", estado);
    printf("Codigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao da cidade: %d \n", populacao);
    printf("Area da cidade em km2: %2.f \n", area);
    printf("Numero de pontos turisticos: %d \n", numerodepontosturisticos);
    printf("PIB da cidade: %2.f \n", PIB1);
    printf("Densidade populacional: %2.f \n", densidadepopulacional);
    printf("PIB per capita: %2.f \n",PIBpercapita);

    printf("-------------------------\n");//separação das informações

    printf("carta 2 \n");

    printf("Estado: %c \n", ESTADO);
    printf("Codigo da cidade: %s \n", CODIGO);
    printf("Nome da cidade: %s \n", NOME);
    printf("Populacao da cidade: %d \n", POPULACAO);
    printf("Area da cidade em km2: %2.f \n", AREA);
    printf("Numero de pontos turisticos: %d \n", NUMERODEPONTOSTURISTICOS);
    printf("PIB da cidade: %2.f \n", PIB2);
    printf("Densidade populacional: %2.f \n", DENSIDADEPOPULACIONAL);
    printf("PIB per capita: %2.f \n",PIBPERCAPITA);
    
    //Adição da densidade populacional e do PIB per capita ao programa
    return 0;
}