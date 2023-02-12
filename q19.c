#include <stdio.h>

void enterMatrix(int mat[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Enter element [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  }
}

void printMatrix(int mat[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

void transposeMatrix(int mat[3][3], int result[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      result[j][i] = mat[i][j];
    }
  }
}

int main() {
  int mat1[3][3], mat2[3][3], result[3][3];

  printf("Enter first matrix:\n");
  enterMatrix(mat1);

  printf("Enter second matrix:\n");
  enterMatrix(mat2);

  printf("First matrix:\n");
  printMatrix(mat1);

  printf("Second matrix:\n");
  printMatrix(mat2);

  addMatrices(mat1, mat2, result);
  printf("Sum of the matrices:\n");
  printMatrix(result);\

  transposeMatrix(mat1, result);
  printf("Transpose of the first matrix:\n");
  printMatrix(result);

  return 0;
}
