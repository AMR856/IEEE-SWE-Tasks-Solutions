#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 255

int** allocate_matrix(int, int);
void free_matrix(int **, int);
void store_matrix_elms(int **, int);
void store_matrix_file(char *, int , int, int **);

int main(void){
    int m, n, j, k;
    printf("Enter the size of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the size of the second matrix: ");
    scanf("%d %d", &j, &k);
    if (m > 0 && n > 0 && j > 0 && k > 0 && n == j){
        int **matrix_a = allocate_matrix(m, n);
        int **matrix_b = allocate_matrix(j, k);
        int **matrix_c = allocate_matrix(m, k);
        store_matrix_elms(matrix_a, m);
        store_matrix_elms(matrix_b, j);
    } else {
        printf("Matrcies can't be multipled\n");
        return EXIT_FAILURE;
    }
}

int** allocate_matrix(int rows, int cols){
    int **matrix = (int **)malloc(sizeof(int *) * rows);
    for (int i = 0; i < rows; i++) matrix[i] = (int *)malloc(sizeof(int) * cols);
}

void store_matrix_elms(int **matrix, int rows){
    char *line;
    int current_col = 0;
    for (int i = 0; i < rows; i++){
        printf("Write the %dth row\n", i);
        line = (char *)malloc(MAX_LINE_LENGTH);
        char *token = strtok(line, " ");
        while (token != NULL){
            matrix[i][current_col++] = atoi(token);
            token = strtok(NULL, " ");
        }
    }
}

void free_matrix(int **arr, int rows_num){
    for (int i = 0; i < rows_num; i++) free(arr[i]);
    free(arr);
}


void store_matrix_file(char *filename, int rows, int cols, int **matrix){
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file\n");
        return;
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (j != cols - 1)
                fprintf(file, "%d ", matrix[i][j]);
            else
                fprintf(file, "%d", matrix[i][j]);
        }
        fprintf(file, '\n');
    }
}