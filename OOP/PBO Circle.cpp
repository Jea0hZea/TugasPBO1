#include <iostream>
#include <cmath>

using namespace std;

class Circle {
public:
    Circle(double radius) : radius(radius) {}

    // Menghitung luas lingkaran
    double area() {
        return M_PI * radius * radius;
    }

    // Menghitung keliling lingkaran
    double circumference() {
        return 2 * M_PI * radius;
    }

private:
    double radius;
};

int main() {
    Circle myCircle(5.0);

    cout << "Luas Lingkaran: " << myCircle.area() << endl;
    cout << "Keliling Lingkaran: " << myCircle.circumference() << endl;

    return 0;
}
