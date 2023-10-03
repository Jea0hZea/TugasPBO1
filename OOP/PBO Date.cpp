#include <iostream>

using namespace std;

class Date {
public:
    // Konstruktor
    Date(int day, int month, int year) : day(day), month(month), year(year) {}

    // Metode untuk menampilkan tanggal
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }

private:
    int day, month, year;
};

int main() {
    Date today(3, 10, 2023);

    cout << "Hari Ini: ";
    today.display();

    return 0;
}
