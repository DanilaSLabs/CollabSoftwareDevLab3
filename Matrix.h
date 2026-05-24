/** \file Matrix.h
 * \brief Declaration of the Matrix class.
 * \details This file contains the declaration of the Matrix class, which provides basic operations for matrix manipulation, including addition, multiplication, and transposition.
 * \author Daniil Stankevich
 * \date 2026-05-20
 * \copyright University of Nicosia
 */

#ifndef MATRIX_H
#define MATRIX_H

const int MAX_ROW = 3;
const int MAX_COL = 3;

void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);

double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);

double maxInMatrix(const double mat[][MAX_COL], const int maxRow);
double minInMatrix(const double mat[][MAX_COL], const int maxRow);
double averageOfMatrix(const double mat[][MAX_COL], const int maxRow);

bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow);
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow);
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow);

double* sumOfRows(const double mat[][MAX_COL], const int maxRow);
double* sumOfCols(const double mat[][MAX_COL], const int maxRow);

#endif