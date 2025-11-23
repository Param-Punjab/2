// Implement a Program to find the sum of two polynomials POLY1(x,y,z) and POLY(x,y,z) and store the result in POLYSUM(x,y,z)
#include <iostream>
using namespace std;

int main() {
  int fx, fy, fz, sx, sy, sz;
  cout << "--- SUM OF POLYNOMIAL's ---" << endl;
  cout << "Input First Polynomial" << endl;
  cout << "x: ";
  cin >> fx;
  cout << "y: ";
  cin >> fy;
  cout << "z: ";
  cin >> fz;
  cout << "POLY1(" << fx << "," << fy << "," << fz << ")" << endl;
  cout << "Input Second Polynomial"<< endl;
  cout << "x: ";
  cin >> sx;
  cout << "y: ";
  cin >> sy;
  cout << "z: ";
  cin >> sz;
  cout << "POLY2(" << sx << "," << sy << "," << sz << ")" << endl; 
  cout << "RESULT: POLYSUM(" << fx+sx << "," << fy+sy << "," << fz+sz << ")" << endl;
  return 0;
}
