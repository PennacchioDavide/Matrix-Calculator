#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Matrix malloc
    int **tab1 = malloc(2 * sizeof(int *));
    int **tab2 = malloc(2 * sizeof(int *));
    for (int i = 0; i < 2; i++) {
        tab1[i] = malloc(2 * sizeof(int));
        tab2[i] = malloc(2 * sizeof(int));
    }

    // Matrix Init
    tab1[0][0] = 1; tab1[0][1] = 1;
    tab1[1][0] = 2; tab1[1][1] = 2;
    tab2[0][0] = 1; tab2[0][1] = 1;
    tab2[1][0] = 2; tab2[1][1] = 2;

    // Add Matrix
    int **add = addTwoMatrix(tab1, tab2, 2, 2);

    // Sub Matrix
    int **sub = subTwoMatrix(tab1, tab2, 2, 2);

    // Product with Number
    int **prodn = prodNumberMatrix(tab1, 4, 2, 2);

    // Product with Number
    int **prod = prodMatrix(tab1, tab2, 2, 2);

    printf("Add:\n");
    printMatrix(add, 2, 2);

    printf("Sub:\n");
    printMatrix(sub, 2, 2);

    printf("Prod with Number:\n");
    printMatrix(prodn, 2, 2);

    printf("Prod with Matrix:\n");
    printMatrix(prod, 2, 2);

    for (int i = 0; i < 2; i++) {
        free(tab1[i]);
        free(tab2[i]);
        free(add[i]);
        free(sub[i]);
        free(prodn[i]);
        free(prod[i]);
    }
    free(tab1);
    free(tab2);
    free(add);
    free(sub);
    free(prodn);
    free(prod);

    return 0;
}