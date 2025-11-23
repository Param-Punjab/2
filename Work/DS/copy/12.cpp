#include <iostream>
using namespace std;

struct Term {
    int coeff;
    int x, y, z;
    Term* next;

    Term(int c, int a, int b, int c1) {
        coeff = c; x = a; y = b; z = c1;
        next = nullptr;
    }
};

class Polynomial {
public:
    Term* head;
    Polynomial() { head = nullptr; }

    void insertTerm(int coeff, int x, int y, int z) {
        Term* newTerm = new Term(coeff, x, y, z);
        if (!head) {
            head = newTerm;
            return;
        }
        // Insert at end
        Term* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newTerm;
    }

    void display() {
        Term* temp = head;
        bool first = true;
        while (temp) {
            if (!first && temp->coeff > 0) cout << " + ";
            cout << temp->coeff << "x^" << temp->x 
                 << "y^" << temp->y 
                 << "z^" << temp->z;
            temp = temp->next;
            first = false;
        }
        cout << endl;
    }

    Polynomial add(Polynomial &p2) {
        Polynomial result;
        Term* t1 = head;
        Term* t2 = p2.head;

        // Copy all terms from first polynomial
        while (t1) {
            result.insertTerm(t1->coeff, t1->x, t1->y, t1->z);
            t1 = t1->next;
        }

        // Add terms from second polynomial
        while (t2) {
            Term* temp = result.head;
            bool matched = false;
            while (temp) {
                if (temp->x == t2->x && temp->y == t2->y && temp->z == t2->z) {
                    temp->coeff += t2->coeff;
                    matched = true;
                    break;
                }
                temp = temp->next;
            }
            if (!matched) {
                result.insertTerm(t2->coeff, t2->x, t2->y, t2->z);
            }
            t2 = t2->next;
        }
        return result;
    }
};

int main() {
    Polynomial poly1, poly2;

    int n;
    cout << "Enter number of terms for POLY1: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c, x, y, z;
        cout << "Term " << i + 1 << " (coeff x_exp y_exp z_exp): ";
        cin >> c >> x >> y >> z;
        poly1.insertTerm(c, x, y, z);
    }

    cout << "Enter number of terms for POLY2: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c, x, y, z;
        cout << "Term " << i + 1 << " (coeff x_exp y_exp z_exp): ";
        cin >> c >> x >> y >> z;
        poly2.insertTerm(c, x, y, z);
    }

    cout << "\nPOLY1: ";
    poly1.display();
    cout << "POLY2: ";
    poly2.display();

    Polynomial sum = poly1.add(poly2);
    cout << "POLYSUM: ";
    sum.display();
    cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n";
    return 0;
}
