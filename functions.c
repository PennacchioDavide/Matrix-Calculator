#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

void printMatrix(int **mat, int len1, int len2) {
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Addition   Soustraction    Multiplication(scalaire et entre matrices)
int **addTwoMatrix(int **mat1, int **mat2, int len1, int len2) {
    int **res = (int **) malloc(sizeof(int *) * (len1+1));
    for (int k = 0; k < len1; k++) {
        res[k] = malloc(sizeof(int) * (len2));
    }

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return res;
}

int **subTwoMatrix(int **mat1, int **mat2, int len1, int len2) {
    int **res = (int **) malloc(sizeof(int) * (len1+1));
    for (int k = 0; k < len1; k++) {
        res[k] = malloc(sizeof(int) * (len2));
    }

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            res[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    return res;
}

int **prodNumberMatrix(int **mat, int n, int len1, int len2) {
    int **res = (int **) malloc(sizeof(int) * (len1+1));
    for (int k = 0; k < len1; k++) {
        res[k] = malloc(sizeof(int) * (len2));
    }

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            res[i][j] = mat[i][j] * n;
        }
    }
    return res;
}