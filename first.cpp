#include <iostream>
using namespace std;

int main() {
  int r, c;

  cout << "Enter number of rows of matrix: ";
  cin >> r;
  cout << "ENter number of cols of matrix: ";
  cin >> c;

  int f_matrix[r][c], s_matrix[r][c];

  cout << "\nEnter elements of first matrix below: " << endl;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j< c; ++j) {
      cout << "first_matrix[" << i << "][" << j << "]: ";
      cin >> f_matrix[i][j];
    }
  }

  cout << "\nEnter elements of second matrix below: " << endl;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cout << "second_matrix[" << i << "][" << j << "]: ";
      cin >> s_matrix[i][j];
    }
  }

  cout << "\nsum of first and second matrix: " << endl;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cout << "sum_matrix[" << i << "][" << j << "]: " << f_matrix[i][j]+s_matrix[i][j] << endl; 
    }
  }

  cout << "\nProgram Writer Info: ";
  cout << "\nName: Paramveer Singh";
  cout << "\nCRN: 2415209";
  cout << "\nSection: D";
  cout << "\nGroup: D1";
  return 0;
}