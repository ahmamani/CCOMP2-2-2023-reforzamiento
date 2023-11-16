#include <iostream>

using namespace std;


class Point {
private:
    float x;
    float y;
public:
    Point(float x, float y) {
        this->x = x;
        this->y = y;
        cout << this << endl;
    }

    void printCoords() {
        cout << x << " " << y << endl;
    }
};

int main() {
    int *n = new int(6);
    cout << *n-1 <<endl;

    Point point(2.4, 5.6);
    point.printCoords();

    Point *point_ptr = new Point(2.4, 5.6);
    (*point_ptr).printCoords();
    point_ptr -> printCoords();
}
