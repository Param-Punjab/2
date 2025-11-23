#include <iostream>
#include <iomanip>
using namespace std;

class ec_board {
  string name;
  float units;

  float calculate() {
    float p;
    if ( units <= 100 ) { p = units * 60; }
    else if ( units <= 300 ) { p = ( 100*60 ) + ( ( units - 100 )*80 ); }
    else if ( units > 300 ) {
      p = (100*60) + (200*80) + ((units-300)*90);
    }
    float r = 0.01 * p;
    if (r < 50) { r = 50.00; }
    else if (r > 300.00 ) {
      r = r + ((15 * r)/100);
    } else {
      r = r;
    }
    return r;
  }

  public:
    void input() {
      cout << "Name: ";
      cin.ignore();
      getline(cin, name);
      cout << "Units: ";
      cin >> units;
    }

    static void display(ec_board users[], int n); 
};

void ec_board::display(ec_board users[], int n) {
  cout << "\n\n--- BILL CREATED ---" << endl;
  cout << "Number of Users: " << n << endl;
  for(int i = 0; i < n; ++i) {
    cout << "\nUser [" << i+1 << "]" << endl;
    cout << "Name: " << (users[i]).name << endl;
    cout << "Units: " << (users[i]).units << endl;
    cout << fixed << setprecision(2);
    cout << "Charges: " << (users[i]).calculate() << endl;
  } 
}

int main() {
  cout << "--- ENTER DETAILS ---" << endl;
  int n;
  cout << "Enter Number of Users: ";
  cin >> n;
  ec_board users[n];
  for (int i = 0; i < n; ++i) {
    cout << "\nUser [" << i+1  << "]" << endl;
    users[i].input();
  }

  ec_board::display(users, n);
  return 0;
}
