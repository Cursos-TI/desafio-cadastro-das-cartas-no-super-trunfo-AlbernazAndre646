#include <stdio.h>

int main(){
    int codigocarta;
    float populacao;
    char cidade[50];

    printf("digite codigocarta: \n");
    scanf("%d", &codigocarta);

    printf("digite populacao: \n");
    scanf("%f", &populacao);

    printf("digite cidade: \n");
    scanf("%s", &cidade);

    printf("nome: %s\n", cidade);
    printf("codigocarta: %d\n", codigocarta);
    printf("populacao: %f\n", populacao);

    return 0;
}
