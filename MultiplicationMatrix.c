#include <stdio.h>
#include <stdlib.h>

#define ROW 10
#define COL 10

void printmatrix(int matrix1[ROW][COL], int matrix2[ROW][COL], int ResultMatrix[ROW][COL], int row1, int col1, int row2, int col2)
{
    if (col1 != row2)
    {
        printf("Multiplication is not possible");
    }
    else
    {
        int sum = 0;

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                ResultMatrix[i][j] = sum;
                sum = 0;
            }
        }
        printf("Multiplication of both matrix1 and matrix2\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d\t", ResultMatrix[i][j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int row1, col1, row2, col2;
    int matrix1[ROW][COL];
    int matrix2[ROW][COL];
    int ResulttMatrix[ROW][COL];

    printf("Enter row and col of the 1st matrix ");
    scanf("%d%d", &row1, &col1);

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter the element at 1st matrix[%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("-----1st matrix--------\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Enter row and col of the 2nd matrix ");
    scanf("%d%d", &row2, &col2);

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Enter the element at 1st matrix[%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("-----2nd matrix--------\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printmatrix(matrix1, matrix2, ResulttMatrix, row1, col1, row2, col2);

    return 0;
}