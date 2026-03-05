#include <stdio.h>

int main() {

    // Declarar variáveis Produto, u i estoque, double valor unitário, double valor total
    // u i quantidade mínima
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMínimoA = 500;
    unsigned int estoqueMínimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;


    // Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Protudo %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMínimoA;
    resultadoB = estoqueB > estoqueMínimoB;

    printf("O Produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O Produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    // Comparações com o valor totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", 
                               estoqueA * valorA, 
                               estoqueB * valorB,
                   (estoqueA * valorA) > (estoqueB * valorB));
    
                                                  
    return 0;
}