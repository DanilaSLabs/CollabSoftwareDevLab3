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

    double mat[MAX_ROW][MAX_COL] = { {1.0, 2.0, 3.0},
                                  {4.0, 5.0, 6.0},
                                  {7.0, 8.0, 9.0} };
    printMatrix(mat, MAX_ROW);

    int choice;

    do {
        std::cout << std::endl;
        std::cout << "Menu" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "1. Fill with random numbers" << std::endl;
        std::cout << "2. Print matrix" << std::endl;
        std::cout << "3. Sum of a row" << std::endl;
        std::cout << "4. Sum of a column" << std::endl;
        std::cout << "5. Find maximum value" << std::endl;
        std::cout << "6. Find minimum value" << std::endl;
        std::cout << "7. Calculate average value" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                fillWithRandomNum(mat, MAX_ROW);
                std::cout << "Matrix filled with random numbers." << std::endl;
                break;

            case 2:
                std::cout << "Matrix:" << std::endl;
                printMatrix(mat, MAX_ROW);
                break;

            case 3: {
                int row;
                std::cout << "Enter row number (1-" << MAX_ROW << "): ";
                std::cin >> row;

                if(row >= 1 && row <= MAX_ROW) {
                    std::cout << "Sum of row " << row << ": "
                              << sumOfRow(mat, row - 1, MAX_ROW) << std::endl;
                } else {
                    std::cout << "Invalid row number." << std::endl;
                }
                break;
            }

            case 4: {
                int column;
                std::cout << "Enter column number (1-" << MAX_COL << "): ";
                std::cin >> column;

                if(column >= 1 && column <= MAX_COL) {
                    std::cout << "Sum of column " << column << ": "
                              << sumOfCol(mat, column - 1, MAX_ROW) << std::endl;
                } else {
                    std::cout << "Invalid column number." << std::endl;
                }
                break;
            }

            case 5:
                std::cout << "Maximum value: "
                          << maxInMatrix(mat, MAX_ROW) << std::endl;
                break;

            case 6:
                std::cout << "Minimum value: "
                          << minInMatrix(mat, MAX_ROW) << std::endl;
                break;

            case 7:
                std::cout << "Average value: "
                          << averageOfMatrix(mat, MAX_ROW) << std::endl;
                break;

            case 0:
                std::cout << "Exiting program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

    } while(choice != 0);

    return 0;

    return 0;
}