#include <iostream>
#include <string>
using namespace std;

class staff {
  private:
    string name;
    int code;
  public:
    virtual void getData() {
      cout << "Enter name: ";
      cin >> name;
      cout << "Enter code: ";
      cin >> code;
    }

    virtual void display() {
      cout << "Name: " << name << endl;
      cout << "Code: " << code << endl;
    }
    virtual void nStaff() {}
};

class Teacher: public staff {
  private:
    string subject;
    int publications;
  public:
    void getData() override {
      staff::getData();
      cout << "Enter subject: ";
      cin >> subject;
      cout << "Enter number of publication: ";
      cin >> publications;
    }

    void display() override {
      staff::display();
      cout << "Subject: " << subject << endl;
      cout << "Number of publications: " << publications << endl;
    }
};

class officer: public staff {
  private:
    string grade;
  public:
    void getData() override {
      staff::getData();
      cout << "Enter grade: ";
      cin >> grade;
    }

    void display() override {
      staff::display();
      cout << "Grade: " << grade << endl;
    }
};

class Typist: public staff {
  protected:
    int speed;
  public:
    void getData() override {
      staff::getData();
      cout << "Enter Typing Speed (WPM) : "; 
      cin >> speed;
    }

    void display() override {
      staff::display();
      cout << "Typing speed: " << speed << "WPM" << endl;
    }
};

class regular: public Typist {
  private:
    float salary;
  public:
    void getData() override {
      Typist::getData();
      cout << "Enter monthly slary: ";
      cin >> salary;
    }

    void display() override {
      Typist::display();
      cout << "Monthly salary: " << salary << endl;
    }
};

class cascual: public Typist {
  private:
    float dailyways;
  public:
    void getData() override {
      Typist::getData();
      cout << "Enter daily wages: ";
      cin >> dailyways;
    }
}