#include <iostream>

using namespace std;

class Point{
public:
    Point(double x, double y) : x(x), y(y) {}

    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    
    }

private:
    double x, y;
};

int main() {
    Point myPoint(3.0, 4.0);

    cout << "Koordinat Titik: ";
    myPoint.display();

    return 0;
}