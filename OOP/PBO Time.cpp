#include <iostream>

using namespace std;

class Time {
public:
    // Konstruktor
    Time(int hour, int minute) : hour(hour), minute(minute) {}

    // Metode untuk menampilkan waktu
    void display() {
        cout << hour << ":" << minute << endl;
    }

private:
    int hour, minute;
};

int main() {
    Time now(14, 30);

    cout << "Waktu Sekarang: ";
    now.display();

    return 0;
}
