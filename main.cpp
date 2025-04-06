#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int Area(int x1, int y1, int x2, int y2, int x3, int y3) {
    int p = ((x2 - x3) * (y1 - y3) - ((x1 - x3) * (y2 - y3)));
    if (p < 0) return -p;
    else return p;
}

int main()
{
    int a, b;
    cin >> a;
    Point punkty[30];
    int pole = 0;
    for (int i = 0; i < a; i++) {
        pole = 0;
        cin >> b;
        for (int j = 0; j < b / 2; j++) {
            cin >> punkty[j].x >> punkty[j].y;
        }
        for (int j = 1; j < b / 2 - 1; j++) {
            pole += Area(punkty[0].x, punkty[0].y, punkty[j].x, punkty[j].y, punkty[j + 1].x, punkty[j + 1].y);
        }
        cout << (int)pole / 2 << endl;
    }

    return 0;
}
