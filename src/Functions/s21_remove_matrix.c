#include "../s21_matrix.h"

void s21_remove_matrix(matrix_t *A) {
  if (A) {
    for (int i = 0; i < A->rows; i++) {
      if (A->matrix[i] != NULL) {
        free(A->matrix[i]);
      }
    }
    if (A->matrix != NULL) {
      free(A->matrix);
    }
    A->matrix = NULL;
    A->columns = 0;
    A->rows = 0;
  }
}