#include <iostream>
#include <string>
using namespace std;

class Book {
  private:
    string title;
    string author;
    string publisher;
    float price;
    int stock;
  public:
    Book( string t=" ", string a=" ", string pub=" ", float p = 0, int s = 0) {
      title = t;
      author = a;
      publisher = pub;
      price = p;
      stock = s;
    }

    void getData() {
      cout << "Enter Book Title: ";
      cin.ignore();
      getline(cin, title);
      cout << "Enter Author: ";
      cin.ignore();
      getline(cin, author);
      cout << "Enter publisher: ";
      cin.ignore();
      getline(cin, publisher);
      cout << "Enter Price: ";
      cin >> price;
      cout << "Enter stock: ";
      cin >> stock;
      cout << endl;
    }

    void display() {
      cout << "Title: " << title << endl;
      cout << "author: " << author << endl;
      cout << "Publisher: " << publisher << endl;
      cout << "Price: " << price << endl;
      cout << "Stock: " << stock << endl << endl;
    }

    bool searchBook(string t, string a) {
      return (title == t && author == a);
    }

    void purchase(int copies) {
      if (copies <= stock) {
        cout << "Total Price: " << price*copies << endl;
        stock -= copies;
      } else {
        cout << "Required copies not in stock" << endl;
      }
    }
};

int main() {
  int n;

  cout << "Enter number of Books: ";
  cin >> n;
  Book * inventory[50];
  for(int i = 0; i < n; i++) {
    inventory[i] = new Book();
    inventory[i]->getData();
  }

  string searchTitle, searchAuthor;
  cout << "Enter Title of Book to search: ";
  cin.ignore();
  getline(cin, searchTitle);
  cout << "Enter author: ";
  cin.ignore();
  getline(cin, searchAuthor);
  bool found = false;
  for (int i = 0; i<n ; i++) {
    if (inventory[i]->searchBook(searchTitle, searchAuthor)) {
      found = true;
      cout << "Book found!" << endl;
      inventory[i]->display();
      int copies;
      cout << "Enter number of copies required: ";
      cin >> copies;
      inventory[i]->purchase(copies);
      break;
    }
  }

  if(!found) {
    cout << "Book not available in inventary" << endl;
  }
  for(int i = 0; i< n; i++) {
    delete inventory[i];
  }

  return 0;
}