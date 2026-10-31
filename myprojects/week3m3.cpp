#include <iostream>
using namespace std;

class Point {
    int x, y;

    public:
    Point(int=0, int=0);
    void display() {cout << "X: " << x << ", Y: " << y << endl;}
};
Point::Point(int a, int b) {
    x = a;
    y = b;
}

int main() {
    Point p(10, 20);
    p.display();
    Point p2;
    p2.display();
    Point p3(30);
    p3.display();
    
    Point p4(, 50);
    p4.display();
    Point p5(50, );
    p5.display();
    
    return 0;
}