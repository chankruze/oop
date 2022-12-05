/*
Author: chankruze (chankruze@gmail.com)
Created: Mon Dec 05 2022 18:41:53 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write a program to convert a 2×2 matrix into 3×3 matrix, where a new row element is obtained
// by adding all elements in that row, a new column element is obtained by adding all elements in
// that column and the diagonal element is obtained by summing all diagonal elements of given
// 2×2 matrix.

#include <iostream>
#include <vector>

using namespace std;

void print_matrix(vector<vector<int>> matrix) {
  int size = matrix.size();
  cout << "------ matrix ------" << endl;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "------ ------ ------" << endl;
}

void convert(vector<vector<int>> matrix) {
  int sum_row = 0, sum_col = 0, sum_diag = 0, size = matrix.size();
  vector<vector<int>> new_matrix(size + 1, vector<int>(size + 1));

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      new_matrix[i][j] = matrix[i][j];
      sum_row += matrix[i][j];
      sum_col += matrix[j][i];

      if (i == j) {
        sum_diag += matrix[i][j];
      }
    }

    new_matrix[i][size] = sum_row;
    new_matrix[size][i] = sum_col;
    sum_row = 0;
    sum_col = 0;
  }

  new_matrix[size][size] = sum_diag;

  print_matrix(new_matrix);
}

int main() {
  int size;
  cout << "Enter the size of the square matrix: ";
  cin >> size;

  vector<vector<int>> matrix(size, vector<int>(size));

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << "Enter the value for [" << i << "]"
           << "[" << j << "]: ";
      cin >> matrix[i][j];
    }
  }

  print_matrix(matrix);
  convert(matrix);

  return 0;
}