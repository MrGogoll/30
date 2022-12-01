using namespace std;
#include <iostream>
struct gnom {
    int voz;
    int ros;
    char p;
};

int main()
{
    gnom a;
    a.voz = 10;
    a.ros = 134;
    a.p = 'W';
    gnom b;
    b.voz = 38;
    b.ros = 68;
    b.p = 'M';
    if (a.ros > b.ros) {
        cout << a.voz;
    }
    if (a.ros < b.ros) {
        cout << b.voz;
    }
}
