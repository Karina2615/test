//двовимірний масив
int **create_matrix(int row, int column)
{
    int **matrix = (int **)malloc(sizeof(int *) * row); // int **matrix == int *array[] масив вказівників
    //виділяємо пам'ять для рядків, в цьому масиві будуть зберігатися посилання/вказівники на рядки
    
    for( int i = 0; i < row; i++)
    {
        matrix[i] /* або *(matrix + i )*/ = (int *)malloc(sizeof(int) *column)
        //malloc повертає невизначений поінтер void*, тому ми пишемо явне приведення (int *) 
    }
return matrix;
}

//одновимірний масив
int *create_matrix1(int row, int column)
{
    return (int *)malloc(sizeof(int) * row * column);
}
