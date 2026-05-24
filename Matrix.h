/** \file Matrix.h
 * \brief Declarations for matrix utility functions.
 * \details This file contains constants and function prototypes for matrix operations.
 * \author Daniil Stankevich
 * \date 2026-05-24
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

#endif