/** \file Matrix.cpp
 * \brief Implementation of the Matrix class.
 * \details This file contains the implementation of the Matrix class, which provides basic operations for matrix manipulation, including addition, multiplication, and transposition.
 * \author Daniil Stankevich
 * \date 2026-05-20
 * \copyright University of Nicosia
 */


 #include "Matrix.h"
 #include <iostream>
 #include <cassert>

/** <code>printMatrix</code> prints the contents of a matrix to the console.
 * <BR>
 * @param mat The matrix to be printed.
 * @param maxRow The number of rows in the matrix.
 */
void printMatrix(const double mat[][MAX_COL], const int maxRow) {

    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);

    for(int i = 0; i < maxRow; i++){
        for(int j = 0; j < MAX_COL; j++){
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

/** <code>sumOfRow</code> calculates the sum of elements in a specified row of the matrix.
 * <BR>
 * @param mat The matrix containing the elements.
 * @param row The index of the row for which to calculate the sum.
 * @param maxRow The number of rows in the matrix.
 * @return The sum of elements in the specified row.
 */
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);
    assert(row >= 0 && row < maxRow);

    double sum = 0.0;
    for(int j = 0; j < MAX_COL; j++){
        sum += mat[row][j];
    }
    return sum;
}

/** <code>sumOfCol</code> calculates the sum of elements in a specified column of the matrix.
 * <BR>
 * @param mat The matrix containing the elements.
 * @param column The index of the column for which to calculate the sum.
 * @param maxRow The number of rows in the matrix.
 * @return The sum of elements in the specified column.
 */
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);
    assert(column >= 0 && column < MAX_COL);

    double sum = 0.0;
    for(int i = 0; i < maxRow; i++){
        sum += mat[i][column];
    }
    return sum;
}

/** <code>fillWithRandomNum</code> fills the matrix with random numbers.
 * <BR>
 * @param mat The matrix to be filled with random numbers.
 * @param maxRow The number of rows in the matrix.
 */
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {

    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);

    for(int i = 0; i < maxRow; i++){
        for(int j = 0; j < MAX_COL; j++){
            mat[i][j] = rand() % 10 + 1; // Random numbers from 1 to 10
        }
    }

}

/** <code>maxInMatrix</code> finds the maximum value in the matrix.
 * <BR>
 * @param mat The matrix to be searched for the maximum value.
 * @param maxRow The number of rows in the matrix.
 * @return The maximum value found in the matrix.
 */
double maxInMatrix(const double mat[][MAX_COL], const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);

    double maxVal = mat[0][0];
    for(int i = 0; i < maxRow; i++){
        for(int j = 0; j < MAX_COL; j++){
            if(mat[i][j] > maxVal){
                maxVal = mat[i][j];
            }
        }
    }
    return maxVal;
}

/** <code>minInMatrix</code> finds the minimum value in the matrix.
 * <BR>
 * @param mat The matrix to be searched for the minimum value.
 * @param maxRow The number of rows in the matrix.
 * @return The minimum value found in the matrix.
 */
double minInMatrix(const double mat[][MAX_COL], const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);

    double minVal = mat[0][0];
    for(int i = 0; i < maxRow; i++){
        for(int j = 0; j < MAX_COL; j++){
            if(mat[i][j] < minVal){
                minVal = mat[i][j];
            }
        }
    }
    return minVal;
}

/** <code>averageOfMatrix</code> calculates the average value of all elements in the matrix.
 * <BR>
 * @param mat The matrix containing the elements.
 * @param maxRow The number of rows in the matrix.
 * @return The average value of all elements in the matrix.
 */
double averageOfMatrix(const double mat[][MAX_COL], const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);

    double sum = 0.0;
    int totalElements = maxRow * MAX_COL;

    for(int i = 0; i < maxRow; i++){
        for(int j = 0; j < MAX_COL; j++){
            sum += mat[i][j];
        }
    }
    return sum / totalElements;
}


//functions from Harald

/**
 * The <code>isIdentityMatrix</code> function checks if the matrix is an
 * identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns <code>true</code> if this is an identity matrix.
 */
bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);
    
    if (MAX_COL != maxRow)
        return false; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < maxRow; ++j) {
            if (i == j && mat[i][j] != 1)
                return false;
            else if (i != j && mat[i][j] != 0)
                return false;
        }
    }
    return true;
}

/**
 * The <code>makeIdentityMatrix</code> function makes the argument matrix into an
 * identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns <code>false</code> if this is not a square matrix.
 */
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);
    
    if (MAX_COL != maxRow)
        return false; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < maxRow; ++j) {
            if (i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }
    return true;
}

/**
 * The <code>sumOfDiagonal</code> function returns the sum of the diogonal of the argument matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns sum of diagonal, <code>-1</code> if this is not a square matrix.
 */
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow) {
    
    assert(maxRow <= MAX_ROW);
    assert(maxRow > 0);
    assert(MAX_COL > 0);
    
    double sum = 0.0;

    if (MAX_COL != maxRow)
        return -1; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        sum += mat[i][i];
    }

    return sum;
}
