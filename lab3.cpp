/** \file lab3.cpp
 * \brief Implementation of the Matrix class.
 * \details This f
 * ile contains the implementation of the Matrix class, which provides basic operations for matrix manipulation, including addition, multiplication, and transposition.
 * \author Daniil Stankevich
 * \date 2026-05-20
 * \copyright University of Nicosia
 */


#include <iostream>
#include "Matrix.h"

int main() {

    const int MAX_ROW = 3;
    double mat[MAX_ROW][MAX_COL] = { {1.0, 2.0, 3.0},
                                  {4.0, 5.0, 6.0},
                                  {7.0, 8.0, 9.0} };
    printMatrix(mat, MAX_ROW);

    return 0;
}