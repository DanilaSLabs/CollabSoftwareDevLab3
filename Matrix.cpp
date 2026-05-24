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

double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
    return 0;
}

double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
    return 0;
}

void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {

}