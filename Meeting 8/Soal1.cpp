#include <iostream>
using namespace std;

struct point{int x,y;};

int main() {
    point p{5,2};
    point *ptr = &p;
    cout << ptr->x + p.y;
}